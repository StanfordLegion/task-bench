#!/usr/bin/env python
#
# Copyright 2018 Stanford University
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

from __future__ import absolute_import, division, print_function

import sys
import cffi
import subprocess
import time

import numpy as np
import tensorflow as tf

core_header = subprocess.check_output(
    ["gcc", "-D", "__attribute__(x)=", "-E", "-P", "../core/core_c.h"]
).decode("utf-8")
ffi = cffi.FFI()
ffi.cdef(core_header)
c = ffi.dlopen("libcore.so")

ops = tf.load_op_library("task_bench_ops.so")
kernel_op = ops.task_bench_op


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


def build_task_graph_tensor(task_graph):
    return tf.convert_to_tensor(
        [ord(x) for x in ffi.buffer(ffi.addressof(task_graph), ffi.sizeof(task_graph))],
        dtype=tf.uint8,
    )


def task_graph_dependencies(graph, timestep, point):
    last_offset = c.task_graph_offset_at_timestep(graph, timestep - 1)
    last_width = c.task_graph_width_at_timestep(graph, timestep - 1)

    if timestep == 0:
        last_offset, last_width = 0, 0

    dset = c.task_graph_dependence_set_at_timestep(graph, timestep)
    ilist = c.task_graph_dependencies(graph, dset, point)
    for i in range(0, c.interval_list_num_intervals(ilist)):
        interval = c.interval_list_interval(ilist, i)
        for dep in range(interval.start, interval.end + 1):
            if last_offset <= dep < last_offset + last_width:
                yield dep

def execute_task_graph(graph):

    sess = tf.Session()

    graph_tensor = build_task_graph_tensor(graph)

    feed = {}

    dummy_name = "dummy_%s" % graph.graph_index
    dummy = tf.placeholder(tf.uint8, shape=(graph.output_bytes_per_task,), name=dummy_name)
    feed["%s:0" % dummy_name] = np.zeros(graph.output_bytes_per_task, dtype=np.uint8)

    outputs = []
    last_row = None
    for timestep in range(0, graph.timesteps):
        offset = c.task_graph_offset_at_timestep(graph, timestep)
        width = c.task_graph_width_at_timestep(graph, timestep)
        dset = c.task_graph_dependence_set_at_timestep(graph, timestep)
        row = []
        for point in range(0, offset):
            row.append(None)
        for point in range(offset, offset + width):
            inputs = []
            for dep in task_graph_dependencies(graph, timestep, point):
                inputs.append(last_row[dep])
            if len(inputs) == 0:
                # Add a dummy to tasks with no input so that they can't be constant-folded.
                inputs.append(dummy)
            op = kernel_op(graph_tensor, timestep, point, inputs)
            row.append(op)
            outputs.append(op)
        for point in range(offset + width, graph.max_width):
            row.append(None)
        assert(len(row) == graph.max_width)
        last_row = row

    sess.run(outputs, feed_dict=feed)

def execute_task_bench():
    app = app_create(sys.argv)
    task_graphs = app_task_graphs(app)
    start_time = time.perf_counter()
    for task_graph in task_graphs:
        execute_task_graph(task_graph)
    total_time = time.perf_counter() - start_time
    c.app_report_timing(app, total_time)


if __name__ == "__main__":
    execute_task_bench()
