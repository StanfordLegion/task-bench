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
import collections
import csv
import glob
import os
import sys

import chart_metg
import chart_util as util

def driver(dependence, machine, threshold, csv_dialect):
    dependence = dependence.replace('_', ' ')
    params = util.get_machine_parameters(machine)

    header = []

    table = collections.defaultdict(lambda: collections.defaultdict(lambda: float('inf')))

    log_filenames = glob.glob('**/*.log', recursive=True)
    for filename in log_filenames:
        row = util.parse_filename(filename)
        if row['type'] != dependence:
            continue
        if row['name'] not in header:
            header.append(row['name'])
        try:
            metg = chart_metg.analyze(filename, row['nodes'], params['cores'], threshold, params['peak_flops'], params['peak_bytes'])
        except:
            metg = float('inf')
        # Have to use float('inf') as a sentinel here to be comparable.
        if metg is None: metg = float('inf')
        table[row['nodes']][row['name']] = min(metg, table[row['nodes']][row['name']])

    # FIXME: This isn't actually the criteria we'd like to sort on,
    # we'd prefer to sort so that the list of names roughly parallels
    # the order of the bars in the graph.
    header.sort()
    header.insert(0, 'nodes')

    out = csv.DictWriter(sys.stdout, header, dialect=csv_dialect)
    out.writeheader()
    for nodes in sorted(table.keys()):
        row = table[nodes]
        row = {k: None if v == float('inf') else v for k, v in row.items()}
        row['nodes'] = nodes
        out.writerow(row)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('-d', '--dependence', required=True)
    parser.add_argument('-m', '--machine', required=True)
    parser.add_argument('-t', '--threshold', type=float, default=0.5)
    parser.add_argument('--csv-dialect', default='excel-tab')
    args = parser.parse_args()
    driver(**vars(args))
