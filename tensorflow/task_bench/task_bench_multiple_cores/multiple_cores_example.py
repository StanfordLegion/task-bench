from __future__ import print_function
from __future__ import absolute_import
from __future__ import division

import os
import sys

import tensorflow as tf
import numpy as np
from tensorflow.python.client import timeline

with tf.device("/cpu:0"):
    a = tf.Variable([1])
with tf.device("/cpu:1"):
    b = tf.Variable([2])
with tf.device("/cpu:2"):
    c = tf.Variable([3])
with tf.device("/cpu:3"):
    d = tf.Variable([4])

with tf.device("/cpu:0"):
    total_a = tf.add_n([a, b])
with tf.device("/cpu:1"):
    total_b = tf.add_n([a, b, c])
with tf.device("/cpu:2"):
    total_c = tf.add_n([b, c, d])
with tf.device("/cpu:3"):
    total_d = tf.add_n([c, d])

graph = tf.add_n([total_a, total_b, total_c, total_d])

config = tf.ConfigProto(device_count={"CPU": 4})
with tf.Session(config=config) as sess:
    sess.run(tf.global_variables_initializer())

    options = tf.RunOptions(trace_level=tf.RunOptions.FULL_TRACE)
    run_metadata = tf.RunMetadata()
    sess.run(
        [total_a, total_b, total_c, total_d, graph],
        options=options,
        run_metadata=run_metadata,
    )

    fetched_timeline = timeline.Timeline(run_metadata.step_stats)
    chrome_trace = fetched_timeline.generate_chrome_trace_format()
    with open("timeline_01.json", "w") as f:
        f.write(chrome_trace)
