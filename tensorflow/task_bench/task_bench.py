from __future__ import absolute_import, division, print_function

import sys
import os
import cffi
import subprocess

import tensorflow as tf
import numpy as np

# load core header file, set up calling core in c with ffi
header = subprocess.check_output(['gcc', '-E', '-P', '../../core/core_c.h']).decode('utf-8')
ffi = cffi.FFI()
ffi.cdef(header)
c = ffi.dlopen("../../core/libcore.so")

two_input_module = tf.load_op_library("../input_ops/two_input_op/two_input.so")
two_input = two_input_module.two_input
three_input_module = tf.load_op_library("../input_ops/three_input_op/three_input.so")
three_input = three_input_module.three_input

def task_graphs_from_core():
	
	argv_elements = []
	for _, arg in enumerate(sys.argv):
		argv_elements = argv_elements + [ffi.new("char[]", arg)]

	argv = ffi.new("char *[]", argv_elements)

	app = c.app_create(len(argv_elements), argv)
	c.app_display(app)

	task_graphs = []
	task_graph_list = c.app_task_graphs(app)
	for tgi in range(c.task_graph_list_num_task_graphs(task_graph_list)):
		task_graph = c.task_graph_list_task_graph(task_graph_list, tgi)
		task_graphs = task_graphs + [task_graph]

	return task_graphs

def execute_task_bench():
	task_graphs = task_graphs_from_core()

	for tgi, task_graph in enumerate(task_graphs):
		tg_ptr = ffi.new("task_graph_t *")
		tg_ptr[0] = task_graph
		ptr = ffi.cast("char *", tg_ptr)


if __name__ == "__main__":
	execute_task_bench()