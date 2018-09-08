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
core_header = subprocess.check_output(['gcc', '-D', '__attribute__(x)=', '-E', '-P', '../../../core/core_c.h']).decode('utf-8')
ffi = cffi.FFI()
ffi.cdef(core_header)
c = ffi.dlopen("../../../core/libcore.so")

no_input_module = tf.load_op_library("../../input_ops/no_input_op/no_input.so")
no_input = no_input_module.no_input
one_input_module = tf.load_op_library("../../input_ops/one_input_op/one_input.so")
one_input = one_input_module.one_input
two_input_module = tf.load_op_library("../../input_ops/two_input_op/two_input.so")
two_input = two_input_module.two_input
three_input_module = tf.load_op_library("../../input_ops/three_input_op/three_input.so")
three_input = three_input_module.three_input
four_input_module = tf.load_op_library("../../input_ops/four_input_op/four_input.so")
four_input = four_input_module.four_input
five_input_module = tf.load_op_library("../../input_ops/five_input_op/five_input.so")
five_input = five_input_module.five_input

def app_from_core():
	argv_elements = []
		
	for a in sys.argv:
		arg = ffi.new("char []", a)
		argv_elements += [arg]

	argv = ffi.new("char *[]", argv_elements)

	app = c.app_create(len(argv_elements), argv)
	c.app_display(app)
	return app

def task_graphs_from_core(app):
	task_graphs = []
	task_graph_list = c.app_task_graphs(app)
	for tgi in range(c.task_graph_list_num_task_graphs(task_graph_list)):
		task_graph = c.task_graph_list_task_graph(task_graph_list, tgi)
		task_graphs = task_graphs + [task_graph]

	return task_graphs

def build_task_graph_tensor(task_graph):
	return tf.convert_to_tensor([task_graph.timesteps, 
								task_graph.max_width, 
								task_graph.dependence,
								task_graph.radix, 
								task_graph.kernel.type, 
								task_graph.kernel.iterations,
								task_graph.output_bytes_per_task,
								task_graph.scratch_bytes_per_task,],
								dtype=tf.uint32)

def input_op(inputs, task_graph_tensor, timestep, point):
	if len(inputs) == 0:
		return no_input(task_graph_tensor, timestep, point, tf.int8)
	elif len(inputs) == 1:
		return one_input(inputs[0], task_graph_tensor, timestep, point)
	elif len(inputs) == 2:
		return two_input(inputs[0], inputs[1], task_graph_tensor, timestep, point)
	elif len(inputs) == 3:
		return three_input(inputs[0], inputs[1], inputs[2], task_graph_tensor, timestep, point)
	elif len(inputs) == 4:
		return four_input(inputs[0], inputs[1], inputs[2], inputs[3], task_graph_tensor, timestep, point)
	return five_input(inputs[0], inputs[1], inputs[2], inputs[3], inputs[4], task_graph_tensor, timestep, point)

def execute_task_graph(task_graph):

	sess = tf.Session()

	task_graph_tensor = build_task_graph_tensor(task_graph)

	outputs = []
	last_row = []
	for timestep in range(0, task_graph.timesteps):
		# print("TIMESTEP", timestep)
		offset_at_timestep = c.task_graph_offset_at_timestep(task_graph, timestep)
		width_at_timestep = c.task_graph_width_at_timestep(task_graph, timestep)
		dependence_set = c.task_graph_dependence_set_at_timestep(task_graph, timestep)
		row = []
		for point in range(offset_at_timestep, offset_at_timestep + width_at_timestep):
			with tf.name_scope("timestep-" + str(timestep) + "_node-" + str(point)):
				# get dependencies
				# print("	POINT", point)
				point_inputs = []
				intervals = c.task_graph_dependencies(task_graph, dependence_set, point)
				for interval_index in range(0, c.interval_list_num_intervals(intervals)):
					interval = c.interval_list_interval(intervals, interval_index)
					for dep in range(interval.start, interval.end+1):
						# print("		DEPENDENCY", dep)
						if timestep-1 > -1:
							point_inputs += [outputs[timestep-1][dep]]

				row += [input_op(point_inputs, task_graph_tensor, timestep, point)]
		outputs += [row]

	print(sess.run(outputs[task_graph.timesteps-1][range(0, task_graph.max_width)]))

def execute_task_bench():
	app = app_from_core()
	task_graphs = task_graphs_from_core(app)
	start_time = time.time()
	for tgi, task_graph in enumerate(task_graphs):
		execute_task_graph(task_graph)
	total_time = time.time() - start_time
	c.app_report_timing(app, total_time)

if __name__ == "__main__":
	execute_task_bench()