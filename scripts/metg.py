#!/usr/bin/env python3

# Copyright 2020 Stanford University
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
import os
import sys

import chart_util as util

class Parser(util.Parser):
    def __init__(self, ngraphs, dependence, nodes, x_axis, csv_dialect):
        self.ngraphs = ngraphs
        self.dependence = dependence.replace('_', ' ')
        self.nodes = nodes
        self.x_axis = x_axis
        self.csv_dialect = csv_dialect

        self.header = []
        self.table = collections.defaultdict(lambda: collections.defaultdict(lambda: float('inf')))

    def filter(self, row):
        return row['ngraphs'] == self.ngraphs and row['type'] == self.dependence and (self.nodes is None or row['nodes'] == self.nodes)

    def process(self, row, data):
        if row['name'] not in self.header:
            self.header.append(row['name'])

        self.table[row[self.x_axis]][row['name']] = min(data, self.table[row[self.x_axis]][row['name']])

    def error_value(self):
        return float('inf')

    def complete(self):
        # FIXME: This isn't actually the criteria we'd like to sort on,
        # we'd prefer to sort so that the list of names roughly parallels
        # the order of the bars in the graph.
        self.header.sort()
        self.header.insert(0, self.x_axis)

        out = csv.DictWriter(sys.stdout, self.header, dialect=self.csv_dialect)
        out.writeheader()
        for x in sorted(self.table.keys(), key=float if self.x_axis == 'imbalance' else int):
            row = self.table[x]
            row = {k: None if v == float('inf') else v for k, v in row.items()}
            row[self.x_axis] = x
            out.writerow(row)

def driver(ngraphs, dependence, nodes, machine, resource, threshold, x_axis, csv_dialect, verbose):
    if nodes < 0: nodes = None
    parser = Parser(ngraphs, dependence, nodes, x_axis, csv_dialect)
    parser.parse(machine, resource, threshold, True, verbose)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('-g', '--ngraphs', type=int, required=True)
    parser.add_argument('-d', '--dependence', required=True)
    parser.add_argument('-n', '--nodes', type=int, default=-1)
    parser.add_argument('-m', '--machine', required=True)
    parser.add_argument('-r', '--resource', default='flops')
    parser.add_argument('-t', '--threshold', type=float, default=0.5)
    parser.add_argument('-x', '--x-axis', default='nodes')
    parser.add_argument('--csv-dialect', default='excel-tab')
    parser.add_argument('-v', '--verbose', action='store_true')
    args = parser.parse_args()
    driver(**vars(args))
