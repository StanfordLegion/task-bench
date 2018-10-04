/* Copyright 2018 Stanford University
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

use Time;
use BlockDist;
config const quiet: bool = false;
var t: Timer;

extern {

  #include "core_c.h"

}

proc main(args: [] string) {
  var argc = args.numElements;
  var app = app_create(argc:int(32), convert_args_to_c_args(argc, args));
  var graph_list = app_task_graphs(app); // array of tasks grapsh 
  app_display(app);

  var n_graphs = task_graph_list_num_task_graphs(graph_list);
  var graphs: [0..n_graphs-1] task_graph_t;
  for i in 0..n_graphs-1 {
    graphs[i] = task_graph_list_task_graph(graph_list, i);
  }

  // For simplicity, we're going to allocate one giant domain for
  // task results and completion variables, so the domain has to be
  // the upper bound of all the tasks we'll need.
  var max_width: int(64) = 0;
  var max_timesteps: int(64) = 0;
  var max_output_bytes: int(64) = 0;
  for graph in graphs {
    max_width = max(max_width, graph.max_width: int(64));
    max_timesteps = max(max_timesteps, graph.timesteps: int(64));
    max_output_bytes = max(max_output_bytes, graph.output_bytes_per_task: int(64));
  }

  var task_result = make_task_result(n_graphs, max_width, max_output_bytes);
  var task_ready = make_task_atomics(n_graphs, max_width, max_timesteps);
  var task_used = make_task_atomics(n_graphs, max_width, max_timesteps);

  task_ready[.., .., ..].write(0);
  task_used[.., .., ..].write(0);

  // Run once for warmup.
  execute_task_graphs(graphs, task_result, task_ready, task_used);

  task_ready[.., .., ..].write(0);
  task_used[.., .., ..].write(0);

  t.start();
  execute_task_graphs(graphs, task_result, task_ready, task_used);
  t.stop();
  app_report_timing(app, t.elapsed());
}

proc make_task_result(n_graphs, max_width, max_output_bytes) {
  const space = {0..n_graphs-1, 0..max_width-1, 0..(max_output_bytes/8)-1};
  const locale_space = {0..0, 0..numLocales-1, 0..0};
  var targets: [locale_space] locale;
  forall i in 0..numLocales-1 {
    targets[0, i, 0] = Locales[i];
  }
  const D: domain(3) dmapped Block(boundingBox=space, targetLocales=targets) = space;
  var result: [D] int(64);
  return result;
}

proc make_task_atomics(n_graphs, max_width, max_timesteps) {
  const space = {0..n_graphs-1, 0..max_width-1, 0..max_timesteps-1};
  const locale_space = {0..0, 0..numLocales-1, 0..0};
  var targets: [locale_space] locale;
  forall i in 0..numLocales-1 {
    targets[0, i, 0] = Locales[i];
  }
  const D: domain(3) dmapped Block(boundingBox=space, targetLocales=targets) = space;
  var result: [D] atomic int(64);
  return result;
}

proc execute_task_graphs(graphs, task_result, task_ready, task_used) {
  coforall loc in Locales {
    on loc {
      coforall graph in graphs {
        const loc_graph = graph;
        execute_task_graph2(loc_graph, task_result, task_ready, task_used);
      }
    }
  }
}

proc execute_task_graph2(graph, task_result, task_ready, task_used) {
  const graph_index = graph.graph_index;

  // Figure out which set of points have been assigned to this locale.
  var first_point = here.id * graph.max_width / numLocales;
  var last_point = (here.id + 1) * graph.max_width / numLocales - 1;

  coforall point in first_point..last_point {
    // Preallocate memory for input and scratch.

    var n_dsets = task_graph_max_dependence_sets(graph):int(64);

    var max_deps = 0;
    for dset in 0..n_dsets-1 {
      var interval_list = task_graph_dependencies(graph, dset, point);
      var n_intervals = interval_list_num_intervals(interval_list);
      for i in 0..n_intervals-1 {
        var interval = interval_list_interval(interval_list, i);
        max_deps += interval.end - interval.start + 1;
      }
      interval_list_destroy(interval_list);
    }

    var output_bytes = graph.output_bytes_per_task:int(64);

    var inputs: [{0..max_deps-1, 0..(output_bytes/8)-1}] int(64);

    var scratch_bytes = graph.scratch_bytes_per_task;
    var scratch_ptr = c_malloc(int(8), scratch_bytes);

    // Initialize input_ptr and input_bytes... these don't need to
    // change because we can just set n_inputs dynamically.
    var input_ptr = c_malloc(c_ptr(int(64)), max_deps);
    var input_bytes = c_malloc(uint(64), max_deps);
    for dep in 0..max_deps-1 {
        input_ptr[dep] = c_ptrTo(inputs[dep, 0]);
        input_bytes[dep] = output_bytes:uint(64);
    }

    // Initialize output_ptr... this doesn't need to change because
    // we're just overwriting the same memory over and over.
    var output_ptr = c_ptrTo(task_result[graph_index, point, 0]);

    var timesteps = graph.timesteps:int(64);
    for timestep in 0..timesteps-1 {
      var offset = task_graph_offset_at_timestep(graph, timestep):int(64);
      var width = task_graph_width_at_timestep(graph, timestep):int(64);

      if (point < offset || point >= offset + width) {
        continue;
      }

      var last_offset = task_graph_offset_at_timestep(graph, timestep-1):int(64);
      var last_width = task_graph_width_at_timestep(graph, timestep-1):int(64);

      var next_offset = task_graph_offset_at_timestep(graph, timestep+1):int(64);
      var next_width = task_graph_width_at_timestep(graph, timestep+1):int(64);

      // Fetch inputs for this timestep.
      var n_inputs = 0;

      // RAW dependencies: copy data from last timestep.
      {
        var n_raw_deps = 0;
        var dset = task_graph_dependence_set_at_timestep(graph, timestep);
        var interval_list = task_graph_dependencies(graph, dset, point);
        var n_intervals = interval_list_num_intervals(interval_list);
        for i in 0..n_intervals-1 {
          var interval = interval_list_interval(interval_list, i);
          for dep in interval.start..interval.end {
            if (dep < last_offset || dep >= last_offset + last_width) {
              continue;
            }

            n_raw_deps += 1;
          }
        }

        task_ready[graph_index, point, timestep].waitFor(n_raw_deps);

        for i in 0..n_intervals-1 {
          var interval = interval_list_interval(interval_list, i);
          for dep in interval.start..interval.end {
            if (dep < last_offset || dep >= last_offset + last_width) {
              continue;
            }

            for offset in 0..(output_bytes/8)-1 {
              inputs[n_inputs, offset] = task_result[graph_index, dep, offset];
            }
            // serial {
            //   inputs[n_inputs, ..] = task_result[graph_index, dep, ..];
            // }

            task_used[graph_index, dep, timestep].add(1);

            n_inputs += 1;
          }
        }

        interval_list_destroy(interval_list);
      }

      // WAR dependencies: avoid copying over data that is still being copied.
      {
        var n_war_deps = 0;
        if (point >= last_offset && point < last_offset + last_width) {
          var dset = task_graph_dependence_set_at_timestep(graph, timestep);
          var interval_list = task_graph_reverse_dependencies(graph, dset, point);
          var n_intervals = interval_list_num_intervals(interval_list);
          for i in 0..n_intervals-1 {
            var interval = interval_list_interval(interval_list, i);
            for dep in interval.start..interval.end {
              if (dep < offset || dep >= offset + width) {
                continue;
              }

              n_war_deps += 1;
            }
          }
          interval_list_destroy(interval_list);
        }

        task_used[graph_index, point, timestep].waitFor(n_war_deps);
      }

      // Execute task.
      task_graph_execute_point_scratch_nonconst(
        graph, timestep, point,
        output_ptr, output_bytes: uint(64),
        input_ptr, input_bytes, n_inputs: uint(64),
        scratch_ptr, scratch_bytes: uint(64));

      // Mark dependencies as ready.
      if (timestep + 1 < timesteps) { // FIXME: Wouldn't need this check if offset/width took into account max timesteps.
        var dset = task_graph_dependence_set_at_timestep(graph, timestep + 1);
        var interval_list = task_graph_reverse_dependencies(graph, dset, point);
        var n_intervals = interval_list_num_intervals(interval_list);
        for i in 0..n_intervals-1 {
          var interval = interval_list_interval(interval_list, i);
          for dep in interval.start..interval.end {
            if (dep < next_offset || dep >= next_offset + next_width) {
              continue;
            }

            task_ready[graph_index, dep, timestep+1].add(1);
          }
        }
        interval_list_destroy(interval_list);
      }
    }

    c_free(scratch_ptr);
  }
}

proc convert_args_to_c_args(argc, args) {
  var result = c_malloc(c_ptr(int(8)), argc + 1);
 	  // not efficent but needed to convert args
  for i in 0..argc - 1 {
 		  // make c memeory for each word
    var curr = c_malloc(int(8), args[i].length + 1);
 		  // loop over each character to add it to a string 
    var j = 0;
    for chr in args[i] {
      curr[j] = ascii(chr):int(8);
      j += 1;
    }
    assert(j == args[i].length);
    curr[j] = 0;
    result[i] = curr;
  }
  result[argc] = nil;
  return result;
}
