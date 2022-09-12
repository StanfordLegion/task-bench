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
import functools
import os
import numpy as np
import subprocess
import sys
import time

import pygion
from pygion import index_launch, task, Domain, Fspace, Ispace, ID, Partition, R, Region, RW, Trace, WD


root_dir = os.path.dirname(os.path.dirname(__file__))
core_header = subprocess.check_output(
    [
        "gcc", "-D", "__attribute__(x)=", "-E", "-P",
        os.path.join(root_dir, "core/core_c.h")
    ]).decode("utf-8")
ffi = pygion.ffi
ffi.cdef(core_header)
c = pygion.c


task_graph = pygion.Type(
    np.dtype([('bytes', np.void, ffi.sizeof('task_graph_t'))]),
    'task_graph_t')

max_fields = 2
max_args = 5

use_native = os.environ.get('TASK_BENCH_USE_NATIVE') == '1'


def once_only():
    return c.legion_context_get_shard_id(pygion._my.ctx.runtime, pygion._my.ctx.context, True) == 0


def app_create(args):
    c_args = []
    c_argv = ffi.new("char *[]", len(args) + 1)
    for i, arg in enumerate(args):
        c_args.append(ffi.new("char []", arg.encode('utf-8')))
        c_argv[i] = c_args[-1]
    c_argv[len(args)] = ffi.NULL

    app = c.app_create(len(args), c_argv)
    return app


def app_task_graphs(app):
    result = []
    graphs = c.app_task_graphs(app)
    for i in range(c.task_graph_list_num_task_graphs(graphs)):
        result.append(c.task_graph_list_task_graph(graphs, i))

    return result


def encode_task_graph(graph):
    return np.frombuffer(
        ffi.buffer(ffi.addressof(graph), ffi.sizeof(graph)), dtype=np.ubyte)


def decode_task_graph(graph_array):
    return ffi.cast("task_graph_t *", graph_array.ctypes.data)[0]


def task_graph_dependencies(graph, dset, point):
    ilist = c.task_graph_dependencies(graph, dset, point)
    for i in range(0, c.interval_list_num_intervals(ilist)):
        interval = c.interval_list_interval(ilist, i)
        for dep in range(interval.start, interval.end + 1):
            yield dep


def task_graph_point_dependencies(graph, timestep, point):
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


@task(leaf=True, privileges=[WD('0')])
def init_scratch_task(scratch):
    scratch_ptr = ffi.cast("char *", getattr(scratch, '0').ctypes.data)
    scratch_size = getattr(scratch, '0').shape[0]
    c.task_graph_prepare_scratch(scratch_ptr, scratch_size)


def init_partitions(graphs, num_fields):
    result = []
    primary = []
    secondary = []

    scratch = []
    p_scratch = []

    dset_max_args = []

    fspace = Fspace(
        dict((str(x), pygion.uint8) for x in range(num_fields)))

    for graph in graphs:
        colors = Ispace([graph.max_width])
        result.append(
            Region([graph.max_width * graph.output_bytes_per_task], fspace))
        primary.append(
            Partition.equal(result[-1], colors))

        for field in fspace.keys():
            pygion.fill(result[-1], field, 0)

        num_dsets = c.task_graph_max_dependence_sets(graph)
        secondary.append([])
        dset_max_args.append([])
        for dset in range(num_dsets):
            secondary[-1].append([])
            num_args = 0
            for arg in range(max_args):
                secondary[-1][-1].append(
                    Partition.pending(result[-1], colors))
                for point in range(graph.max_width):
                    deps = list(task_graph_dependencies(graph, dset, point))
                    num_args = max(num_args, len(deps))
                    secondary[-1][-1][-1].union([point], [primary[-1][deps[arg]]] if arg < len(deps) else [])
            dset_max_args[-1].append(num_args)

        if graph.scratch_bytes_per_task > 0:
            scratch.append(
                Region([graph.max_width * graph.scratch_bytes_per_task], fspace))
            p_scratch.append(
                Partition.equal(scratch[-1], colors))
            index_launch(colors, init_scratch_task, p_scratch[-1][ID])
        else:
            scratch.append(None)
            p_scratch.append(None)

    return result, primary, secondary, scratch, p_scratch, dset_max_args


def execute_point_impl(graph, num_fields, timestep, point, output, scratch, *inputs):
    fin = str(timestep % num_fields)
    fout = str((timestep + 1) % num_fields)

    graph = decode_task_graph(graph)

    input_ptrs = ffi.new(
        "char *[]", [ffi.cast("char *", getattr(i, fin).ctypes.data) for i in inputs])
    input_sizes = ffi.new("size_t []", [getattr(i, fin).shape[0] for i in inputs])

    output_ptr = ffi.cast("char *", getattr(output, fout).ctypes.data)
    output_size = getattr(output, fout).shape[0]

    if scratch is not None:
        scratch_ptr = ffi.cast("char *", getattr(scratch, '0').ctypes.data)
        scratch_size = getattr(scratch, '0').shape[0]
    else:
        scratch_ptr = ffi.NULL
        scratch_size = 0

    c.task_graph_execute_point_scratch(
        graph, timestep, point, output_ptr, output_size, input_ptrs,
        input_sizes, len(inputs), scratch_ptr, scratch_size)


# Hack: Not sure it's possible to generate these programmatically, so
# until Legion supports variadic tasks this is what we have to do.

if use_native:
    execute_point_task_0_0 = pygion.extern_task(
        task_id=2,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region] + [Region] * 0,
        privileges=[None, None, None, None, RW('1')] + [R('0')] * 0,
        calling_convention='regent')
    execute_point_task_0_1 = pygion.extern_task(
        task_id=3,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region] + [Region] * 1,
        privileges=[None, None, None, None, RW('1')] + [R('0')] * 1,
        calling_convention='regent')
    execute_point_task_0_2 = pygion.extern_task(
        task_id=4,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region] + [Region] * 2,
        privileges=[None, None, None, None, RW('1')] + [R('0')] * 2,
        calling_convention='regent')
    execute_point_task_0_3 = pygion.extern_task(
        task_id=5,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region] + [Region] * 3,
        privileges=[None, None, None, None, RW('1')] + [R('0')] * 3,
        calling_convention='regent')
    execute_point_task_0_4 = pygion.extern_task(
        task_id=6,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region] + [Region] * 4,
        privileges=[None, None, None, None, RW('1')] + [R('0')] * 4,
        calling_convention='regent')

    execute_point_task_1_0 = pygion.extern_task(
        task_id=7,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region] + [Region] * 0,
        privileges=[None, None, None, None, RW('0')] + [R('1')] * 0,
        calling_convention='regent')
    execute_point_task_1_1 = pygion.extern_task(
        task_id=8,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region] + [Region] * 1,
        privileges=[None, None, None, None, RW('0')] + [R('1')] * 1,
        calling_convention='regent')
    execute_point_task_1_2 = pygion.extern_task(
        task_id=9,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region] + [Region] * 2,
        privileges=[None, None, None, None, RW('0')] + [R('1')] * 2,
        calling_convention='regent')
    execute_point_task_1_3 = pygion.extern_task(
        task_id=10,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region] + [Region] * 3,
        privileges=[None, None, None, None, RW('0')] + [R('1')] * 3,
        calling_convention='regent')
    execute_point_task_1_4 = pygion.extern_task(
        task_id=11,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region] + [Region] * 4,
        privileges=[None, None, None, None, RW('0')] + [R('1')] * 4,
        calling_convention='regent')

    execute_point_task_scratch_0_0 = pygion.extern_task(
        task_id=12,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region, Region] + [Region] * 0,
        privileges=[None, None, None, None, RW('1'), RW('0')] + [R('0')] * 0,
        calling_convention='regent')
    execute_point_task_scratch_0_1 = pygion.extern_task(
        task_id=13,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region, Region] + [Region] * 1,
        privileges=[None, None, None, None, RW('1'), RW('0')] + [R('0')] * 1,
        calling_convention='regent')
    execute_point_task_scratch_0_2 = pygion.extern_task(
        task_id=14,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region, Region] + [Region] * 2,
        privileges=[None, None, None, None, RW('1'), RW('0')] + [R('0')] * 2,
        calling_convention='regent')
    execute_point_task_scratch_0_3 = pygion.extern_task(
        task_id=15,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region, Region] + [Region] * 3,
        privileges=[None, None, None, None, RW('1'), RW('0')] + [R('0')] * 3,
        calling_convention='regent')
    execute_point_task_scratch_0_4 = pygion.extern_task(
        task_id=16,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region, Region] + [Region] * 4,
        privileges=[None, None, None, None, RW('1'), RW('0')] + [R('0')] * 4,
        calling_convention='regent')

    execute_point_task_scratch_1_0 = pygion.extern_task(
        task_id=17,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region, Region] + [Region] * 0,
        privileges=[None, None, None, None, RW('0'), RW('0')] + [R('1')] * 0,
        calling_convention='regent')
    execute_point_task_scratch_1_1 = pygion.extern_task(
        task_id=18,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region, Region] + [Region] * 1,
        privileges=[None, None, None, None, RW('0'), RW('0')] + [R('1')] * 1,
        calling_convention='regent')
    execute_point_task_scratch_1_2 = pygion.extern_task(
        task_id=19,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region, Region] + [Region] * 2,
        privileges=[None, None, None, None, RW('0'), RW('0')] + [R('1')] * 2,
        calling_convention='regent')
    execute_point_task_scratch_1_3 = pygion.extern_task(
        task_id=20,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region, Region] + [Region] * 3,
        privileges=[None, None, None, None, RW('0'), RW('0')] + [R('1')] * 3,
        calling_convention='regent')
    execute_point_task_scratch_1_4 = pygion.extern_task(
        task_id=21,
        argument_types=[task_graph, pygion.uint32, pygion.int32, pygion.int32, Region, Region] + [Region] * 4,
        privileges=[None, None, None, None, RW('0'), RW('0')] + [R('1')] * 4,
        calling_convention='regent')
else:
    @task(leaf=True, privileges=[None, None, None, None, RW('1'), None] + [R('0')] * 0)
    def execute_point_task_0_0(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('1'), None] + [R('0')] * 1)
    def execute_point_task_0_1(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('1'), None] + [R('0')] * 2)
    def execute_point_task_0_2(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('1'), None] + [R('0')] * 3)
    def execute_point_task_0_3(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('1'), None] + [R('0')] * 4)
    def execute_point_task_0_4(*args):
        execute_point_impl(*args)

    @task(leaf=True, privileges=[None, None, None, None, RW('0'), None] + [R('1')] * 0)
    def execute_point_task_1_0(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('0'), None] + [R('1')] * 1)
    def execute_point_task_1_1(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('0'), None] + [R('1')] * 2)
    def execute_point_task_1_2(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('0'), None] + [R('1')] * 3)
    def execute_point_task_1_3(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('0'), None] + [R('1')] * 4)
    def execute_point_task_1_4(*args):
        execute_point_impl(*args)

    @task(leaf=True, privileges=[None, None, None, None, RW('1'), RW('0')] + [R('0')] * 0)
    def execute_point_task_scratch_0_0(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('1'), RW('0')] + [R('0')] * 1)
    def execute_point_task_scratch_0_1(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('1'), RW('0')] + [R('0')] * 2)
    def execute_point_task_scratch_0_2(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('1'), RW('0')] + [R('0')] * 3)
    def execute_point_task_scratch_0_3(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('1'), RW('0')] + [R('0')] * 4)
    def execute_point_task_scratch_0_4(*args):
        execute_point_impl(*args)

    @task(leaf=True, privileges=[None, None, None, None, RW('0'), RW('0')] + [R('1')] * 0)
    def execute_point_task_scratch_1_0(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('0'), RW('0')] + [R('1')] * 1)
    def execute_point_task_scratch_1_1(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('0'), RW('0')] + [R('1')] * 2)
    def execute_point_task_scratch_1_2(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('0'), RW('0')] + [R('1')] * 3)
    def execute_point_task_scratch_1_3(*args):
        execute_point_impl(*args)
    @task(leaf=True, privileges=[None, None, None, None, RW('0'), RW('0')] + [R('1')] * 4)
    def execute_point_task_scratch_1_4(*args):
        execute_point_impl(*args)

execute_point_tasks = [
    [
        execute_point_task_0_0,
        execute_point_task_0_1,
        execute_point_task_0_2,
        execute_point_task_0_3,
        execute_point_task_0_4,
    ],
    [
        execute_point_task_1_0,
        execute_point_task_1_1,
        execute_point_task_1_2,
        execute_point_task_1_3,
        execute_point_task_1_4,
    ],
]
execute_point_tasks_scratch = [
    [
        execute_point_task_scratch_0_0,
        execute_point_task_scratch_0_1,
        execute_point_task_scratch_0_2,
        execute_point_task_scratch_0_3,
        execute_point_task_scratch_0_4,
    ],
    [
        execute_point_task_scratch_1_0,
        execute_point_task_scratch_1_1,
        execute_point_task_scratch_1_2,
        execute_point_task_scratch_1_3,
        execute_point_task_scratch_1_4,
    ],
]

# for field in range(max_fields):
#     execute_point_tasks.append([])
#     for args in range(max_args):
#         execute_point_tasks[-1].append(
#             task(execute_point_impl, leaf=True, privileges=[None, None, None, None, RW('0')] + [R('1')] * args))


def execute_timestep(graph, num_fields, timestep,
                     result, primary, secondary, scratch, p_scratch, dset_max_args):
    fin = timestep % num_fields

    offset = c.task_graph_offset_at_timestep(graph, timestep)
    width = c.task_graph_width_at_timestep(graph, timestep)
    dset = c.task_graph_dependence_set_at_timestep(graph, timestep)

    colors = Domain([width], [offset])

    num_args = dset_max_args[dset]

    if scratch is None:
        point_task = execute_point_tasks[fin][num_args]
    else:
        point_task = execute_point_tasks_scratch[fin][num_args]

    point_task_args = [
        graph if use_native else encode_task_graph(graph),
        num_fields,
        timestep,
        0 if use_native else ID,
        primary[ID],
    ]
    if scratch is not None:
        point_task_args.append(p_scratch[ID])
    elif not use_native:
        point_task_args.append(None)
    point_task_args.extend(secondary[dset][arg][ID] for arg in range(num_args))
    index_launch(colors, point_task, *point_task_args)


def execute_main_loop(graphs, num_fields,
                      result, primary, secondary, scratch, p_scratch, dset_max_args):
    period = functools.reduce(np.lcm, [c.task_graph_timestep_period(graph) for graph in graphs])
    max_timesteps = max(graph.timesteps for graph in graphs)
    trace = Trace()
    for block in range(0, max_timesteps - period + 1, period):
        with trace:
            for timestep in range(block, block+period):
                for i, graph in enumerate(graphs):
                    execute_timestep(graph, num_fields, timestep,
                                     result[i], primary[i], secondary[i], scratch[i], p_scratch[i], dset_max_args[i])
    for timestep in range(block+period, max_timesteps):
        for i, graph in enumerate(graphs):
            execute_timestep(graph, num_fields, timestep,
                             result[i], primary[i], secondary[i], scratch[i], p_scratch[i], dset_max_args[i])


@task(top_level=True, inner=True, replicable=True)
def main():
    app = app_create(pygion.input_args())
    graphs = app_task_graphs(app)

    if once_only():
        c.app_display(app)

    num_fields = max_fields
    result, primary, secondary, scratch, p_scratch, dset_max_args = init_partitions(graphs, num_fields)

    pygion.execution_fence(block=True)
    start_time = pygion.c.legion_get_current_time_in_nanos()

    execute_main_loop(graphs, num_fields, result, primary, secondary, scratch, p_scratch, dset_max_args)

    pygion.execution_fence(block=True)
    stop_time = pygion.c.legion_get_current_time_in_nanos()

    total_time = (stop_time - start_time)/1e9

    if once_only():
        c.app_report_timing(app, total_time)
