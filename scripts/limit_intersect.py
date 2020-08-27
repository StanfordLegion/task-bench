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
import csv
import math
import numpy as np
import sys

# https://stackoverflow.com/a/42727584/188046
def get_intersect(a1, a2, b1, b2):
    """
    Returns the point of intersection of the lines passing through a2,a1 and b2,b1.
    a1: [x, y] a point on the first line
    a2: [x, y] another point on the first line
    b1: [x, y] a point on the second line
    b2: [x, y] another point on the second line
    """
    s = np.vstack([a1,a2,b1,b2])        # s for stacked
    h = np.hstack((s, np.ones((4, 1)))) # h for homogeneous
    l1 = np.cross(h[0], h[1])           # get first line
    l2 = np.cross(h[2], h[3])           # get second line
    x, y, z = np.cross(l1, l2)          # point of intersection
    if z == 0:                          # lines are parallel
        return (float('inf'), float('inf'))
    return (x/z, y/z)

def driver(filename, log_log, csv_dialect):
    with open(filename, newline='') as f:
        table = list(csv.DictReader(f, dialect=csv_dialect))

    systems = []
    limit = ' limit'
    actual = ' actual'
    for key in table[0].keys():
        if key.endswith(limit):
            systems.append(key[:-len(limit)])

    if log_log:
        log2 = math.log2
        exp2 = lambda x: 2**x
    else:
        log2 = lambda x: x
        exp2 = lambda x: x

    rows = []

    for system in systems:
        has_intersection = False
        for i, this_row in enumerate(table):
            if i + 1 < len(table):
                next_row = table[i+1]

                system_limit = system + limit
                system_actual = system + actual

                if not this_row[system_limit] or not this_row[system_actual] or  not next_row[system_limit] or not next_row[system_actual]:
                    break

                this_nodes = log2(float(this_row['nodes']))
                this_limit = log2(float(this_row[system_limit]))
                this_actual = log2(float(this_row[system_actual]))

                next_nodes = log2(float(next_row['nodes']))
                next_limit = log2(float(next_row[system_limit]))
                next_actual = log2(float(next_row[system_actual]))

                if this_limit < this_actual and next_limit >= next_actual:
                    intersection = get_intersect(
                        [this_nodes, this_limit],
                        [next_nodes, next_limit],
                        [this_nodes, this_actual],
                        [next_nodes, next_actual])
                    limit_actual_intersection = tuple(exp2(x) for x in intersection)
                    has_intersection = True
                    break
        if not has_intersection:
            continue
        has_intersection = False
        for i, this_row in enumerate(table):
            if i + 1 < len(table):
                next_row = table[i+1]

                system_limit = system + limit

                if not this_row[system_limit] or not next_row[system_limit]:
                    break

                this_nodes = log2(float(this_row['nodes']))
                this_limit = log2(float(this_row[system_limit]))
                this_ideal = log2(float(this_row['ideal']))

                next_nodes = log2(float(next_row['nodes']))
                next_limit = log2(float(next_row[system_limit]))
                next_ideal = log2(float(next_row['ideal']))

                if this_limit < this_ideal and next_limit >= next_ideal:
                    intersection = get_intersect(
                        [this_nodes, this_limit],
                        [next_nodes, next_limit],
                        [this_nodes, this_ideal],
                        [next_nodes, next_ideal])
                    limit_ideal_intersection = tuple(exp2(x) for x in intersection)
                    has_intersection = True
                    break
        if not has_intersection:
            continue

        rows.append(
            {
                'system': system,
                'limit_actual_nodes': limit_actual_intersection[0],
                'limit_actual_time': limit_actual_intersection[1],
                'limit_ideal_nodes': limit_ideal_intersection[0],
                'limit_ideal_time': limit_ideal_intersection[1],
                'actual_ideal_factor_nodes': limit_actual_intersection[0]/limit_ideal_intersection[0],
                'actual_ideal_factor_time': limit_actual_intersection[1]/limit_ideal_intersection[1],
            })

    out = csv.DictWriter(sys.stdout, rows[0].keys(), dialect=csv_dialect)
    out.writeheader()
    for row in rows:
        out.writerow(row)

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--log-log', action='store_true')
    parser.add_argument('--csv-dialect', default='excel-tab')
    parser.add_argument('filename')
    args = parser.parse_args()
    driver(**vars(args))
