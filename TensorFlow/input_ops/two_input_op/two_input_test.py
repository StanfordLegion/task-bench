import tensorflow as tf 

two_input_module = tf.load_op_library('./two_input.so')
with tf.Session(''):
	two_input_module.two_input([1], [2]).eval()
