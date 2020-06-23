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
    def __init__(self, ngraphs, dependence, systems, problem_size, csv_dialect):
        self.ngraphs = ngraphs
        self.dependence = dependence.replace('_', ' ')
        self.systems = systems
        self.problem_size = int(problem_size)
        self.csv_dialect = csv_dialect

        self.header = []
        self.table = collections.defaultdict(lambda: collections.defaultdict(lambda: float('inf')))
        self.metg = collections.defaultdict(lambda: collections.defaultdict(lambda: float('inf')))
        self.ideal = float('inf')

    def filter(self, row):
        return row['ngraphs'] == self.ngraphs and row['type'] == self.dependence and (self.systems is None or row['name'] in self.systems)

    def process(self, row, data, metg=None):
        name = row['name']

        if metg is None:
            return

        self.metg[row['nodes']][name] = min(metg, self.metg[row['nodes']][name], key=float)

        for values in zip(*list(data.values())):
            items = dict(zip(data.keys(), values))

            iterations = row['nodes'] * items['iterations']

            if iterations == self.problem_size:
                if name not in self.header:
                    self.header.append(name)

                self.table[row['nodes']][name] = min(
                    items['elapsed'],
                    self.table[row['nodes']][name],
                    key=float)

                if row['nodes'] == 1:
                    self.ideal = min(self.ideal, items['elapsed'], key=float)

    def error_value(self):
        return {}

    def complete(self):
        # FIXME: This isn't actually the criteria we'd like to sort on,
        # we'd prefer to sort so that the list of names roughly parallels
        # the order of the bars in the graph.
        self.header.sort()
        self.header = [y for x in self.header for y in ('%s actual' % x, '%s limit' % x)]
        self.header.insert(0, 'nodes')
        self.header.insert(1, 'ideal')

        out = csv.DictWriter(sys.stdout, self.header, dialect=self.csv_dialect)
        out.writeheader()
        for nodes in sorted(self.table.keys()):
            row = self.table[nodes]
            row = {'%s actual' % k: None if v == float('inf') else v for k, v in row.items()}
            row['nodes'] = nodes

            metg = self.metg[nodes]
            row.update({'%s limit' % k: None if v == float('inf') else v for k, v in metg.items()})

            row['ideal'] = float(self.ideal) / nodes

            out.writerow(row)

def driver(ngraphs, dependence, systems, problem_size, machine, resource, threshold, csv_dialect, verbose):
    parser = Parser(ngraphs, dependence, systems, problem_size, csv_dialect)
    parser.parse(machine, resource, threshold, False, verbose)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('-g', '--ngraphs', type=int, required=True)
    parser.add_argument('-d', '--dependence', required=True)
    parser.add_argument('-s', '--system', dest='systems', action='append')
    parser.add_argument('-p', '--problem-size', required=True)
    parser.add_argument('-m', '--machine', required=True)
    parser.add_argument('-r', '--resource', default='flops')
    parser.add_argument('-t', '--threshold', type=float, default=0.5)
    parser.add_argument('--csv-dialect', default='excel-tab')
    parser.add_argument('-v', '--verbose', action='store_true')
    args = parser.parse_args()
    driver(**vars(args))
