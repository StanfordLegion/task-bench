#!/usr/bin/env python
#
# Copyright 2019 Stanford University
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

import sys
import cffi
import subprocess
import time

import dask
import numpy as np

if __name__ == "__main__":
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
                print('Client waiting for workers (have %s expect %s)' % (num_workers, args.expect_workers), flush=True)
                import time
                time.sleep(5)

def encode_task_graph(graph):
    from task_bench_core import ffi, c
    return np.frombuffer(ffi.buffer(ffi.addressof(graph), ffi.sizeof(graph)), dtype=np.ubyte)


def decode_task_graph(graph_array):
    from task_bench_core import ffi, c
    return ffi.cast("task_graph_t *", graph_array.ctypes.data)[0]


def execute_point_impl(graph_array, timestep, point, scratch, *inputs):
    from task_bench_core import ffi, c

    graph = decode_task_graph(graph_array)

    input_ptrs = ffi.new("char *[]", [ffi.cast("char *", i.ctypes.data) for i in inputs])
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
        graph, timestep, point,
        output_ptr, output.shape[0],
        input_ptrs, input_sizes, len(inputs),
        scratch_ptr, scratch_size)

    return output

@dask.delayed(nout=2)
def execute_point_scratch(graph_array, timestep, point, scratch, *inputs):
    return execute_point_impl(graph_array, timestep, point, scratch, *inputs), scratch

@dask.delayed
def execute_point_no_scratch(graph_array, timestep, point, *inputs):
    return execute_point_impl(graph_array, timestep, point, None, *inputs)

def execute_point(graph_array, timestep, point, scratch, *inputs):
    if scratch is not None:
        return execute_point_scratch(graph_array, timestep, point, scratch, *inputs)
    else:
        return execute_point_no_scratch(graph_array, timestep, point, *inputs), None

@dask.delayed
def init_scratch(scratch_bytes):
    return np.empty(scratch_bytes, dtype=np.ubyte)

def app_create(args):
    from task_bench_core import ffi, c

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
    from task_bench_core import ffi, c

    result = []
    graphs = c.app_task_graphs(app)
    for i in range(c.task_graph_list_num_task_graphs(graphs)):
        result.append(c.task_graph_list_task_graph(graphs, i))

    return result

def task_graph_dependencies(graph, timestep, point):
    from task_bench_core import ffi, c

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


def execute_task_graph(graph):
    from task_bench_core import ffi, c

    graph_array = encode_task_graph(graph)

    if graph.scratch_bytes_per_task > 0:
        scratch = [init_scratch(graph.scratch_bytes_per_task) for _ in range(graph.max_width)]
    else:
        scratch = [None for _ in range(graph.max_width)]

    outputs = []
    last_row = None
    for timestep in range(0, graph.timesteps):
        offset = c.task_graph_offset_at_timestep(graph, timestep)
        width = c.task_graph_width_at_timestep(graph, timestep)
        dset = c.task_graph_dependence_set_at_timestep(graph, timestep)
        row = []
        for point in range(0, offset):
            row.append(None)
        for point in range(offset, offset + width):
            inputs = []
            for dep in task_graph_dependencies(graph, timestep, point):
                inputs.append(last_row[dep])
            output, scratch[point] = execute_point(graph_array, timestep, point, scratch[point], *inputs)
            row.append(output)
            outputs.append(output)
        for point in range(offset + width, graph.max_width):
            row.append(None)
        assert(len(row) == graph.max_width)
        last_row = row
    return outputs


@dask.delayed
def join(*args):
    pass


def execute_task_bench():
    from task_bench_core import ffi, c

    app = app_create(sys.argv)
    task_graphs = app_task_graphs(app)
    start_time = time.perf_counter()
    results = []
    for task_graph in task_graphs:
        results.extend(execute_task_graph(task_graph))
    join(*results).compute()
    total_time = time.perf_counter() - start_time
    c.app_report_timing(app, total_time)


if __name__ == "__main__":
    execute_task_bench()
