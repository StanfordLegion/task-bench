from __future__ import print_function
from __future__ import absolute_import
from __future__ import division

import sys
import os

import tensorflow as tf
import numpy as np
from tensor_flow_slurm_config_model_parallelism import tf_config_from_slurm

# two_input_module = tf.load_op_library("/global/homes/n/nicolaig/task-bench/TensorFlow/input_ops/two_input_op/two_input.so")
# three_input_module = tf.load_op_library("/global/homes/n/nicolaig/task-bench/TensorFlow/input_ops/three_input_op/three_input.so")
# two_input = two_input_module.two_input
# three_input = three_input_module.three_input

cluster, job_name, task_index = tf_config_from_slurm(port_number=2222)
cluster_spec = tf.train.ClusterSpec(cluster)
server = tf.train.Server(cluster_spec, job_name=job_name, task_index=task_index)

with tf.device("/task:1"):
	a = tf.Variable(tf.ones(()))
	a = tf.square(a)
with tf.device("/task:0"):
	b = tf.Variable(tf.ones(()))
	b = tf.square(b)
with tf.device("/task:2"):
	c = tf.Variable(tf.ones(()))
	c = tf.square(c)
with tf.device("/task:3"):
	loss = a+b+c
opt = tf.train.GradientDescentOptimizer(learning_rate=0.1)
train_op = opt.minimize(loss)

sess = tf.Session(server.target)
sess.run(tf.global_variables_initializer())
