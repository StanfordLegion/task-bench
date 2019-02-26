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

import metg_chart

def get_machine_parameters(machine):
    if machine == 'cori':
        return {'cores': 32, 'peak_flops': 1.255013e+12, 'peak_bytes': None}
    else:
        assert False

def parse_filename(filename):
    fields = os.path.splitext(os.path.basename(filename))[0].split('_')
    type_idx = fields.index('type')
    node_idx = fields.index('nodes')
    return {
        'name': ' '.join(fields[:type_idx]),
        'type': ' '.join(fields[type_idx+1:node_idx]),
        'nodes': int(fields[node_idx+1]),
    }

def driver(machine, threshold):
    params = get_machine_parameters(machine)

    header = ['name', 'type', 'nodes', 'steps', 'width', 'tasks', 'iterations', 'flops', 'bytes', 'elapsed', 'scale_factor', 'time_per_task', 'efficiency', 'reps', 'std', 'flops_per_second', 'bytes_per_second']

    log_filenames = glob.glob('**/*.log', recursive=True)
    out = csv.DictWriter(sys.stdout, header, dialect='excel-tab')
    out.writeheader()
    for filename in log_filenames:
        prefix = parse_filename(filename)
        try:
            data = metg_chart.analyze(filename, prefix['nodes'], params['cores'], threshold, params['peak_flops'], params['peak_bytes'], summary=False)
        except:
            data = {}
        for values in zip(*list(data.values())):
            row = dict(zip(data.keys(), values))
            row.update(prefix)
            out.writerow(row)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('-m', '--machine', required=True)
    parser.add_argument('-t', '--threshold', type=float, default=0.5)
    args = parser.parse_args()
    driver(**vars(args))
