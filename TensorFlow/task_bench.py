from __future__ import print_function
from __future__ import absolute_import
from __future__ import division

import sys
import os

import tensorflow as tf
import numpy as np
from tensor_flow_slurm_config import tf_config_from_slurm

cluster, job_name, task_index = tf_config_from_slurm(ps_number=1)
cluster_spec = tf.train.ClusterSpec(cluster)
server = tf.train.Server(cluster_spec, job_name=job_name, task_index=task_index)

with tf.device(tf.train.replica_device_setter(cluster_spec)):
	v1 = tf.get_variable("v1", [1])