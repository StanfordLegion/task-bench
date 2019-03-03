#!/usr/bin/env python3

# Copyright 2019 Stanford University
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
import csv
import glob
import os
import sys

import chart_metg
import chart_util as util

def driver(ngraphs, dependence, nodes, machine, threshold, csv_dialect):
    dependence = dependence.replace('_', ' ')
    params = util.get_machine_parameters(machine)

    header = []

    log_filenames = glob.glob('**/*.log', recursive=True)
    for filename in log_filenames:
        prefix = util.parse_filename(filename)
        if prefix['ngraphs'] != ngraphs or prefix['type'] != dependence or prefix['nodes'] != nodes:
            continue
        if prefix['name'] not in header:
            header.append(prefix['name'])

    # FIXME: This isn't actually the criteria we'd like to sort on,
    # we'd prefer to sort so that the list of names roughly parallels
    # the order of the bars in the graph.
    header.sort()
    header.insert(0, 'efficiency')

    out = csv.DictWriter(sys.stdout, header, dialect=csv_dialect)
    out.writeheader()
    for filename in log_filenames:
        prefix = util.parse_filename(filename)
        if prefix['ngraphs'] != ngraphs or prefix['type'] != dependence or prefix['nodes'] != nodes:
            continue
        try:
            data = chart_metg.analyze(filename, prefix['ngraphs'], prefix['nodes'], params['cores'], threshold, params['peak_flops'], params['peak_bytes'], summary=False)
        except Exception as e:
            print('%s: %s' % (filename, e), file=sys.stderr)
            data = {}
        for values in zip(*list(data.values())):
            items = dict(zip(data.keys(), values))
            row = {
                'efficiency': items['efficiency'],
                prefix['name']: items['time_per_task']
            }
            out.writerow(row)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('-g', '--ngraphs', type=int, required=True)
    parser.add_argument('-d', '--dependence', required=True)
    parser.add_argument('-n', '--nodes', type=int, required=True)
    parser.add_argument('-m', '--machine', required=True)
    parser.add_argument('-t', '--threshold', type=float, default=0.5)
    parser.add_argument('--csv-dialect', default='excel-tab')
    args = parser.parse_args()
    driver(**vars(args))
