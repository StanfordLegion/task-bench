#!/usr/bin/env python3

# Copyright 2019 Stanford University
# Copyright 2019 Los Alamos National Laboratory
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

import matplotlib
matplotlib.use('PDF')
import matplotlib.pyplot as plt
from matplotlib.mlab import csv2rec
import numpy as np
import argparse
import os

parser = argparse.ArgumentParser()
parser.add_argument('filename')
parser.add_argument('--title', required=True)
parser.add_argument('--xlabel', default='Nodes')
parser.add_argument('--xcol', default='nodes')
parser.add_argument('--no-xlog', action='store_false', dest='xlog')
parser.add_argument('--no-xticks', action='store_false', dest='xticks')
args = parser.parse_args()

markers = [
    '*',
    '^',
    'h',
    'D',
    'o',
    '<',
    's',
    '1',
    'p',
    'x',
    'D',
    '8',
    '4',
    'v',
    '+',
    'H',
    '2',
    '>'
] * 2

colors = [
    # Built in colors
    'gold',
    'green',
    'red',
    'fuchsia',
    # 'yellow',
    'black',
    'orange',
    'purple',
    'cyan',
    'darkslategrey',
    'olive',
    'pink',
    'darkred',
    'lawngreen',
    'grey',
    'deepskyblue',
    'darkorchid',
    'navy',

    # Tableau colors
    (0.968,0.714,0.824),
    (0.882,0.478,0.470),
    (0.565,0.663,0.792),
    (0.635,0.635,0.635),
    (0.678,0.545,0.788),
    (1.000,0.620,0.290),
    (0.859,0.859,0.553),
    (0.769,0.612,0.580),
    (0.478,0.757,0.424),
    (0.427,0.800,0.855),
    (0.929,0.592,0.792),
    (0.929,0.400,0.364),
    (0.447,0.620,0.808),
    (0.780,0.780,0.780),
    (0.773,0.690,0.835),
    (0.882,0.616,0.353),
    (0.804,0.800,0.365),
    (0.659,0.471,0.431),
    (0.404,0.749,0.361),
    (0.137,0.122,0.125),
]

# matplotlib.rcParams["font.family"] = "STIXGeneral"
# matplotlib.rcParams["mathtext.fontset"] = "stix"
matplotlib.rcParams["mathtext.fontset"] = "stixsans"

matplotlib.rc('xtick', labelsize=12)
matplotlib.rc('ytick', labelsize=12)

fig = plt.figure(figsize=(12, 6))
ax = fig.add_subplot(111)
plt.subplots_adjust(bottom=0.16, left=0.08)

ax.spines['top'].set_linewidth(1.0)
ax.spines['bottom'].set_linewidth(1.0)
ax.spines['left'].set_linewidth(1.0)
ax.spines['right'].set_linewidth(1.0)
ax.tick_params(axis='x', width=0.5)
ax.tick_params(axis='y', width=0.5)

data = csv2rec(args.filename)
nodes = getattr(data, args.xcol)
columns = sorted(set(data.dtype.names) - set([args.xcol]))
if args.xlog:
    plt.loglog(basex=2)
else:
    plt.semilogy()
for i, column in enumerate(columns):
    plt.plot(nodes, getattr(data, column), '-', color=colors[i], marker=markers[i], markerfacecolor='none', linewidth=1, label=column.replace('_', ' '))
if args.xticks:
    plt.xticks(nodes, nodes, rotation=30)
# plt.xlim(0.8, 40)
# plt.ylim(0, 1600)

plt.xlabel(args.xlabel, fontsize=12)
plt.ylabel('Minimum Effective Task Granularity (ms)', fontsize=12)
plt.title(args.title, fontsize=14)

# Shrink current axis by 20%
box = ax.get_position()
ax.set_position([box.x0, box.y0, box.width * 0.80, box.height])

legend = plt.legend(
    # Put a legend to the right of the current axis
    loc='center left', bbox_to_anchor=(1, 0.5),
    ncol=1, fontsize=12,
    # Square corners, disable transparency, set color to black
    fancybox=False, framealpha=1, edgecolor='black')

plt.grid(True, color='black', linestyle='--', linewidth=0.5, dashes=(1, 5))
output_filename = '%s.pdf' % os.path.splitext(args.filename)[0]
print('Generating %s' % output_filename)
plt.savefig(output_filename)
plt.close()
