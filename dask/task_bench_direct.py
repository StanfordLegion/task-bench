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

import dask
import sys
import time

import task_bench_core as core


def execute_task_graph(graph, computations, next_tid):
    graph_array = core.encode_task_graph(graph)

    scratch = [None for _ in range(graph.max_width)]
    if graph.scratch_bytes_per_task > 0:
        for point in range(graph.max_width):
            scratch[point] = 'task_%s' % next_tid
            next_tid += 1
            computations[scratch[point]] = (
                core.init_scratch_direct, graph.scratch_bytes_per_task)

    outputs = []
    last_row = None
    for timestep in range(0, graph.timesteps):
        offset = core.c.task_graph_offset_at_timestep(graph, timestep)
        width = core.c.task_graph_width_at_timestep(graph, timestep)
        row = []
        for point in range(0, offset):
            row.append(None)
        for point in range(offset, offset + width):
            inputs = []
            for dep in core.task_graph_dependencies(graph, timestep, point):
                inputs.append(last_row[dep])

            result = 'task_%s' % next_tid
            next_tid += 1

            computations[result] = (
                core.execute_point_direct, graph_array, timestep, point,
                scratch[point], *inputs)

            if scratch[point] is not None:
                output = 'task_%s' % next_tid
                next_tid += 1
                scratch[point] = 'task_%s' % next_tid
                next_tid += 1

                computations[output] = (core.splitter, result, 0)
                computations[scratch[point]] = (core.splitter, result, 1)
            else:
                output = result

            row.append(output)
            outputs.append(output)
        for point in range(offset + width, graph.max_width):
            row.append(None)
        assert len(row) == graph.max_width
        last_row = row
    return outputs, next_tid


def execute_task_bench(client):
    app = core.app_create(sys.argv)
    task_graphs = core.app_task_graphs(app)
    start_time = time.perf_counter()
    computations = {}
    next_tid = 0
    results = []
    for task_graph in task_graphs:
        result, next_tid = execute_task_graph(
            task_graph, computations, next_tid)
        results.extend(result)
    if client:
        from dask.distributed import wait
        futures = client.get(computations, results, sync=False)
        wait(futures)
    else:
        dask.get(computations, results)
    total_time = time.perf_counter() - start_time
    core.c.app_report_timing(app, total_time)


if __name__ == "__main__":
    client = core.init_client()
    execute_task_bench(client)
