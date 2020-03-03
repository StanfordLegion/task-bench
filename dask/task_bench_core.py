#!/usr/bin/env python
#
# Copyright 2020 Stanford University
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

from __future__ import absolute_import, division, print_function

import cffi
import dask
import numpy as np
import os
import subprocess

# Hack: This is in its own module to avoid having this get pickled, as
# the CFFI handles are (obviously) unpickleable. By default Dask uses
# cloudpickle to pickle tasks, which appears to do introspection on
# their ASTs to figure out what globals they capture. Fortunately
# cloudpickle does not also try to introspect the contents of locally
# imported modules....

root_dir = os.path.dirname(os.path.dirname(__file__))
core_header = subprocess.check_output(
    [
        "gcc", "-D", "__attribute__(x)=", "-E", "-P",
        os.path.join(root_dir, "core/core_c.h")
    ]).decode("utf-8")
ffi = cffi.FFI()
ffi.cdef(core_header)
c = ffi.dlopen("libcore.so")


def init_client():
    import argparse
    parser = argparse.ArgumentParser(add_help=False)
    parser.add_argument('-scheduler', required=False)
    parser.add_argument('-expect-workers', type=int, default=0)
    args, unknown = parser.parse_known_args()

    if args.scheduler:
        from dask.distributed import Client
        client = Client(args.scheduler)
        if args.expect_workers > 0:
            while True:
                num_workers = len(client.ncores())
                if num_workers >= args.expect_workers:
                    break
                print(
                    'Client waiting for workers (have %s expect %s)' %
                    (num_workers, args.expect_workers),
                    flush=True)
                import time
                time.sleep(5)
    else:
        client = None

    return client


def encode_task_graph(graph):
    return np.frombuffer(
        ffi.buffer(ffi.addressof(graph), ffi.sizeof(graph)), dtype=np.ubyte)


def decode_task_graph(graph_array):
    return ffi.cast("task_graph_t *", graph_array.ctypes.data)[0]


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


def app_task_graphs(app):
    result = []
    graphs = c.app_task_graphs(app)
    for i in range(c.task_graph_list_num_task_graphs(graphs)):
        result.append(c.task_graph_list_task_graph(graphs, i))

    return result


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


@dask.delayed(nout=2)
def execute_point_scratch(graph_array, timestep, point, scratch, *inputs):
    return execute_point_impl(
        graph_array, timestep, point, scratch, *inputs), scratch


@dask.delayed
def execute_point_no_scratch(graph_array, timestep, point, *inputs):
    return execute_point_impl(graph_array, timestep, point, None, *inputs)


def init_scratch_direct(scratch_bytes):
    scratch = np.empty(scratch_bytes, dtype=np.ubyte)
    scratch_ptr = ffi.cast("char *", scratch.ctypes.data)
    c.task_graph_prepare_scratch(scratch_ptr, scratch_bytes)
    return scratch


@dask.delayed
def init_scratch_delayed(scratch_bytes):
    return init_scratch_direct(scratch_bytes)


@dask.delayed
def join(*args):
    pass


def splitter(value, idx):
    return value[idx]


# Entry point for direct graph construction
def execute_point_direct(graph_array, timestep, point, scratch, *inputs):
    if scratch is not None:
        return execute_point_impl(
            graph_array, timestep, point, scratch, *inputs), scratch
    else:
        return execute_point_impl(graph_array, timestep, point, None, *inputs)


# Entry points for dask.delayed
def execute_point_delayed(graph_array, timestep, point, scratch, *inputs):
    if scratch is not None:
        return execute_point_scratch(
            graph_array, timestep, point, scratch, *inputs)
    else:
        return execute_point_no_scratch(
            graph_array, timestep, point, *inputs), None
