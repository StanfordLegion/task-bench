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
from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
import numpy as np
import argparse

def load(filename):
    return np.genfromtxt(filename, dtype=None, delimiter=',', encoding='utf-8')

parser = argparse.ArgumentParser()
parser.add_argument('-o', '--output')
parser.add_argument('-x', '--x-file')
parser.add_argument('-y', '--y-file')
parser.add_argument('-z', '--z-file')
args = parser.parse_args()

fig = plt.figure()
ax = fig.gca(projection='3d')

X = load(args.x_file)
Y = load(args.y_file)
Z = load(args.z_file)

surf = ax.plot_surface(
    X, Y, Z, cmap=matplotlib.cm.coolwarm, vmin=0, vmax=1,
    linewidth=0, antialiased=False)

ax.invert_xaxis()
ax.invert_yaxis()

ax.set_zlim(0, 1)

ax.yaxis.set_major_locator(matplotlib.ticker.MaxNLocator(5))

ax.xaxis.set_major_formatter(matplotlib.ticker.FormatStrFormatter('$10^{%d}$'))
ax.yaxis.set_major_formatter(matplotlib.ticker.FormatStrFormatter('$2^{%d}$'))
ax.zaxis.set_major_formatter(matplotlib.ticker.FuncFormatter(lambda x, _: '{:.0%}'.format(x)))

fig.colorbar(surf, shrink=0.5, aspect=5)

ax.set_xlabel("Task Granularity (ms)")
ax.set_ylabel("Nodes")
ax.set_zlabel("Efficiency")

plt.savefig(args.output)
plt.close()
