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
import math
import os
import sys

import chart_util as util

class Parser(util.Parser):
    def __init__(self, ngraphs, dependence, nodes, system, imbalance, comm,
                 threshold, show_metg, csv_dialect, x_file, y_file, z_file,
                 metg_x_file, metg_y_file, metg_z_file):
        self.ngraphs = ngraphs
        self.dependence = dependence.replace('_', ' ')
        self.nodes = nodes
        self.system = system
        self.imbalance = imbalance
        self.comm = comm
        self.threshold = threshold
        self.show_metg = show_metg
        self.csv_dialect = csv_dialect
        self.x_file = x_file
        self.y_file = y_file
        self.z_file = z_file
        self.metg_x_file = metg_x_file
        self.metg_y_file = metg_y_file
        self.metg_z_file = metg_z_file

        self.x_keys = set()
        self.y_keys = set()
        self.x_values = collections.defaultdict(dict)
        self.z_values = collections.defaultdict(dict)

        self.metg_x_values = {}
        self.metg_z_values = {}

    def filter(self, row):
        return (
            row['ngraphs'] == self.ngraphs and
            row['type'] == self.dependence and
            (not self.nodes or row['nodes'] == self.nodes) and
            (not self.system or row['name'] == self.system) and
            (not self.imbalance or row['imbalance'] == self.imbalance) and
            (not self.comm or row['comm'] == self.comm))

    def process(self, row, data, metg=None):
        y = row['nodes']
        for values in zip(*list(data.values())):
            items = dict(zip(data.keys(), values))
            x = items['iterations']
            self.x_keys.add(x)
            self.x_values[x][y] = items['time_per_task']
            self.y_keys.add(y)
            self.z_values[x][y] = items['efficiency']

        self.metg_x_values[y] = metg
        self.metg_z_values[y] = self.threshold

    def error_value(self):
        return {}

    def complete(self):
        self.x_keys = sorted(list(self.x_keys))
        self.y_keys = sorted(list(self.y_keys))

        with open(self.x_file, 'w') as f:
            out = csv.writer(f, dialect=self.csv_dialect)
            for y in self.y_keys:
                out.writerow(['%e' % math.log(float(self.x_values[x][y]), 10) if y in self.x_values[x] else None for x in self.x_keys])

        with open(self.y_file, 'w') as f:
            out = csv.writer(f, dialect=self.csv_dialect)
            for y in self.y_keys:
                out.writerow([math.log(y, 2) for x in self.x_keys])

        with open(self.z_file, 'w') as f:
            out = csv.writer(f, dialect=self.csv_dialect)
            for y in self.y_keys:
                out.writerow([self.z_values[x][y] if y in self.z_values[x] else None for x in self.x_keys])

        with open(self.metg_x_file, 'w') as f:
            out = csv.writer(f, dialect=self.csv_dialect)
            for y in self.y_keys:
                out.writerow(['%e' % math.log(float(self.metg_x_values[y]), 10)])

        with open(self.metg_y_file, 'w') as f:
            out = csv.writer(f, dialect=self.csv_dialect)
            for y in self.y_keys:
                out.writerow([math.log(y, 2)])

        with open(self.metg_z_file, 'w') as f:
            out = csv.writer(f, dialect=self.csv_dialect)
            for y in self.y_keys:
                out.writerow([self.metg_z_values[y]])

def driver(ngraphs, dependence, nodes, system, imbalance, comm, machine, resource,
           threshold, show_metg, csv_dialect, x_file, y_file, z_file,
           metg_x_file, metg_y_file, metg_z_file, verbose):
    parser = Parser(ngraphs, dependence, nodes, system, imbalance, comm,
                    threshold, show_metg, csv_dialect, x_file, y_file, z_file,
                    metg_x_file, metg_y_file, metg_z_file)
    parser.parse(machine, resource, threshold, False, verbose)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('-g', '--ngraphs', type=int, required=True)
    parser.add_argument('-d', '--dependence', required=True)
    parser.add_argument('-n', '--nodes', type=int, default=0)
    parser.add_argument('-s', '--system')
    parser.add_argument('-i', '--imbalance')
    parser.add_argument('-c', '--comm')
    parser.add_argument('-m', '--machine', required=True)
    parser.add_argument('-r', '--resource', default='flops')
    parser.add_argument('-t', '--threshold', type=float, default=0.5)
    parser.add_argument('--hide-metg', action='store_false', dest='show_metg')
    parser.add_argument('--csv-dialect', default='excel-tab')
    parser.add_argument('-x', '--x-file', required=True)
    parser.add_argument('-y', '--y-file', required=True)
    parser.add_argument('-z', '--z-file', required=True)
    parser.add_argument('--metg-x-file', required=True)
    parser.add_argument('--metg-y-file', required=True)
    parser.add_argument('--metg-z-file', required=True)
    parser.add_argument('-v', '--verbose', action='store_true')
    args = parser.parse_args()
    driver(**vars(args))

