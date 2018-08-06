#!/usr/bin/env python3

# Copyright 2018 Stanford University
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

import argparse
import collections
import csv
import numpy
import os
import re
import sys

_columns = collections.OrderedDict([
    ('elapsed', (re.compile(r'^\s*Elapsed Time ([0-9.e+-]+) seconds$', re.MULTILINE), float)),
    ('iterations', (re.compile(r'^\s*Iterations: ([0-9]+)$', re.MULTILINE), int)),
    ('steps', (re.compile(r'^\s*Time Steps: ([0-9]+)$', re.MULTILINE), int)),
    ('tasks', (re.compile(r'^\s*Total Tasks ([0-9]+)$', re.MULTILINE), int)),
    ('width', (re.compile(r'^\s*Max Width: ([0-9]+)$', re.MULTILINE), int)),
])

def same(values):
    return all(value == values[0] for value in values)

def group_by(keys, values):
    last_key = None
    last_group = None
    for key, value in zip(keys, values):
        if key != last_key:
            if last_group is not None:
                yield (last_key, last_group)
            last_group = []
        last_key = key
        last_group.append(value)

    if last_group is not None:
        yield (last_key, last_group)

def analyze(filename, nodes, cores, threshold):
    compute = collections.OrderedDict([
        ('scale_factor', lambda t: t['iterations'][0] / t['iterations']),
        ('time_per_task', lambda t: t['elapsed'] / t['tasks'] * nodes * cores * 1000),
        ('efficiency', lambda t: t['elapsed'][0] / (t['elapsed'] * t['scale_factor'])),
    ])

    # Parse input columns:
    with open(filename) as f:
        text = f.read()
    table = collections.OrderedDict(
        (k, numpy.asarray([t(m.group(1)) for m in re.finditer(p, text)]))
        for k, (p, t) in _columns.items())

    # Check consistency of data:
    assert same([len(column) for column in table.values()])
    assert same(table['steps'])
    assert same(table['width'])
    assert same(table['tasks'])
    assert all(table['tasks'] == table['steps'] * table['width'])

    # Group by iteration count and compute statistics:
    table['iterations'], table['elapsed'], table['std'], table['reps'] = list(map(
        numpy.asarray,
        zip(*[(k, numpy.mean(v), numpy.std(v), len(v))
              for k, v in group_by(table['iterations'], table['elapsed'])])))

    for column in ('steps', 'width', 'tasks'):
        table[column] = numpy.resize(table[column], table['iterations'].shape)

    # Compute derived columns:
    for k, f in compute.items():
        table[k] = f(table)

    # Find smallest task granularity above efficiency threshold:
    min_i, min_efficiency = min(
        filter(lambda x: x[1] >= threshold,
               enumerate(table['efficiency'])),
        key=lambda x: table['time_per_task'][x[0]])

    # Perform linear interpolation if subsequent data point is an improvment:
    min_time = table['time_per_task'][min_i]
    if table['time_per_task'][min_i + 1] < min_time:
        min_time = numpy.interp(
            threshold,
            numpy.flip(table['efficiency'][min_i:min_i+2], 0),
            numpy.flip(table['time_per_task'][min_i:min_i+2], 0))

    # Post-process table for output:
    for k, c in table.items():
        if any(isinstance(x, float) for x in c):
            table[k] = ['%e' % x for x in c]

    out_filename = os.path.splitext(filename)[0] + '.csv'
    with open(out_filename, 'w') as f:
        out = csv.writer(f)
        out.writerow(table.keys())
        out.writerows(zip(*list(table.values())))

    return min_time

def driver(inputs, summary, nodes, cores, threshold):
    min_times = []
    for filename in inputs:
        min_times.append(analyze(filename, nodes, cores, threshold))
    if summary:
        with open(summary, 'w') as f:
            out = csv.writer(f)
            out.writerow(['effective_minimum_granularity'])
            out.writerows(zip(min_times))
    print(min_times)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('inputs', nargs='+')
    parser.add_argument('-c', '--cores', type=int, required=True)
    parser.add_argument('-n', '--nodes', type=int, required=True)
    parser.add_argument('-t', '--threshold', type=float, default=0.5)
    parser.add_argument('-s', '--summary')
    args = parser.parse_args()
    driver(**vars(args))
