from __future__ import absolute_import, division, print_function
from tensorflow.python.client import timeline

import sys
import os
import cffi
import subprocess
import argparse

import tensorflow as tf
import numpy as np

# configure args
parser = argparse.ArgumentParser()
parser.add_argument("-type", help="type of dependence pattern")
parser.add_argument("-width", help="width of task graph")
parser.add_argument("-steps", help="number of steps in task graph")
parser.add_argument("-kernel_type", help="kernel type for task graph [OPTIONS: busy_wait, ...]")
parser.add_argument("-iter", help="number of iterations for task graph")
args = parser.parse_args()

# load core header file, set up calling core in c with ffi
header = subprocess.check_output(['gcc', '-D', '__attribute__(x)=', '-E', '-P', '../../core/core_c.h']).decode('utf-8')
ffi = cffi.FFI()
ffi.cdef(header)
c = ffi.dlopen("../../core/libcore.so")

no_input_module = tf.load_op_library("../input_ops/no_input_op/no_input.so")
no_input = no_input_module.no_input
two_input_module = tf.load_op_library("../input_ops/two_input_op/two_input.so")
two_input = two_input_module.two_input
three_input_module = tf.load_op_library("../input_ops/three_input_op/three_input.so")
three_input = three_input_module.three_input

def task_graphs_from_core():
	
	argv_elements = [
		ffi.new("char[]", ""),
		ffi.new("char[]", "-type"), ffi.new("char[]", args.type),
		ffi.new("char[]", "-width"), ffi.new("char[]", args.width),
		ffi.new("char[]", "-steps"), ffi.new("char[]", args.steps),
		ffi.new("char[]", "-kernel_type"), ffi.new("char[]", args.kernel_type),
		ffi.new("char[]", "-iter"), ffi.new("char[]", args.iter),
	]

	argv = ffi.new("char *[]", argv_elements)

	app = c.app_create(len(argv_elements), argv)
	c.app_display(app)

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

def execute_task_graph(task_graph):

	sess = tf.Session();
	# core usage visualization
	options = tf.RunOptions(trace_level=tf.RunOptions.FULL_TRACE)
	run_metadata = tf.RunMetadata()

	output_type = tf.int8
	task_graph_tensor = build_task_graph_tensor(task_graph)
	""" TODO: Implement for multi-core/multi-node. Set variables to live on individual cores/nodes """
	outputs = tf.get_variable("outputs", 
		dtype=output_type, 
		shape=[task_graph.timesteps, task_graph.max_width, 2],
		initializer=tf.zeros_initializer())

	sess = tf.Session()
	sess.run(outputs.initializer)

	for timestep in range(0, task_graph.timesteps):
		# print("TIMESTEP", timestep)
		offset_at_timestep = c.task_graph_offset_at_timestep(task_graph, timestep)
		width_at_timestep = c.task_graph_width_at_timestep(task_graph, timestep)
		for node in range(offset_at_timestep, offset_at_timestep + width_at_timestep):
			# print("NODE", node)
			with tf.name_scope("timestep-" + str(timestep) + "_node-" + str(node)): # give unique variable/op name for timestep and node
				if timestep == 0:
					sess.run(tf.assign(outputs[timestep,node,], no_input(task_graph_tensor, timestep, node, output_type)), options=options, run_metadata = run_metadata)
				elif timestep > 0:
					if node == 0: # at left edge, use two_input
						sess.run(tf.assign(outputs[timestep,node,], two_input(outputs[timestep-1,node], outputs[timestep-1,node+1],
							task_graph_tensor, timestep, node)), options=options, run_metadata = run_metadata)
					elif node == (offset_at_timestep + width_at_timestep - 1): # at right edge, use two_input
						sess.run(tf.assign(outputs[timestep,node,], two_input(outputs[timestep-1,node-1], outputs[timestep-1,node], 
							task_graph_tensor, timestep, node)), options=options, run_metadata = run_metadata)
					else: # in center nodes
						sess.run(tf.assign(outputs[timestep,node,], three_input(outputs[timestep-1,node-1], outputs[timestep-1,node], outputs[timestep-1,node+1], 
							task_graph_tensor, timestep, node)), options=options, run_metadata = run_metadata)

	print(sess.run(outputs, options=options, run_metadata=run_metadata))

	fetched_timeline = timeline.Timeline(run_metadata.step_stats)
	chrome_trace = fetched_timeline.generate_chrome_trace_format()
	with open(args.output_file, 'w') as f:
		f.write(chrome_trace)


def execute_task_bench():
	task_graphs = task_graphs_from_core()

	for tgi, task_graph in enumerate(task_graphs):
		execute_task_graph(task_graph)
		

if __name__ == "__main__":
	execute_task_bench()
