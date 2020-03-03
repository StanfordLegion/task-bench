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


def execute_task_graph(graph):
    graph_array = core.encode_task_graph(graph)

    if graph.scratch_bytes_per_task > 0:
        scratch = [
            core.init_scratch_delayed(graph.scratch_bytes_per_task)
            for _ in range(graph.max_width)
        ]
    else:
        scratch = [None for _ in range(graph.max_width)]

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
            output, scratch[point] = core.execute_point_delayed(
                graph_array, timestep, point, scratch[point], *inputs)
            row.append(output)
            outputs.append(output)
        for point in range(offset + width, graph.max_width):
            row.append(None)
        assert len(row) == graph.max_width
        last_row = row
    return outputs


def execute_task_bench():
    app = core.app_create(sys.argv)
    task_graphs = core.app_task_graphs(app)
    start_time = time.perf_counter()
    results = []
    for task_graph in task_graphs:
        results.extend(execute_task_graph(task_graph))
    core.join(*results).compute()
    total_time = time.perf_counter() - start_time
    core.c.app_report_timing(app, total_time)


if __name__ == "__main__":
    client = core.init_client()
    execute_task_bench()
