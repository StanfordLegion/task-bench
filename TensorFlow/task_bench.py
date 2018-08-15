from __future__ import absolute_import, division, print_function

import sys
import os
import cffi
import subprocess

import tensorflow as tf
import numpy as np

def task_graph_from_core():
	header = subprocess.check_output(['gcc', '-E', '-P', '../core/core_c.h']).decode('utf-8')

	ffi = cffi.FFI()
	ffi.cdef(header)
	c = ffi.dlopen("../core/libcore.so")

	argv_elements = []
	for _, arg in enumerate(sys.argv):
		argv_elements = argv_elements + [ffi.new("char[]", arg)]

	argv = ffi.new("char *[]", argv_elements)

	app = c.app_create(len(argv_elements), argv)
	c.app_display(app)

def execute_task_bench():
	task_graph_from_core()

if __name__ == "__main__":
	execute_task_bench()