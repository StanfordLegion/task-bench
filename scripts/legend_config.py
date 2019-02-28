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

from class_dataset import legend

global legend_dict
legend_dict = {
    'chapel': legend(facecolor='None', edgecolor='gold', marker='*'),
    'charm' : legend(facecolor='None', edgecolor='green', marker='^'),
    'charm smp' : legend(facecolor='None', edgecolor='red', marker='h'),
    'legion util 0' : legend(facecolor='None', edgecolor='fuchsia', marker='D'),
    'mpi nonblock' : legend(facecolor='None', edgecolor='yellow', marker='o'),
    'ompss' : legend(facecolor='None', edgecolor='black', marker='<'),
    'openmp gnu' : legend(facecolor='None', edgecolor='orange', marker='s'),
    'openmp intel' : legend(facecolor='None', edgecolor='purple', marker='1'),
    'parsec' : legend(facecolor='None', edgecolor='cyan', marker='p'),
    'realm' : legend(facecolor='None', edgecolor='darkslategrey', marker='x'),
    'realm new noop' : legend(facecolor='None', edgecolor='olive', marker='D'),
    'realm old noop' : legend(facecolor='None', edgecolor='pink', marker='8'),
    'regent util 0' : legend(facecolor='None', edgecolor='darkred', marker='4'),
    'spark' : legend(facecolor='None', edgecolor='lawngreen', marker='v'),
    'starpu' : legend(facecolor='None', edgecolor='grey', marker='+'),
    'swift' : legend(facecolor='None', edgecolor='deepskyblue', marker='H'),
    'tensorflow' : legend(facecolor='None', edgecolor='darkorchid', marker='2'),
    'x10' : legend(facecolor='None', edgecolor='navy', marker='>')
}