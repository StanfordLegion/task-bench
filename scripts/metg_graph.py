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

import sys
import argparse
import matplotlib
import matplotlib.pyplot as plt
from matplotlib import rc
from matplotlib.backends.backend_pdf import PdfPages
from class_dataset import data_single_group, dataset
from legend_config import legend_dict


def draw_metg_graph(numberofentries, filename):
    matplotlib.rcParams['ps.useafm'] = True
    matplotlib.rcParams['pdf.use14corefonts'] = True
    matplotlib.rcParams['text.usetex'] = True


    #font = {'family' : 'sans-serif',
    #        'weight' : 'bold',
    #        'size'   : 12}
    #rc('font', **font)

    #rc('font',**{'family':'sans-serif','sans-serif':['Helvetica']})

    fig=plt.figure()


    ax= fig.add_subplot(1,1,1)
    #ax.spines['top'].set_color('none')
    #ax.spines['bottom'].set_color('none')
    #ax.spines['left'].set_color('none')
    #ax.spines['right'].set_color('none')
    #ax.tick_params(labelcolor='w', top='off', bottom='off', left='off', right='off')

    data_group1 = dataset(int(numberofentries))  
    data_group1.set_plotlib(ax)
    data_group1.read_file(filename)
    #data_group1.set_colors(['black','blue','red','orange','black','green','purple','cyan'])
    #data_group1.set_facecolors(['None','None','None','None','None','None'])
    #data_group1.set_markers(['*','^','D','s','*','D'])
    #data_group1.set_markers(['','^','^','','h','h','','h','h','h'])
    #data_group1.set_markersizes([7,7,7,7,7,7])
    #data_group1.set_linestyles(['-','-','-','--','-','-','-','-','-','-'])
    #data_group1.set_linewidth([1.5,1.5,1.5,1.5,1.5,1.5])
    data_group1.reset_xdata([1,2,3,4,5,6,7])
    data_group1.set_legend_by_dict(legend_dict)
    ax.set_xticks([1, 2, 3, 4, 5, 6, 7])
    data_group1.plot()
    data_group1.show_grid(True)
    data_group1.show_legend(1)
    data_group1.set_yscale('log')


    ax.tick_params(axis='x', labelsize=12)
    ax.set_xticklabels([1, 2, 4, 8, 16, 32, 64])
    ax.set_xlabel('Nodes (N)', weight='bold')
    ax.set_ylabel('Minimum Effective Task Granularity (ms)', weight='bold')
    ax.set_title('METG', fontsize=12, weight='bold')

    pp = PdfPages('metg.pdf')
    plt.savefig(pp, format='pdf')
    pp.close()

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('-n', '--numberofentries', required=True)
    parser.add_argument('-f', '--filename', required=True)
    args = parser.parse_args()
    draw_metg_graph(**vars(args))
    
