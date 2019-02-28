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
import numpy as np
#import matplotlib.pyplot as plt
#from matplotlib.backends.backend_pdf import PdfPages

class legend(object):
    def __init__(self, **kwargs):
        self.facecolor = kwargs.get('facecolor', 'black')
        self.edgecolor = kwargs.get('edgecolor', 'black')
        self.linestyle = kwargs.get('linestyle', '-')
        self.name = kwargs.get('name', '')
        self.linewidth = kwargs.get('linewidth', 1.5)
        self.marker = kwargs.get('marker', '')
        self.markersize = kwargs.get('markersize', 7)
        self.markeredgewidth = kwargs.get('markeredgewidth', 1)

class data_single_group(object):
    def __init__(self):
        self.data = []
        self.data_legend = legend()
        self.data_mask = None
        self.enabled = True
    
    def add(self, d):
        self.data.append(d)
        
        
class dataset(object):
    def __init__(self, num_groups):
        self.data_x = []
        self.data_y = []
        self.legends = []
        self.subplt = None
        self.__legends_index = dict()
        self.num_groups = num_groups
        self.xratio = 1
        self.yratio = 1
        self.lines = []
        for i in range(0, num_groups):
            self.data_y.append(data_single_group())
            
    def set_plotlib(self, ax):
        self.subplt = ax
    
    def set_xscale(self, type, ratio=1):
        if (type == 'linear'):
            self.xratio = ratio
        self.subplt.set_xscale(type)
        
    def set_yscale(self, type, ratio=1):
        if (type == 'linear'):
            self.yratio = ratio
        self.subplt.set_yscale(type)
        
    def reset_xdata(self, new_data):
        if (len(self.data_x) != len(new_data)):
            print ('check size orig %d, new %d\n' %(len(self.data_x), len(new_data)))
            sys.exit(0)
        self.data_x = new_data
        self.data_x = np.array(self.data_x)
        
    def read_file(self, filename):
        ifile = open(filename, 'r')
        i = 0
        for line in ifile:
            if (i == 0):
                pieces = line.split(',')
                if (len(pieces) != self.num_groups+1):
                    print ('check num_groups %d, self %d\n' %(len(pieces), self.num_groups))
                    sys.exit(0)
                for j in range(1, self.num_groups+1):
                    self.legends.append(pieces[j].strip())
                    self.data_y[j-1].legend = pieces[j].strip()
                    self.__legends_index[pieces[j].strip()] = j-1
            else:
                pieces = line.split(',')
                self.data_x.append(float(pieces[0])/self.xratio)
                for j in range(1, len(pieces)):
                    pieces[j] = pieces[j].strip()
                    if (pieces[j] == ''):
                        self.data_y[j-1].add(float('nan'))
                    else:
                        self.data_y[j-1].add(float(pieces[j])/self.yratio)
            i = i + 1
        self.__mask_data()
            
    def __mask_data(self):
        self.data_x = np.array(self.data_x)
        for i in range(0, self.num_groups):
            self.data_y[i].data = np.array(self.data_y[i].data)
            self.data_y[i].data_mask = np.isfinite(self.data_y[i].data)
           # print self.data_y[i].data_mask      
            
    def set_colors(self, colors):
        for i in range(0, self.num_groups):
            self.data_y[i].data_legend.facecolor = colors[i]
            self.data_y[i].data_legend.edgecolor = colors[i]
            
    def set_facecolors(self, colors):
        for i in range(0, self.num_groups):
            self.data_y[i].data_legend.facecolor = colors[i]
            
    def set_edgecolors(self, colors):
        for i in range(0, self.num_groups):
            self.data_y[i].data_legend.edgecolor = colors[i]
            
    def set_markers(self, markers):
        for i in range(0, self.num_groups):
            self.data_y[i].data_legend.marker = markers[i]
    
    def set_markeredgewidth(self, markeredgewidth):
        for i in range(0, self.num_groups):
            self.data_y[i].data_legend.markeredgewidth = markeredgewidth[i]
            
    def set_markersizes(self, markersizes):
        for i in range(0, self.num_groups):
            if (markersizes[i] == 'default'):
                continue 
            self.data_y[i].data_legend.markersize = markersizes[i]
    
    def set_linestyles(self, linestyles):
        for i in range(0, self.num_groups):
            self.data_y[i].data_legend.linestyle = linestyles[i]
            
    def set_linewidth(self, linewidth):
        for i in range(0, self.num_groups):
            self.data_y[i].data_legend.linewidth = linewidth[i]
            
    def set_linewidth_bylegend(self, index, width):
        self.data_y[self.__legends_index[index]].data_legend.linewidth = width
        
    def set_legend_by_dict(self, ldict):
        for l in self.__legends_index:
            if l in ldict:
                self.data_y[self.__legends_index[l]].data_legend = ldict[l]
            else:
                print ("can not find legend %s in dict", l)
                sys.exit(0)    
            
    def show_grid(self, flag):
        self.subplt.grid(flag)
        
    def disable_all(self):
        for i in range(0, self.num_groups):
            self.data_y[i].enabled = False
            
    def enable_all(self):
        for i in range(0, self.num_groups):
            self.data_y[i].enabled = True
            
    def disable_bylegend(self, index):
        self.data_y[self.__legends_index[index]].enabled = False
        
    def enable_bylegend(self, index):
        self.data_y[self.__legends_index[index]].enabled = True
            
    def plot(self):
        for i in range(0, self.num_groups):
            if (self.data_y[i].enabled == True):
                line, = self.subplt.plot(self.data_x[self.data_y[i].data_mask], self.data_y[i].data[self.data_y[i].data_mask],
                                 color=self.data_y[i].data_legend.edgecolor, 
                                 linestyle = self.data_y[i].data_legend.linestyle,  
                                 linewidth=self.data_y[i].data_legend.linewidth, 
                                 marker=self.data_y[i].data_legend.marker, markersize=self.data_y[i].data_legend.markersize,
                                 markerfacecolor=self.data_y[i].data_legend.facecolor, markeredgecolor=self.data_y[i].data_legend.edgecolor, markeredgewidth=self.data_y[i].data_legend.markeredgewidth)
                self.lines.append(line)
                             
    def show_legend(self, nbcol=3, location='best', fsize=9.75, box_to_anchor_x= -99, box_to_anchor_y=-99):
        legends_enabled = []
        for i in range(0, self.num_groups):
            if (self.data_y[i].enabled == True):
                legends_enabled.append(self.legends[i])
        #self.subplt.legend( (legends_enabled),loc='best',fancybox=True)
        if box_to_anchor_x == -99 and box_to_anchor_y == -99:
            self.subplt.legend( (legends_enabled),ncol=nbcol,loc=location,fancybox=True,prop={'size':fsize})
        else:
            self.subplt.legend( (legends_enabled),ncol=nbcol,loc=location,fancybox=True,prop={'size':fsize}, bbox_to_anchor=(box_to_anchor_x, box_to_anchor_y))
        #self.subplt.legend( (legends_enabled),ncol=2,loc='best',fancybox=True,prop={'size':11}, bbox_to_anchor=(0.69, 0.38))