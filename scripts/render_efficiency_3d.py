#!/usr/bin/env python

# Copyright 2020 Stanford University
# Copyright 2020 Los Alamos National Laboratory
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

# WARNING:
#
# This file requires EXACTLY matplotlib 2.2.4. Versions 3.0.3 and
# 3.1.0 DO NOT work, due to bugs in the handling of zorder (if it
# works at all??):
#
# > Axes3D ignores zorder and draws all artists in the order it thinks they should be.
# >
# > https://stackoverflow.com/q/37611023/188046
#
# See also: https://stackoverflow.com/q/52923540/188046
#
# Unfortunately this seems to require pinning this exact version of
# matplotlib because no variation of the zorder and order of drawing
# calls in 3.x seem to be sufficient to fix this.
#
# As a hack, this file is marked as running under Python 2 to make it
# easier to keep the older matplotlib install isolated.

from __future__ import absolute_import, division, print_function, unicode_literals

import matplotlib
matplotlib.use('PDF')
from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
import numpy as np
import argparse

def load(filename):
    return np.genfromtxt(filename, dtype=None, delimiter=',', encoding='utf-8')

parser = argparse.ArgumentParser()
parser.add_argument('-o', '--output', required=True)
parser.add_argument('-x', '--x-file', required=True)
parser.add_argument('-y', '--y-file', required=True)
parser.add_argument('-z', '--z-file', required=True)
parser.add_argument('--metg-x-file', required=True)
parser.add_argument('--metg-y-file', required=True)
parser.add_argument('--metg-z-file', required=True)
args = parser.parse_args()

fig = plt.figure()
ax = fig.gca(projection='3d')

x_values = load(args.x_file)
y_values = load(args.y_file)
z_values = load(args.z_file)

metg_x_values = load(args.metg_x_file)
metg_y_values = load(args.metg_y_file)
metg_z_values = load(args.metg_z_file)

surf = ax.plot_surface(
    x_values, y_values, z_values, cmap=matplotlib.cm.coolwarm, vmin=0, vmax=1,
    linewidth=0, antialiased=False, zorder=1)

line = ax.plot(
    metg_x_values, metg_y_values, metg_z_values,
    linestyle='--', linewidth=3, color='red', antialiased=False, zorder=0)

ax.invert_xaxis()
ax.invert_yaxis()

ax.set_zlim(0, 1)

ax.yaxis.set_major_locator(matplotlib.ticker.MaxNLocator(5))

ax.xaxis.set_major_formatter(matplotlib.ticker.FormatStrFormatter('$10^{%d}$'))
ax.yaxis.set_major_formatter(matplotlib.ticker.FormatStrFormatter('$2^{%d}$'))
ax.zaxis.set_major_formatter(matplotlib.ticker.FuncFormatter(lambda x, _: '{:.0%}'.format(x)))

fig.colorbar(surf, shrink=0.5, aspect=5, format=matplotlib.ticker.FuncFormatter(lambda x, _: '{:.0%}'.format(x)))

ax.set_xlabel("Task Granularity (ms)")
ax.set_ylabel("Nodes")
ax.set_zlabel("Efficiency")

print('Generating %s' % args.output)
plt.savefig(args.output)
plt.close()
