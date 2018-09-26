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

local c = regentlib.c
local core = terralib.includec("core_c.h")

fspace fs {
  x : int8,
  y : int8,
}

fspace times {
  start : uint64,
  stop : uint64,
}

terra get_base_and_size(runtime : c.legion_runtime_t,
                        acc : c.legion_accessor_array_1d_t,
                        is : c.legion_index_space_t)
  var d = c.legion_index_space_get_domain(runtime, is)
  var rect = c.legion_domain_get_rect_1d(d)

  var subrect : c.legion_rect_1d_t
  var offset : c.legion_byte_offset_t
  var base = c.legion_accessor_array_1d_raw_rect_ptr(
    acc, rect, &subrect, &offset)
  var volume = c.legion_domain_get_volume(d)
  regentlib.assert(base ~= nil or volume <= 1, "failed to get base pointer")
  regentlib.assert(subrect.lo.x[0] == rect.lo.x[0], "size mismatch")
  regentlib.assert(subrect.hi.x[0] == rect.hi.x[0], "size mismatch")
  regentlib.assert(offset.offset == 1 or volume <= 1, "stride mismatch")

  return base, volume
end

terra execute_point(runtime : c.legion_runtime_t,
                    output : c.legion_physical_region_t[1],
                    output_fields : c.legion_field_id_t[1],
                    input : c.legion_physical_region_t[1],
                    input_fields : c.legion_field_id_t[1],
                    scratch : c.legion_physical_region_t[1],
                    scratch_fields : c.legion_field_id_t[1],
                    primary : c.legion_logical_partition_t,
                    task_graph : core.task_graph_t,
                    timestep : int,
                    point : int)
  var output_acc = c.legion_physical_region_get_field_accessor_array_1d(
    output[0], output_fields[0])
  var input_acc = c.legion_physical_region_get_field_accessor_array_1d(
    input[0], input_fields[0])
  var scratch_acc = c.legion_physical_region_get_field_accessor_array_1d(
    scratch[0], scratch_fields[0])

  var dset = core.task_graph_dependence_set_at_timestep(task_graph, timestep)
  var intervals = core.task_graph_dependencies(task_graph, dset, point)

  var num_inputs = 0
  for i = 0, core.interval_list_num_intervals(intervals) do
    var interval = core.interval_list_interval(intervals, i)
    num_inputs = num_inputs + interval.["end"] - interval.start + 1
  end

  var output_r = c.legion_physical_region_get_logical_region(output[0])
  var output_is = output_r.index_space
  var output_ptr, output_size = get_base_and_size(runtime, output_acc, output_is)

  var scratch_r = c.legion_physical_region_get_logical_region(scratch[0])
  var scratch_is = scratch_r.index_space
  var scratch_ptr, scratch_size = get_base_and_size(runtime, scratch_acc, scratch_is)

  var input_ptrs = [&&int8](c.malloc(num_inputs*[sizeof(&int8)]))
  var input_sizes = [&c.size_t](c.malloc(num_inputs*[sizeof(c.size_t)]))
  regentlib.assert(input_ptrs ~= nil and input_sizes ~= nil, "malloc failed")

  var input_index = 0
  for i = 0, core.interval_list_num_intervals(intervals) do
    var interval = core.interval_list_interval(intervals, i)
    for dep = interval.start, interval.["end"] + 1 do
      var r = c.legion_logical_partition_get_logical_subregion_by_color(
        runtime, primary, dep)
      var is = r.index_space
      var base, size = get_base_and_size(runtime, input_acc, is)

      input_ptrs[input_index] = [&int8](base)
      input_sizes[input_index] = size
      input_index = input_index + 1
    end
  end
  core.interval_list_destroy(intervals)

  core.task_graph_execute_point_scratch(
    task_graph, timestep, point,
    [&int8](output_ptr), output_size,
    input_ptrs, input_sizes, num_inputs,
    [&int8](scratch_ptr), scratch_size)

  c.free(input_ptrs)
  c.free(input_sizes)
  c.legion_accessor_array_1d_destroy(output_acc)
  c.legion_accessor_array_1d_destroy(input_acc)
  c.legion_accessor_array_1d_destroy(scratch_acc)
end

task f1(output : region(ispace(int1d), fs),
        input : region(ispace(int1d), fs),
        scratch : region(ispace(int1d), fs),
        time : region(ispace(int1d), times),
        -- FIXME: Can't use singleton regions in static control replication
        -- root : region(ispace(int1d), fs),
        -- primary : partition(disjoint, root, ispace(int1d)),
        primary : c.legion_logical_partition_t,
        task_graph : core.task_graph_t,
        timestep : int,
        point : int)
where
  reads writes(output.x),
  reads(input.y),
  reads writes(scratch.x),
  reads writes(time)
do
  if timestep == 0 then
    var current = c.legion_get_current_time_in_nanos()
    __forbid(__vectorize) -- FIXME: Breaks vectorizer
    for t in time do
      t.start min= current
    end
  end

  execute_point(
    __runtime(),
    __physical(output), __fields(output),
    __physical(input), __fields(input),
    __physical(scratch), __fields(scratch),
    primary,
    task_graph, timestep, point)

  if timestep == task_graph.timesteps - 1 then
    var current = c.legion_get_current_time_in_nanos()
    __forbid(__vectorize) -- FIXME: Breaks vectorizer
    for t in time do
      t.stop max= current
    end
  end
end

task f2(output : region(ispace(int1d), fs),
        input : region(ispace(int1d), fs),
        scratch : region(ispace(int1d), fs),
        time : region(ispace(int1d), times),
        -- FIXME: Can't use singleton regions in static control replication
        -- root : region(ispace(int1d), fs),
        -- primary : partition(disjoint, root, ispace(int1d)),
        primary : c.legion_logical_partition_t,
        task_graph : core.task_graph_t,
        timestep : int,
        point : int)
where
  reads writes(output.y),
  reads(input.x),
  reads writes(scratch.x),
  reads writes(time)
do
  if timestep == 0 then
    var current = c.legion_get_current_time_in_nanos()
    __forbid(__vectorize) -- FIXME: Breaks vectorizer
    for t in time do
      t.start min= current
    end
  end

  execute_point(
    __runtime(),
    __physical(output), __fields(output),
    __physical(input), __fields(input),
    __physical(scratch), __fields(scratch),
    primary,
    task_graph, timestep, point)

  if timestep == task_graph.timesteps - 1 then
    var current = c.legion_get_current_time_in_nanos()
    __forbid(__vectorize) -- FIXME: Breaks vectorizer
    for t in time do
      t.stop max= current
    end
  end
end


task main()
  var args = c.legion_runtime_get_input_args()
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
  var scratch_bytes = task_graph.scratch_bytes_per_task

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

  var raw_primary = __raw(primary)

  regentlib.assert(max_timesteps % 2 == 0, "must run even number of timesteps")

  __demand(__spmd, __trace)
  for timestep = 0, max_timesteps, 2 do
    for point = 0, max_width do
      f1(primary[point], secondary[point], pscratch[point], ptime[point],
         -- FIXME: Can't use singleton regions in static control replication
         -- output, primary,
         raw_primary,
         task_graph, timestep, point)
    end

    for point = 0, max_width do
      f2(primary[point], secondary[point], pscratch[point], ptime[point],
         -- FIXME: Can't use singleton regions in static control replication
         -- output, primary,
         raw_primary,
         task_graph, timestep+1, point)
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
  local link_flags = terralib.newlist({"-Wl,-rpath,$ORIGIN", "-L" .. core_dir, "-lcore"})

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
