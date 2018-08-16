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

local c = terralib.includec("stdio.h")
local d = terralib.includec("stdlib.h")
local t = terralib.includec("time.h")
local z = terralib.includec("core_c.h")
terralib.linklibrary("../core/libcore.so")

fspace fs {
  x : double,
  y : double,
}

task init(primary : region(ispace(int1d), fs))
where writes(primary.{x, y}) do
  for i in primary do
    primary[i].x = d.drand48()
    primary[i].y = d.drand48()
  end
end

task f1(primary : region(ispace(int1d), fs), secondary : region(ispace(int1d), fs), task_graph : z.task_graph_t)
where reads writes(primary.{x}), reads(primary.{y}, secondary.{y}) do
  for i in primary do
    primary[i].x = secondary[i].y + 1
    --primary[i].y += 1
  end

  z.kernel_execute(task_graph.kernel)
end

task f2(primary : region(ispace(int1d), fs), secondary : region(ispace(int1d), fs), task_graph : z.task_graph_t)
where reads writes(primary.{y}), reads(primary.{x}, secondary.{x}) do
  for i in primary do
    --primary[i].x += 1
    primary[i].y = secondary[i].x + 1
  end

  z.kernel_execute(task_graph.kernel)
end

--task print(primary : region(ispace(int1d), fs))
--where reads(primary.{x, y}) do
--  for i in primary do
--    c.printf("x %f\n", primary[i].x)
--    c.printf("y %f\n", primary[i].y)
--  end
--end


task main()
  var args = regentlib.c.legion_runtime_get_input_args()
  var app = z.app_create(args.argc, args.argv)
  z.app_display(app)
  var task_graphs = z.app_task_graphs(app)
  var task_graph = z.task_graph_list_task_graph(task_graphs, 0)
  --var start_time = t.clock()
  var max_timesteps = task_graph.timesteps
  var num_tasks = task_graph.max_width
  var output_per_task = task_graph.output_bytes_per_task

  var r1 = region(ispace(int1d, num_tasks, 0), rect1d) 
  var p = partition(equal, r1, ispace(int1d, num_tasks))
  
  -- lays all the dependencies out consecutively, 3*num_tasks-2 of them for simple pattern
  for i = 0, num_tasks do
        var s = max(3*i - 1, 0)
        var e = min(3*i - 1 +3, 3*num_tasks -2) - 1
        r1[i] = rect1d{s,e}
  end

  var r2 = region(ispace(int1d, 3*num_tasks-2, 0), rect1d)
  var q = image(r2, p, r1)

  var r3 = region(ispace(int1d, num_tasks*output_per_task, 0), fs)
  var primary = partition(equal, r3, ispace(int1d, num_tasks))
  -- 
  for i = 0, 3*num_tasks-2 do
        var tasks = (i+1)/3
        var dep = (i+1) - 3*tasks
        r2[i] = primary[tasks + dep - 1].bounds
  end

  var secondary = image(r3, q, r2)

  __demand(__parallel)
  for i = 0, num_tasks do
    init(primary[i])
  end

  --__demand(__parallel)
  --for i = 0, num_tasks do
    --print(primary[i])
  --end

  var start_time : uint64 = 0
  var end_time : uint64 = 0
  for rep = 0, 2 do
    if rep == 1 then
      __fence(__execution, __block)
      start_time = regentlib.c.legion_get_current_time_in_nanos()
    end

    __demand(__spmd, __trace)
    for i = 0, max_timesteps, 2 do
      for j = 0, num_tasks do
          f1(primary[j], secondary[j], task_graph)
        end

        for j = 0, num_tasks do
          f2(primary[j], secondary[j], task_graph)
        end
    end

    if rep == 1 then
      __fence(__execution, __block)
      end_time = regentlib.c.legion_get_current_time_in_nanos()
    end
  end

  z.app_report_timing(app, double(end_time - start_time)/1e9)

  --__demand(__parallel)
  --for i = 0, num_tasks do
    --print(primary[i])
  --end

  --__demand(__parallel)
  --for i = 0, num_tasks do
    --print(secondary[i])
  --end

  --var end_time = t.clock()
  --c.printf("%f", end_time - start_time)
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
  regentlib.start(main)
end
