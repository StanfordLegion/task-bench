from __future__ import print_function
from __future__ import absolute_import
from __future__ import division

import os
import sys

import tensorflow as tf
import numpy as np 

two_input_module = tf.load_op_library("/global/homes/n/nicolaig/task-bench/TensorFlow/input_ops/two_input_op/two_input.so")
three_input_module = tf.load_op_library("/global/homes/n/nicolaig/task-bench/TensorFlow/input_ops/three_input_op/three_input.so")
two_input = two_input_module.two_input
three_input = three_input_module.three_input

with tf.device("/cpu:0"):
	a = tf.constant([1],)
with tf.device("/cpu:1"):
	b = tf.constant([2],)
with tf.device("/cpu:2"):
	c = tf.constant([3],)
with tf.device("/cpu:3"):
	d = tf.constant([4],)

config = tf.ConfigProto(device_count={"CPU": 4})
with tf.Session(config=config) as sess:
	sess.run(tf.global_variables_initializer())
	print(sess.run(two_input(a, b)))
	print(sess.run(three_input(a, b, c)))
	print(sess.run(three_input(b, c, d)))
	print(sess.run(two_input(c, d)))
