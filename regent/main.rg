-- Copyright 2018 Stanford University
--
-- Licensed under the Apache License, Version 2.0 (the "License");
-- you may not use this file except in compliance with the License.
-- You may obtain a copy of the License at
--
--     http://www.apache.org/licenses/LICENSE-2.0
--
-- Unless required by applicable law or agreed to in writing, software
-- distributed under the License is distributed on an "AS IS" BASIS,
-- WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
-- See the License for the specific language governing permissions and
-- limitations under the License.

import "regent"

local core = terralib.includec("core_c.h")

fspace fs {
  x : int8,
  y : int8,
}

fspace times {
  start : uint64,
  stop : uint64,
}

task f1(primary : region(ispace(int1d), fs),
        secondary : region(ispace(int1d), fs),
        scratch : region(ispace(int1d), fs),
        time : region(ispace(int1d), times),
        task_graph : core.task_graph_t,
        timestep : int)
where
  reads writes(primary.x),
  reads(primary.y, secondary.y),
  reads writes(scratch.x),
  reads writes(time)
do
  if timestep == 0 then
    var current = regentlib.c.legion_get_current_time_in_nanos()
    __forbid(__vectorize) -- FIXME: Breaks vectorizer
    for t in time do
      t.start min= current
    end
  end

  core.kernel_execute(task_graph.kernel)

  if timestep == task_graph.timesteps - 1 then
    var current = regentlib.c.legion_get_current_time_in_nanos()
    __forbid(__vectorize) -- FIXME: Breaks vectorizer
    for t in time do
      t.stop max= current
    end
  end
end

task f2(primary : region(ispace(int1d), fs),
        secondary : region(ispace(int1d), fs),
        scratch : region(ispace(int1d), fs),
        time : region(ispace(int1d), times),
        task_graph : core.task_graph_t,
        timestep : int)
where
  reads writes(primary.y),
  reads(primary.x, secondary.x),
  reads writes(scratch.x),
  reads writes(time)
do
  if timestep == 0 then
    var current = regentlib.c.legion_get_current_time_in_nanos()
    __forbid(__vectorize) -- FIXME: Breaks vectorizer
    for t in time do
      t.start min= current
    end
  end

  core.kernel_execute(task_graph.kernel)

  if timestep == task_graph.timesteps - 1 then
    var current = regentlib.c.legion_get_current_time_in_nanos()
    __forbid(__vectorize) -- FIXME: Breaks vectorizer
    for t in time do
      t.stop max= current
    end
  end
end


task main()
  var args = regentlib.c.legion_runtime_get_input_args()
  var app = core.app_create(args.argc, args.argv)
  core.app_display(app)

  var task_graphs = core.app_task_graphs(app)

  regentlib.assert(
    core.task_graph_list_num_task_graphs(task_graphs) == 1,
    "can only handle one task graph for now")
  var task_graph = core.task_graph_list_task_graph(task_graphs, 0)

  regentlib.assert(
    core.task_graph_max_dependence_sets(task_graph) == 1,
    "can only handle one dependence set for now")
  var dset = 0

  var max_timesteps = task_graph.timesteps
  var max_width = task_graph.max_width
  var output_bytes = task_graph.output_bytes_per_task
  -- FIXME: Causes runtime error if size is 0
  var scratch_bytes = max(task_graph.scratch_bytes_per_task, 1)

  -- Compute map from points to number of dependencies per point.
  var ndeps = region(ispace(int1d, max_width), rect1d)
  var pndeps = partition(equal, ndeps, ispace(int1d, max_width))

  var last_dep = 0
  for point = 0, max_width do
    var dep_count = 0
    var intervals = core.task_graph_dependencies(task_graph, dset, point)
    for i = 0, core.interval_list_num_intervals(intervals) do
      var interval = core.interval_list_interval(intervals, i)
      dep_count += interval.["end"] - interval.start + 1
    end
    core.interval_list_destroy(intervals)

    ndeps[point] = rect1d { last_dep, last_dep + dep_count - 1 }
    last_dep += dep_count
  end

  -- Compute dependencies.
  var deps = region(ispace(int1d, 3*max_width-2), rect1d)
  var pdeps = image(deps, pndeps, ndeps)

  -- Task output data.
  var output = region(ispace(int1d, max_width*output_bytes), fs)
  var primary = partition(equal, output, ispace(int1d, max_width))

  do
    var dep_index = 0
    for point = 0, max_width do
      var intervals = core.task_graph_dependencies(task_graph, dset, point)
      for i = 0, core.interval_list_num_intervals(intervals) do
        var interval = core.interval_list_interval(intervals, i)
        for dep = interval.start, interval.["end"] + 1 do
          deps[dep_index] = primary[dep].bounds
          dep_index += 1
        end
      end
      core.interval_list_destroy(intervals)
    end
  end

  var secondary = image(output, pdeps, deps)

  fill(output.{x, y}, 0)

  -- Task scratch data.
  var scratch = region(ispace(int1d, max_width*scratch_bytes), fs)
  var pscratch = partition(equal, scratch, ispace(int1d, max_width))

  fill(scratch.{x, y}, 0)

  -- Extra region for tracking execution time.
  var time = region(ispace(int1d, max_width, 0), times)
  var ptime = partition(equal, time, ispace(int1d, max_width))

  fill(time.start, [uint64:max()])
  fill(time.stop, [uint64:min()])

  __demand(__spmd, __trace)
  for timestep = 0, max_timesteps, 2 do
    for point = 0, max_width do
      f1(primary[point], secondary[point], pscratch[point], ptime[point],
         task_graph, timestep)
    end

    for point = 0, max_width do
      f2(primary[point], secondary[point], pscratch[point], ptime[point],
         task_graph, timestep)
    end
  end

  var start_time = [uint64:max()]
  var stop_time = [uint64:min()]
  for t in time do
    start_time min= t.start
    stop_time max= t.stop
  end
  core.app_report_timing(app, double(stop_time - start_time)/1e9)
end

if os.getenv('SAVEOBJ') == '1' then
  local root_dir = arg[0]:match(".*/") or "./"
  local core_dir = root_dir .. "../core/"
  local out_dir = (os.getenv('OBJNAME') and os.getenv('OBJNAME'):match('.*/')) or root_dir
  local link_flags = terralib.newlist({"-L" .. core_dir, "-lcore"})

  if os.getenv('STANDALONE') == '1' then
    os.execute('cp ' .. core_dir .. 'libcore.so ' .. out_dir)
    os.execute('cp ' .. os.getenv('LG_RT_DIR') .. '/../bindings/regent/libregent.so ' .. out_dir)
  end

  local exe = os.getenv('OBJNAME') or "main"
  regentlib.saveobj(main, exe, "executable", nil, link_flags)
else
  terralib.linklibrary("../core/libcore.so")
  regentlib.start(main)
end
