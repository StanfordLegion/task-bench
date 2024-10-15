import cffi
import ray
import numpy as np
import os
import subprocess

# Similiarly to the FFI loading in dask/task_bench_core.py, we load
# the CFFI handles in its own module to avoid introspection from
# cloudpickle.
root_dir = os.path.dirname(os.path.dirname(__file__))
core_header = subprocess.check_output(
    [
        "gcc", "-D", "__attribute__(x)=",
               "-D", "TASK_BENCH_PYTHON_CFFI",
               "-E", "-P",
        os.path.join(root_dir, "core/core_c.h")
    ]).decode("utf-8")
ffi = cffi.FFI()
ffi.cdef(core_header)
c = ffi.dlopen("libcore.so")

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

def encode_task_graph(graph):
    return np.frombuffer(
        ffi.buffer(ffi.addressof(graph), ffi.sizeof(graph)), dtype=np.ubyte)

def app_task_graphs(app):
    result = []
    graphs = c.app_task_graphs(app)
    for i in range(c.task_graph_list_num_task_graphs(graphs)):
        result.append(c.task_graph_list_task_graph(graphs, i))
    return result

def decode_task_graph(graph_array):
    return ffi.cast("task_graph_t *", graph_array.ctypes.data)[0]

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

def execute_point_impl(graph_array, timestep, point, scratch, *inputs):
    graph = decode_task_graph(graph_array)

    input_ptrs = ffi.new(
        "char *[]", [ffi.cast("char *", i.ctypes.data) for i in inputs])
    input_sizes = ffi.new("size_t []", [i.shape[0] for i in inputs])

    output = np.empty(graph.output_bytes_per_task, dtype=np.ubyte)
    output_ptr = ffi.cast("char *", output.ctypes.data)

    if scratch is not None:
        scratch_ptr = ffi.cast("char *", scratch.ctypes.data)
        scratch_size = scratch.shape[0]
    else:
        scratch_ptr = ffi.NULL
        scratch_size = 0

    c.task_graph_execute_point_scratch(
        graph, timestep, point, output_ptr, output.shape[0], input_ptrs,
        input_sizes, len(inputs), scratch_ptr, scratch_size)
    return output

@ray.remote
def execute_point_scratch(graph_array, timestep, point, scratch, *inputs):
    return execute_point_impl(
        graph_array, timestep, point, scratch, *inputs), scratch

@ray.remote
def execute_point_no_scratch(graph_array, timestep, point, *inputs):
    return execute_point_impl(graph_array, timestep, point, None, *inputs)

def execute_point_delayed(graph_array, timestep, point, scratch, *inputs):
    if scratch is not None:
        return execute_point_scratch.remote(
            graph_array, timestep, point, scratch, *inputs)
    else:
        return execute_point_no_scratch.remote(
            graph_array, timestep, point, *inputs), None
