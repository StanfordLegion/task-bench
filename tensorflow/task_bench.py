from __future__ import absolute_import, division, print_function

import sys
import os
import cffi
import subprocess
import argparse
import time

import tensorflow as tf
import numpy as np

# load core header file, set up calling core in c with ffi
core_header = subprocess.check_output(
    ["gcc", "-D", "__attribute__(x)=", "-E", "-P", "../core/core_c.h"]
).decode("utf-8")
ffi = cffi.FFI()
ffi.cdef(core_header)
c = ffi.dlopen("libcore.so")

no_input_module = tf.load_op_library("no_input.so")
no_input = no_input_module.no_input
one_input_module = tf.load_op_library("one_input.so")
one_input = one_input_module.one_input
two_input_module = tf.load_op_library("two_input.so")
two_input = two_input_module.two_input
three_input_module = tf.load_op_library("three_input.so")
three_input = three_input_module.three_input
four_input_module = tf.load_op_library("four_input.so")
four_input = four_input_module.four_input
five_input_module = tf.load_op_library("five_input.so")
five_input = five_input_module.five_input


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


ops = [no_input, one_input, two_input, three_input, four_input, five_input]
def input_op(inputs, task_graph_tensor, timestep, point):
    op = ops[len(inputs)]
    return op(task_graph_tensor, timestep, point, *inputs)

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

    outputs = []
    last_row = []
    for timestep in range(0, graph.timesteps):
        offset = c.task_graph_offset_at_timestep(graph, timestep)
        width = c.task_graph_width_at_timestep(graph, timestep)
        dset = c.task_graph_dependence_set_at_timestep(graph, timestep)
        row = []
        for point in range(0, offset):
            row.append(None)
        for point in range(offset, offset + width):
            with tf.name_scope("timestep-" + str(timestep) + "_point-" + str(point)):
                inputs = []
                for dep in task_graph_dependencies(graph, timestep, point):
                    inputs.append(outputs[timestep - 1][dep])
                row.append(input_op(inputs, graph_tensor, timestep, point))
        for point in range(offset + width, graph.max_width):
            row.append(None)
        assert(len(row) == graph.max_width)
        outputs.append(row)

    sess.run(outputs[timestep][offset : offset + width])

def execute_task_bench():
    app = app_create(sys.argv)
    task_graphs = app_task_graphs(app)
    start_time = time.time()
    for task_graph in task_graphs:
        execute_task_graph(task_graph)
    total_time = time.time() - start_time
    c.app_report_timing(app, total_time)


if __name__ == "__main__":
    execute_task_bench()
