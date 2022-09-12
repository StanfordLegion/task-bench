-- Copyright 2020 Stanford University
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

do
  local root_dir = arg[0]:match(".*/") or "./"

  local include_path = ""
  local include_dirs = terralib.newlist()
  include_dirs:insert("-I")
  include_dirs:insert(root_dir)
  for path in string.gmatch(os.getenv("INCLUDE_PATH"), "[^;]+") do
    include_path = include_path .. " -I " .. path
    include_dirs:insert("-I")
    include_dirs:insert(path)
  end

  local mapper_cc = root_dir .. "mapper.cc"
  if os.getenv('OBJNAME') then
    local out_dir = os.getenv('OBJNAME'):match('.*/') or './'
    mapper_so = out_dir .. "libmapper.so"
  elseif os.getenv('SAVEOBJ') == '1' then
    mapper_so = root_dir .. "libmapper.so"
  else
    mapper_so = os.tmpname() .. ".so" -- root_dir .. "mapper.so"
  end
  local cxx = os.getenv('CXX') or 'c++'
  local max_dim = os.getenv('MAX_DIM') or '3'

  local cxx_flags = os.getenv('CC_FLAGS') or ''
  cxx_flags = cxx_flags .. " -O2 -Wall -Werror -DLEGION_MAX_DIM=" .. max_dim .. " -DREALM_MAX_DIM=" .. max_dim
  if os.execute('test "$(uname)" = Darwin') == 0 then
    cxx_flags =
      (cxx_flags ..
         " -dynamiclib -single_module -undefined dynamic_lookup -fPIC")
  else
    cxx_flags = cxx_flags .. " -shared -fPIC"
  end

  local cmd = (cxx .. " " .. cxx_flags .. include_path .. " " ..
                 mapper_cc .. " -o " .. mapper_so)
  if os.execute(cmd) ~= 0 then
    print("Error: failed to compile " .. mapper_cc)
    assert(false)
  end
  terralib.linklibrary(mapper_so)
  cmapper = terralib.includec("mapper.h", include_dirs)
end

local MAX_GRAPHS = 1
local MAX_DSETS = 3
local MAX_INPUTS = 5

local fields = terralib.newlist({"x", "y"})
local fs = terralib.types.newstruct()
for _, field in ipairs(fields) do
  fs.entries:insert({field, int8})
end

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
                    inputs : &c.legion_physical_region_t,
                    input_fields : &c.legion_field_id_t,
                    n_inputs : int,
                    scratch : c.legion_physical_region_t[1],
                    scratch_fields : c.legion_field_id_t[1],
                    task_graph : core.task_graph_t,
                    timestep : int,
                    point : int)
  var dset = core.task_graph_dependence_set_at_timestep(task_graph, timestep)
  var intervals = core.task_graph_dependencies(task_graph, dset, point)

  var num_inputs = 0
  for i = 0, core.interval_list_num_intervals(intervals) do
    var interval = core.interval_list_interval(intervals, i)
    num_inputs = num_inputs + interval.["end"] - interval.start + 1
  end
  regentlib.assert(num_inputs <= n_inputs, "num_inputs > n_inputs")
  core.interval_list_destroy(intervals)

  var output_acc = c.legion_physical_region_get_field_accessor_array_1d(
    output[0], output_fields[0])
  regentlib.assert(n_inputs <= MAX_INPUTS, ["n_inputs > " .. MAX_INPUTS])
  var input_accs : c.legion_accessor_array_1d_t[MAX_INPUTS]
  for i = 0, num_inputs do
    input_accs[i] = c.legion_physical_region_get_field_accessor_array_1d(
      inputs[i], input_fields[i])
  end
  var scratch_acc = c.legion_physical_region_get_field_accessor_array_1d(
    scratch[0], scratch_fields[0])

  var output_r = c.legion_physical_region_get_logical_region(output[0])
  var output_is = output_r.index_space
  var output_ptr, output_size = get_base_and_size(runtime, output_acc, output_is)

  var scratch_r = c.legion_physical_region_get_logical_region(scratch[0])
  var scratch_is = scratch_r.index_space
  var scratch_ptr, scratch_size = get_base_and_size(runtime, scratch_acc, scratch_is)

  var input_ptrs : (&int8)[MAX_INPUTS]
  var input_sizes : c.size_t[MAX_INPUTS]

  for i = 0, num_inputs do
    var is = c.legion_physical_region_get_logical_region(inputs[i]).index_space
    var base, size = get_base_and_size(runtime, input_accs[i], is)
    input_ptrs[i] = [&int8](base)
    input_sizes[i] = size
  end

  core.task_graph_execute_point_scratch(
    task_graph, timestep, point,
    [&int8](output_ptr), output_size,
    input_ptrs, input_sizes, num_inputs,
    [&int8](scratch_ptr), scratch_size)

  c.legion_accessor_array_1d_destroy(output_acc)
  for i = 0, num_inputs do
    c.legion_accessor_array_1d_destroy(input_accs[i])
  end
  c.legion_accessor_array_1d_destroy(scratch_acc)
end

terra prepare_scratch(runtime : c.legion_runtime_t,
                      scratch : c.legion_physical_region_t[1],
                      scratch_fields : c.legion_field_id_t[1])
  var scratch_acc = c.legion_physical_region_get_field_accessor_array_1d(
    scratch[0], scratch_fields[0])

  var scratch_r = c.legion_physical_region_get_logical_region(scratch[0])
  var scratch_is = scratch_r.index_space
  var scratch_ptr, scratch_size = get_base_and_size(runtime, scratch_acc, scratch_is)

  core.task_graph_prepare_scratch([&int8](scratch_ptr), scratch_size)

  c.legion_accessor_array_1d_destroy(scratch_acc)
end

local point_task = terralib.memoize(function(n_inputs, field_idx)
  local input_field = fields[(field_idx - 1 + #fields - 1) % #fields + 1]
  local output_field = fields[field_idx]
  assert(input_field and output_field)

  local inputs = terralib.newlist()
  local input_privileges = terralib.newlist()
  local input_pr_array = regentlib.newsymbol(c.legion_physical_region_t[n_inputs], "input_pr_array")
  local input_fid_array = regentlib.newsymbol(c.legion_field_id_t[n_inputs], "input_fid_array")
  local make_input_arrays = terralib.newlist()
  make_input_arrays:insert(
    rquote
      var [input_pr_array]
      var [input_fid_array]
    end)
  for idx = 1, n_inputs do
    local input = regentlib.newsymbol(region(ispace(int1d), fs), "input_" .. idx)
    inputs:insert(input)
    input_privileges:insert(regentlib.privilege(regentlib.reads, input, input_field))
    make_input_arrays:insert(
      rquote
        [input_pr_array][ [idx-1] ] = __physical([input].{[input_field]})[0];
        [input_fid_array][ [idx-1] ] = __fields([input].{[input_field]})[0]
      end)
  end

  local __demand(__leaf) task t(output : region(ispace(int1d), fs),
               [inputs],
               scratch : region(ispace(int1d), fs),
               time : region(ispace(int1d), times),
               task_graph : core.task_graph_t,
               timestep : int,
               point : int,
               save_ts : bool)
  where
    reads writes(output.[output_field]),
    [input_privileges],
    reads writes(scratch.x),
    reads writes(time)
  do
    -- Easier to no-op out the task than to fix the main loop to
    -- handle timesteps % period != 0.
    if timestep >= task_graph.timesteps then
      return
    end

    if timestep == 0 and save_ts then
      var current = c.legion_get_current_time_in_nanos()
      __forbid(__vectorize) -- FIXME: Breaks vectorizer
      for t in time do
        t.start = current
      end
    end

    [make_input_arrays]

    execute_point(
      __runtime(),
      __physical(output.{[output_field]}), __fields(output.{[output_field]}),
      [input_pr_array], [input_fid_array], [n_inputs],
      __physical(scratch.x), __fields(scratch.x),
      task_graph, timestep, point)

    if timestep == task_graph.timesteps - 1 and save_ts then
      var current = c.legion_get_current_time_in_nanos()
      __forbid(__vectorize) -- FIXME: Breaks vectorizer
      for t in time do
        t.stop = current
      end
    end
  end
  t:set_name("point_task_n_inputs_" .. n_inputs .. "_field_idx_" .. field_idx)
  return t
end)

__demand(__leaf)
task init_scratch(scratch : region(ispace(int1d), fs))
where reads writes(scratch.x) do
  prepare_scratch(__runtime(), __physical(scratch.x), __fields(scratch.x))
end

__demand(__leaf)
task compute_start_time(time : region(ispace(int1d), times))
where reads(time.start) do
  var start_time = [uint64:max()]
  for t in time do
    start_time min= t.start
  end
  return start_time
end

__demand(__leaf)
task compute_stop_time(time : region(ispace(int1d), times))
where reads(time.stop) do
  var stop_time = [uint64:min()]
  for t in time do
    stop_time max= t.stop
  end
  return stop_time
end

terra domain_point(point : c.coord_t)
  return c.legion_domain_point_from_point_1d(
    c.legion_point_1d_t { x = arrayof(c.coord_t, point) })
end

terra make_secondary_partition(graph : core.task_graph_t, dset : int, input : int,
                               primary : c.legion_logical_partition_t,
                               runtime : c.legion_runtime_t,
                               context : c.legion_context_t)
  var r = c.legion_logical_partition_get_parent_logical_region(runtime, primary)
  var is = r.index_space
  var cs = c.legion_index_partition_get_color_space(runtime, primary.index_partition)
  var ip = c.legion_index_partition_create_pending_partition(runtime, context, is, cs, c.ALIASED_KIND, -1 --[[ AUTO_GENERATE_ID ]])
  for point = 0, graph.max_width do
    var dep = -1
    var dep_idx = 0
    var intervals = core.task_graph_dependencies(graph, dset, point)
    for i = 0, core.interval_list_num_intervals(intervals) do
      var interval = core.interval_list_interval(intervals, i)
      for d = interval.start, interval.["end"] + 1 do
        if dep_idx == input then
          dep = d
          break
        end
        dep_idx = dep_idx + 1
      end
      if dep >= 0 then
        break
      end
    end
    core.interval_list_destroy(intervals)

    if dep >= 0 then
      var dep_is = c.legion_index_partition_get_index_subspace_domain_point(
        runtime, primary.index_partition, domain_point(dep))
      c.legion_index_partition_create_index_space_union_spaces(
        runtime, context, ip,
        domain_point(point),
        &dep_is, 1)
    else
      c.legion_index_partition_create_index_space_union_spaces(
        runtime, context, ip,
        domain_point(point),
        nil, 0)
    end
  end
  return c.legion_logical_partition_create(runtime, r, ip)
end

function gcd(a, b)
  while b ~= 0 do
    local old_b = b
    b = a % b
    a = old_b
  end
  return a
end

function lcm(a, b)
  return a * b / gcd(a, b)
end

local work_task = terralib.memoize(function(n_graphs, n_dsets, max_inputs)
  local function generate_graphs(graph_list)
    local graphs = {}
    local actions = terralib.newlist()
    for graph_idx = 1, n_graphs do
      graphs[graph_idx] = regentlib.newsymbol("graph_" .. graph_idx)
      actions:insert(rquote
        var [graphs[graph_idx]] = core.task_graph_list_task_graph(graph_list, [graph_idx - 1])
      end)
    end
    return graphs, actions
  end

  local function generate_output_regions(graphs)
    local outputs = {}
    local actions = terralib.newlist()
    for graph_idx = 1, n_graphs do
      local graph = graphs[graph_idx]
      outputs[graph_idx] = regentlib.newsymbol("output_graph_" .. graph_idx)
      actions:insert(rquote
        var [outputs[graph_idx]] = region(ispace(int1d, graph.max_width*graph.output_bytes_per_task), fs)
        fill([outputs[graph_idx]].[fields], 0)
      end)
    end
    return outputs, actions
  end

  local function generate_primary_partitions(graphs, outputs)
    local primary_partitions = {}
    local actions = terralib.newlist()
    for graph_idx = 1, n_graphs do
      local graph = graphs[graph_idx]
      primary_partitions[graph_idx] = regentlib.newsymbol("primary_partition_graph_" .. graph_idx)
      actions:insert(
        rquote
          var [primary_partitions[graph_idx]] = partition(equal, [outputs[graph_idx]], ispace(int1d, graph.max_width))
        end)
    end
    return primary_partitions, actions
  end

  local function generate_secondary_partitions(graphs, outputs, primary_partitions)
    local secondary_partitions = {}
    local actions = terralib.newlist()
    for graph_idx = 1, n_graphs do
      local graph = graphs[graph_idx]
      secondary_partitions[graph_idx] = {}
      for dset = 1, n_dsets do
        secondary_partitions[graph_idx][dset] = {}
        for input = 1, max_inputs do
          secondary_partitions[graph_idx][dset][input] = regentlib.newsymbol("secondary_partition_graph_" .. graph_idx .. "_dset_" .. dset .. "_input_" .. input)
          actions:insert(
            rquote
              var [secondary_partitions[graph_idx][dset][input]] = __import_partition(
                  aliased,
                  [outputs[graph_idx]],
                  ispace(int1d, graph.max_width),
                  make_secondary_partition(
                    graph, [dset-1], [input-1],
                    __raw([primary_partitions[graph_idx]]),
                    __runtime(), __context()))
            end)
        end
      end
    end
    return secondary_partitions, actions
  end

  local function generate_scratch_regions(graphs)
    local scratch = {}
    local pscratch = {}
    local actions = terralib.newlist()
    for graph_idx = 1, n_graphs do
      local graph = graphs[graph_idx]
      scratch[graph_idx] = regentlib.newsymbol("scratch_graph_" .. graph_idx)
      pscratch[graph_idx] = regentlib.newsymbol("pscratch_graph_" .. graph_idx)
      actions:insert(rquote
        var [scratch[graph_idx]] = region(ispace(int1d, graph.max_width*graph.scratch_bytes_per_task), fs)
        var [pscratch[graph_idx]] = partition(equal, [scratch[graph_idx]], ispace(int1d, graph.max_width))
        fill([scratch[graph_idx]].[fields], 0)
      end)
    end
    return scratch, pscratch, actions
  end

  local function generate_timing_regions(graphs)
    local timing = {}
    local ptiming = {}
    local actions = terralib.newlist()
    for graph_idx = 1, n_graphs do
      local graph = graphs[graph_idx]
      timing[graph_idx] = regentlib.newsymbol("timing_graph_" .. graph_idx)
      ptiming[graph_idx] = regentlib.newsymbol("ptiming_graph_" .. graph_idx)
      actions:insert(rquote
        var [timing[graph_idx]] = region(ispace(int1d, graph.max_width), times)
        var [ptiming[graph_idx]] = partition(equal, [timing[graph_idx]], ispace(int1d, graph.max_width))
        fill([timing[graph_idx]].start, [uint64:max()])
        fill([timing[graph_idx]].stop, [uint64:min()])
      end)
    end
    return timing, ptiming, actions
  end

  local function generate_main_loop(graphs, primary_partitions, secondary_partitions, pscratch, ptiming)
    local actions = terralib.newlist()
    for graph_idx = 1, n_graphs do
      local graph = graphs[graph_idx]

      local period = lcm(#fields, n_dsets)

      local max_timesteps = regentlib.newsymbol("max_timesteps")
      local max_width = regentlib.newsymbol("max_width")
      local timestep = regentlib.newsymbol("timestep")
      local trial = regentlib.newsymbol("trial")

      local body_actions = terralib.newlist()
      for step = 0, period - 1 do
        local inputs = terralib.newlist()
        for input = 1, max_inputs do
          inputs:insert(secondary_partitions[graph_idx][step % n_dsets + 1][input])
        end

        body_actions:insert(rquote
          for point = 0, max_width do
            [point_task(max_inputs, step % #fields + 1)](
              [primary_partitions[graph_idx]][point],
              [inputs:map(function(input) return rexpr input[point] end end)],
              [pscratch[graph_idx]][point],
              [ptiming[graph_idx]][point],
              graph, timestep + step, point, trial == 1)
          end
        end)
      end

      actions:insert(rquote
        regentlib.assert(period % core.task_graph_timestep_period(graph) == 0, "precomputed period is not divisible by task graph period")
        var [max_timesteps] = graph.timesteps
        var [max_width] = graph.max_width
        __demand(__spmd)
        do
          for point = 0, max_width do
            init_scratch([pscratch[graph_idx]][point])
          end

          for [trial] = 0, 3 do
            __demand(__trace)
            for [timestep] = 0, max_timesteps + period - 1, period do
              [body_actions]
            end
          end
        end
      end)
    end
    return actions
  end

  local function generate_report(app, graphs, timing)
    local start_time = regentlib.newsymbol("start_time")
    local stop_time = regentlib.newsymbol("stop_time")
    local actions = terralib.newlist()
    actions:insert(rquote
      var [start_time] = [uint64:max()]
      var [stop_time] = [uint64:min()]
    end)
    for graph_idx = 1, n_graphs do
      local graph = graphs[graph_idx]
      actions:insert(rquote
        start_time min= compute_start_time([timing[graph_idx]])
        stop_time max= compute_stop_time([timing[graph_idx]])
      end)
    end
    actions:insert(rquote
      core.app_report_timing(app, double(stop_time - start_time)/1e9)
    end)
    return actions
  end

  local app = regentlib.newsymbol("app")
  local graph_list = regentlib.newsymbol("graph_list")
  local graphs, graph_actions = generate_graphs(graph_list)
  local outputs, output_actions = generate_output_regions(graphs)
  local primary_partitions, primary_actions = generate_primary_partitions(graphs, outputs)
  local secondary_partitions, secondary_actions = generate_secondary_partitions(graphs, outputs, primary_partitions)
  local scratch, pscratch, scratch_actions = generate_scratch_regions(graphs)
  local timing, ptiming, timing_actions = generate_timing_regions(graphs)
  local main_loop_actions = generate_main_loop(graphs, primary_partitions, secondary_partitions, pscratch, ptiming)
  local report_actions = generate_report(app, graphs, timing)

  local __demand(__inner) task w()
    var args = c.legion_runtime_get_input_args()
    var [app] = core.app_create(args.argc, args.argv)
    core.app_display(app)

    var [graph_list] = core.app_task_graphs(app);
    [graph_actions];
    [output_actions];
    [primary_actions];
    [secondary_actions];
    [scratch_actions];
    [timing_actions];
    [main_loop_actions];
    [report_actions];


--[[
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

    regentlib.assert(max_timesteps % 2 == 0, "must run even number of timesteps")

    __demand(__spmd, __trace)
    for timestep = 0, max_timesteps, 2 do
      for point = 0, max_width do
        f1(primary[point], secondary[point], pscratch[point], ptime[point],
           task_graph, timestep, point)
      end

      for point = 0, max_width do
        f2(primary[point], secondary[point], pscratch[point], ptime[point],
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
]]
  end
  w:set_name("work_task_max_inputs_" .. max_inputs)
  return w
end)

function dispatch_work_task(n_graphs, n_dsets, max_inputs)
  local function helper(static_n_graphs, static_n_dsets)
    local actions = rquote
      regentlib.assert(false, "max_inputs > MAX_INPUTS")
    end

    for static_max_inputs = MAX_INPUTS, 0, -1 do
      actions = rquote
        if [max_inputs] == [static_max_inputs] then
          [work_task(static_n_graphs, static_n_dsets, static_max_inputs)]()
        else
          [actions]
        end
      end
    end
    return actions
  end

  local function helper2(static_n_graphs)
    local actions = rquote
      regentlib.assert(false, "n_dsets > MAX_DSETS")
    end

    for static_n_dsets = MAX_DSETS, 1, -1 do
      actions = rquote
        if [n_dsets] == [static_n_dsets] then
          [helper(static_n_graphs, static_n_dsets)]
        else
          [actions]
        end
      end
    end
    return actions
  end

  local actions = rquote
    regentlib.assert(false, "n_graphs > MAX_GRAPHS")
  end

  for static_n_graphs = MAX_GRAPHS, 1, -1 do
    actions = rquote
      if [n_graphs] == [static_n_graphs] then
        [helper2(static_n_graphs)]
      else
        [actions]
      end
    end
  end
  return actions
end

__demand(__inner)
task main()
  var args = c.legion_runtime_get_input_args()
  var app = core.app_create(args.argc, args.argv)

  var graphs = core.app_task_graphs(app)

  var n_graphs = core.task_graph_list_num_task_graphs(graphs)
  var n_dsets = -1

  var max_inputs = 0

  for graph_idx = 0, n_graphs do
    var graph = core.task_graph_list_task_graph(graphs, graph_idx)
    var graph_dsets = core.task_graph_max_dependence_sets(graph)

    if n_dsets < 0 then
      n_dsets = graph_dsets
    end
    regentlib.assert(n_dsets == graph_dsets, "can only handle graphs with the same number of dsets for now")

    var max_width = graph.max_width
    for dset = 0, graph_dsets do
      for point = 0, max_width do
        var intervals = core.task_graph_dependencies(graph, dset, point)
        var n_inputs = 0
        for i = 0, core.interval_list_num_intervals(intervals) do
          var interval = core.interval_list_interval(intervals, i)
          n_inputs += interval.["end"] - interval.start + 1
        end
        max_inputs max= n_inputs
        core.interval_list_destroy(intervals)
      end
    end
  end

  [dispatch_work_task(n_graphs, n_dsets, max_inputs)]
end

if os.getenv('SAVEOBJ') == '1' then
  local root_dir = arg[0]:match(".*/") or "./"
  local core_dir = root_dir .. "../core/"
  local out_dir = (os.getenv('OBJNAME') and os.getenv('OBJNAME'):match('.*/')) or root_dir
  local link_flags = terralib.newlist({"-Wl,-rpath,$ORIGIN", "-L" .. core_dir, "-lcore", "-L" .. out_dir, "-lmapper"})

  if os.getenv('STANDALONE') == '1' then
    os.execute('cp ' .. core_dir .. 'libcore.so ' .. out_dir)
    os.execute('cp ' .. os.getenv('LG_RT_DIR') .. '/../bindings/regent/libregent.so ' .. out_dir)
  end

  local exe = os.getenv('OBJNAME') or "main"
  regentlib.saveobj(main, exe, "executable", cmapper.register_mappers, link_flags)
else
  terralib.linklibrary("../core/libcore.so")
  regentlib.start(main, cmapper.register_mappers)
end
