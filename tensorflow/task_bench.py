#!/usr/bin/env python
#
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

from __future__ import absolute_import, division, print_function

import sys
import cffi
import subprocess
import time

import numpy as np
import tensorflow.compat.v1 as tf
tf.disable_v2_behavior()

core_header = subprocess.check_output(
    ["gcc", "-D", "__attribute__(x)=", "-E", "-P",
     "../core/core_c.h"]).decode("utf-8")
ffi = cffi.FFI()
ffi.cdef(core_header)
c = ffi.dlopen("libcore.so")

ops = tf.load_op_library("task_bench_ops.so")
kernel_op = ops.execute_point_op
prepare_scratch_op = ops.prepare_scratch_op


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


def build_task_graph_tensor(graph):
    return tf.convert_to_tensor(
        np.frombuffer(
            ffi.buffer(ffi.addressof(graph), ffi.sizeof(graph)),
            dtype=np.ubyte),
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

    graph_tensor = build_task_graph_tensor(graph)

    feed = {}

    dummy_name = "dummy_%s" % graph.graph_index
    dummy = tf.placeholder(
        tf.uint8, shape=(graph.output_bytes_per_task, ), name=dummy_name)
    feed["%s:0" % dummy_name] = np.zeros(
        graph.output_bytes_per_task, dtype=np.uint8)

    scratch_dummy_name = ["scratch_dummy_%s_%s" % (graph.graph_index, point) for point in range(graph.max_width)]
    scratch_dummy = [tf.placeholder(
        tf.uint8, shape=(0, ), name=scratch_dummy_name[point]) for point in range(graph.max_width)]
    scratch_feed_value = np.zeros(0, dtype=np.uint8)
    for point in range(graph.max_width):
        feed["%s:0" % scratch_dummy_name[point]] = scratch_feed_value

    scratch = [prepare_scratch_op(graph_tensor, scratch_dummy[point]) for point in range(graph.max_width)]

    outputs = []
    last_row = [dummy for point in range(graph.max_width)]
    for timestep in range(0, graph.timesteps):
        offset = c.task_graph_offset_at_timestep(graph, timestep)
        width = c.task_graph_width_at_timestep(graph, timestep)
        row = []
        for point in range(0, offset):
            row.append(None)
        for point in range(offset, offset + width):
            output = last_row[point]
            inputs = []
            for dep in task_graph_dependencies(graph, timestep, point):
                inputs.append(last_row[dep])
            if len(inputs) == 0:
                # Add a dummy to tasks with no input so that they can't be constant-folded.
                inputs.append(dummy)
            op, scratch[point] = kernel_op(graph_tensor, timestep, point, output, scratch[point], inputs)
            row.append(op)
            outputs.append(op)
        for point in range(offset + width, graph.max_width):
            row.append(dummy)
        assert len(row) == graph.max_width
        last_row = row

    return outputs, feed


def execute_task_bench():
    app = app_create(sys.argv)
    task_graphs = app_task_graphs(app)

    all_output = []
    all_feed = {}

    for task_graph in task_graphs:
        output, feed = execute_task_graph(task_graph)
        all_output.extend(output)
        all_feed.update(feed)

    sess = tf.Session()
    for i in range(2):
        start_time = time.perf_counter()
        sess.run(all_output, feed_dict=all_feed)
        total_time = time.perf_counter() - start_time
    c.app_report_timing(app, total_time)


if __name__ == "__main__":
    execute_task_bench()
