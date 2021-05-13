#!/usr/bin/env python3
import matplotlib.pyplot as plt
import linecache
import math
import numpy as np

extension='png'
SUFFIX = "_ngraphs_1_type_stencil_1d_nodes_1.csv"
dists = ["uniform", "gamma", "normal", "cauchy", "balanced"]
impls = ["OpenMP", "PaRSEC", "Legion"]
impls_prefix = dict(zip(impls, ["openmp", "parsec", "legion_util_0"]))
dists_prefix = dict(zip(dists, dists))

files = {}
data = {}
for dist in dists:
    files[dist] = {}
    data[dist] = {}
    for impl in impls:
        files[dist][impl] = f"{dists_prefix[dist]}/{impls_prefix[impl]}{SUFFIX}"
        data[dist][impl] = np.genfromtxt(files[dist][impl], delimiter=',', skip_header=1).transpose()

fields = ["elapsed","iterations","output","steps","tasks","flops","bytes","width","std","reps","scale_factor","time_per_task","flops_per_second","bytes_per_second","efficiency"]
field_idx = dict(zip(fields, range(len(fields))))

x_field = 'iterations'
x_log = True
y_field = 'flops'
y_log = False

# create a graph for each one of the distributions with all of the implementations
#fig = plt.figure()
fig, ax = plt.subplots(2, 2)
for dist_idx in range(len(dists)):
    if(dist_idx >= 4):
        break
    x = dist_idx/2
    y = dist_idx%2
    plt.subplot(2, 2, dist_idx+1)
    plt.title(dists[dist_idx])
    plt.xlabel(x_field)
    plt.ylabel(y_field)
    for impl in impls:
        plt.plot(data[dists[dist_idx]][impl][field_idx[x_field]], data[dists[dist_idx]][impl][field_idx[y_field]], '.-', label=impl)
    if(x_log):
        plt.xscale('log')
    if(y_log):
        plt.yscale('log')
    plt.legend()

plt.tight_layout()
plt.savefig(f"plt_by_dist_{x_field}_{y_field}.png", dpi=300)
plt.show()

# create a graph for each one of the implementations with all of the distributions
#fig = plt.figure()
fig, ax = plt.subplots(2, 2)
for impl_idx in range(len(impls)):
    x = impl_idx/2
    y = impl_idx%2
    plt.subplot(2, 2, impl_idx+1)
    plt.title(impls[impl_idx])
    plt.xlabel(x_field)
    plt.ylabel(y_field)
    for dist in dists:
        plt.plot(data[dist][impls[impl_idx]][field_idx[x_field]], data[dist][impls[impl_idx]][field_idx[y_field]], '.-', label=dist)
    if(x_log):
        plt.xscale('log')
    if(y_log):
        plt.yscale('log')
    plt.legend()

plt.tight_layout()
plt.savefig(f"plt_by_impl_{x_field}_{y_field}.png", dpi=300)
plt.show()

