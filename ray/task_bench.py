import task_bench_core as core

import ray
import sys
import time

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


@ray.remote
def task1():
    print("task1")

@ray.remote
def task2(id):
    print("task2")

if __name__ == "__main__":
    # TODO (rohany): Not sure what to do here for multi-node.
    ray.init()

    # id1s = [task1.remote() for _ in range(10)]
    # id2s = [task2.remote(id) for id in id1s]
    # done = ray.get(id2s)
    execute_task_bench()
