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
import os
import sys

import chart_util as util

class Parser(util.Parser):
    def __init__(self, csv_dialect):
        self.csv_dialect = csv_dialect

        self.header = ['name', 'ngraphs', 'type', 'nodes', 'steps', 'width', 'tasks', 'iterations', 'flops', 'bytes', 'elapsed', 'scale_factor', 'time_per_task', 'efficiency', 'reps', 'std', 'flops_per_second', 'bytes_per_second']
        self.table = []

    def process(self, row, data):
        for values in zip(*list(data.values())):
            result = dict(zip(data.keys(), values))
            result.update(row)
            self.table.append(result)

    def error_value(self):
        return {}

    def complete(self):
        out = csv.DictWriter(sys.stdout, self.header, dialect=self.csv_dialect)
        out.writeheader()
        for row in self.table:
            out.writerow(row)

def driver(machine, threshold, csv_dialect):
    parser = Parser(csv_dialect)
    parser.parse(machine, threshold, False, verbose)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('-m', '--machine', required=True)
    parser.add_argument('-t', '--threshold', type=float, default=0.5)
    parser.add_argument('--csv-dialect', default='excel-tab')
    parser.add_argument('-v', '--verbose', action='store_true')
    args = parser.parse_args()
    driver(**vars(args))
