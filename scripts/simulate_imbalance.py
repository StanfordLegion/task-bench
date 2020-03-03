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
import cffi
import os
import random
import subprocess
import sys

root_dir = os.path.dirname(os.path.realpath(__file__))
core_header = subprocess.check_output(
    ["gcc", "-D", "__attribute__(x)=", "-E", "-P", os.path.join(root_dir, "../core/core_c.h")]
).decode("utf-8")
ffi = cffi.FFI()
ffi.cdef(core_header)
c = ffi.dlopen("libcore.so")

def app_create(args):
    c_args = []
    c_argv = ffi.new("char *[]", len(args) + 1)
    for i, arg in enumerate(args):
        c_args.append(ffi.new("char []", arg.encode('utf-8')))
        c_argv[i] = c_args[-1]
    c_argv[len(args)] = ffi.NULL

    app = c.app_create(len(args), c_argv)
    c.app_display(app)
    return app

def app_task_graphs(app):
    result = []
    graphs = c.app_task_graphs(app)
    for i in range(c.task_graph_list_num_task_graphs(graphs)):
        result.append(c.task_graph_list_task_graph(graphs, i))

    return result

def task_graph_dependencies(graph, timestep, point):
    last_offset = c.task_graph_offset_at_timestep(graph, timestep - 1)
    last_width = c.task_graph_width_at_timestep(graph, timestep - 1)

    dset = c.task_graph_dependence_set_at_timestep(graph, timestep)
    ilist = c.task_graph_dependencies(graph, dset, point)
    for i in range(0, c.interval_list_num_intervals(ilist)):
        interval = c.interval_list_interval(ilist, i)
        for dep in range(interval.start, interval.end + 1):
            if last_offset <= dep < last_offset + last_width:
                yield dep

def task_duration(timestep, point, imbalance):
    # FIXME: Query the actual API to figure out how long the tasks are
    # supposed to be running.

    value = random.uniform(0.0, 1.0)

    return 1 + (value - 0.5)*imbalance

def simulate_task_graph(graph):
    last_completion = [0 for point in range(graph.max_width)]

    cumulative_time = 0

    for timestep in range(0, graph.timesteps):
        offset = c.task_graph_offset_at_timestep(graph, timestep)
        width = c.task_graph_width_at_timestep(graph, timestep)
        completion = []
        for point in range(0, offset):
            completion.append(None)
        for point in range(offset, offset + width):
            deps = task_graph_dependencies(graph, timestep, point)
            duration = task_duration(timestep, point, graph.kernel.imbalance)
            completion.append(
                max((last_completion[dep] for dep in deps),
                    default=last_completion[point]) +
                duration)
            cumulative_time += duration
        for point in range(offset + width, graph.max_width):
            completion.append(None)
        last_completion = completion
    final_time = max(last_completion)

    return final_time, cumulative_time / graph.max_width

def simulate_task_bench():
    app = app_create(sys.argv)
    task_graphs = app_task_graphs(app)

    final_time, busy_time = 0, 0

    for graph in task_graphs:
        final, busy = simulate_task_graph(graph)
        final_time += final
        busy_time += busy

    print('Final time %f' % final_time)
    print('Average busy time per core %f' % busy_time)

    idle_time = final_time - busy_time
    print('Average idle time per core %f' % idle_time)

    busy_ratio = busy_time / final_time
    print('Average busy ratio per core %f' % busy_ratio)

    idle_ratio = idle_time / final_time
    print('Average idle ratio per core %f' % idle_ratio)

if __name__ == '__main__':
    simulate_task_bench()
