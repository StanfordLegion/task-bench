import x10.io.Console;
import x10.array.*;
import x10.util.*;
import x10.util.concurrent.*;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;

@NativeCPPInclude("core.h")

public class TaskBench {

  static class PlaceInstance {

    // graph -> local point -> bytes
    public val task_result:Rail[Rail[Rail[UByte]]];

    // graph -> local point -> timestep -> long
    public val task_ready:Rail[Rail[Rail[Long]]];
    public val task_ready_lock:Rail[Rail[Rail[Monitor]]];

    // graph -> local point -> timestep -> long
    public val task_used:Rail[Rail[Rail[Long]]];
    public val task_used_lock:Rail[Rail[Rail[Monitor]]];

    protected def this(max_width:Rail[Long], output_bytes:Rail[Long], timesteps:Rail[Long]) {
      this.task_result = new Rail[Rail[Rail[UByte]]](max_width.size);
      this.task_ready = new Rail[Rail[Rail[Long]]](max_width.size);
      this.task_ready_lock = new Rail[Rail[Rail[Monitor]]](max_width.size);
      this.task_used = new Rail[Rail[Rail[Long]]](max_width.size);
      this.task_used_lock = new Rail[Rail[Rail[Monitor]]](max_width.size);

      for (graph_index in 0..(max_width.size-1)) {
        val width = max_width(graph_index);
        val result = output_bytes(graph_index);
        val steps = timesteps(graph_index);

        val first_point = here.id * width / Place.places().size;
        val last_point = (here.id + 1) * width / Place.places().size - 1;
        val n_points = last_point - first_point + 1;

        this.task_result(graph_index) = new Rail[Rail[UByte]](n_points, (i:Long) => new Rail[UByte](result, 0uy));
        this.task_ready(graph_index) = new Rail[Rail[Long]](n_points, (i:Long) => new Rail[Long](steps, 0));
        this.task_ready_lock(graph_index) = new Rail[Rail[Monitor]](n_points, (i:Long) => new Rail[Monitor](steps, (j:Long) => new Monitor()));
        this.task_used(graph_index) = new Rail[Rail[Long]](n_points, (i:Long) => new Rail[Long](steps, 0));
        this.task_used_lock(graph_index) = new Rail[Rail[Monitor]](n_points, (i:Long) => new Rail[Monitor](steps, (j:Long) => new Monitor()));
      }
    }

  }

  // graph -> point -> dset -> deps
  public val deps:Rail[Rail[Rail[Rail[Long]]]];

  // graph -> point -> dset -> reverse_deps
  public val rev_deps:Rail[Rail[Rail[Rail[Long]]]];

  // graph -> max_width
  public val max_width:Rail[Long];

  // graph -> output_bytes
  public val output_bytes:Rail[Long];

  // graph -> scratch_bytes
  public val scratch_bytes:Rail[Long];

  // graph -> bytes
  public val task_graphs:Rail[Rail[UByte]];

  // graph -> timestep -> width
  public val width_at_timestep:Rail[Rail[Long]];

  // graph -> timestep -> offset
  public val offset_at_timestep:Rail[Rail[Long]];

  // graph -> timestep -> dset
  public val dset_at_timestep:Rail[Rail[Long]];

  // graph -> timesteps
  public val timesteps:Rail[Long];

  public val plh:PlaceLocalHandle[PlaceInstance];

  public def this(deps:Rail[Rail[Rail[Rail[Long]]]],
                  rev_deps:Rail[Rail[Rail[Rail[Long]]]],
                  max_width:Rail[Long],
                  output_bytes:Rail[Long],
                  scratch_bytes:Rail[Long],
                  task_graphs:Rail[Rail[UByte]],
                  width_at_timestep:Rail[Rail[Long]],
                  offset_at_timestep:Rail[Rail[Long]],
                  dset_at_timestep:Rail[Rail[Long]],
                  timesteps:Rail[Long]) {

    this.deps = deps;
    this.rev_deps = rev_deps;
    this.max_width = max_width;
    this.output_bytes = output_bytes;
    this.scratch_bytes = scratch_bytes;
    this.task_graphs = task_graphs;
    this.width_at_timestep = width_at_timestep;
    this.offset_at_timestep = offset_at_timestep;
    this.dset_at_timestep = dset_at_timestep;
    this.timesteps = timesteps;

    this.plh = PlaceLocalHandle.make[PlaceInstance](Place.places(), () => {
      new PlaceInstance(max_width, output_bytes, timesteps)
    });
  }

  private def executePoint(task_graph:Rail[UByte], timestep:Long, point:Long, output:Rail[UByte], inputs:Rail[Rail[UByte]], n_inputs:Long, scratch:Rail[UByte]) {
    @Native("c++", "
      assert(task_graph->FMGL(size) == sizeof(TaskGraph));
      TaskGraph tg = *(TaskGraph *)task_graph->raw;

      assert(output->FMGL(size) == tg.output_bytes_per_task);
      char *output_ptr = (char *)output->raw;

      char **input_ptr = new char *[n_inputs];
      size_t *input_bytes = new size_t[n_inputs];
      assert(n_inputs <= inputs->FMGL(size));
      for (x10_long i = 0; i < n_inputs; ++i) {
        assert((*inputs)[i]->FMGL(size) == tg.output_bytes_per_task);
        input_ptr[i] = (char *)((*inputs)[i]->raw);
        input_bytes[i] = tg.output_bytes_per_task;
      }

      assert(scratch->FMGL(size) == tg.scratch_bytes_per_task);
      char *scratch_ptr = (char *)scratch->raw;

      tg.execute_point(timestep, point,
                       output_ptr, tg.output_bytes_per_task,
                       (const char **)input_ptr, input_bytes, n_inputs,
                       scratch_ptr, tg.scratch_bytes_per_task);

      delete [] input_ptr;
      delete [] input_bytes;
    ") {}
  }

  private def executeGraph(graph_index:Long) {
    val local_plh = plh; // Make local so that it's not copied by at statements.

    val pi = local_plh();

    val owners = new HashMap[Long, Place]();
    val point_local_indices = new HashMap[Long, Long]();
    for (p in Place.places()) {
      val first_point = p.id * max_width(graph_index) / Place.places().size;
      val last_point = (p.id + 1) * max_width(graph_index) / Place.places().size - 1;

      for (point in first_point..last_point) {
        owners(point) = p;
        point_local_indices(point) = point - first_point;
      }
    }

    val first_point = here.id * max_width(graph_index) / Place.places().size;
    val last_point = (here.id + 1) * max_width(graph_index) / Place.places().size - 1;
    for (point in first_point..last_point) {
      async {
        val point_index = point - first_point;

        var max_deps:Long = 0;
        for (dset_deps in deps(graph_index)(point)) {
          max_deps = Math.max(max_deps, dset_deps.size);
        }

        val inputs = new Rail[GlobalRail[UByte]](
          max_deps,
          (i:Long) => new GlobalRail[UByte](new Rail[UByte](output_bytes(graph_index))));
        val input_rails = new Rail[Rail[UByte]](max_deps, (i:Long) => inputs(i).rail());

        val output = pi.task_result(graph_index)(point_index);

        val scratch = new Rail[UByte](scratch_bytes(graph_index));

        val task_graph = task_graphs(graph_index);

        for (timestep in 0..(timesteps(graph_index)-1)) {
          val offset = offset_at_timestep(graph_index)(timestep);
          val width = width_at_timestep(graph_index)(timestep);

          if (point < offset || point >= offset + width) {
            continue;
          }

          val last_offset = timestep > 0 ? offset_at_timestep(graph_index)(timestep-1) : 0;
          val last_width = timestep > 0 ? width_at_timestep(graph_index)(timestep-1) : 0;

          val next_offset = timestep + 1 < timesteps(graph_index) ? offset_at_timestep(graph_index)(timestep+1) : 0;
          val next_width = timestep + 1 < timesteps(graph_index) ? width_at_timestep(graph_index)(timestep+1) : 0;

          // Fetch inputs for this timestep.
          var n_inputs:Long = 0;

          // RAW dependencies: copy data from last timestep.
          {
            var n_raw_deps:Long = 0;
            val dset = dset_at_timestep(graph_index)(timestep);
            for (dep in deps(graph_index)(point)(dset)) {
              if (dep < last_offset || dep >= last_offset + last_width) {
                continue;
              }
              n_raw_deps++;
            }

            {
              val lock = pi.task_ready_lock(graph_index)(point_index)(timestep);
              lock.lock();
              while (pi.task_ready(graph_index)(point_index)(timestep) != n_raw_deps) {
                lock.await();
              }
              lock.unlock();
            }

            finish for (dep in deps(graph_index)(point)(dset)) {
              if (dep < last_offset || dep >= last_offset + last_width) {
                continue;
              }

              val input = inputs(n_inputs);
              val dep_index = point_local_indices(dep);
              async at(owners(dep)) {
                val remote_pi = local_plh();
                val src = remote_pi.task_result(graph_index)(dep_index);
                val dst = input;
                assert src.size == dst.size;
                finish Rail.asyncCopy(src, 0, dst, 0, src.size);

                val lock = remote_pi.task_used_lock(graph_index)(dep_index)(timestep);
                lock.lock();
                remote_pi.task_used(graph_index)(dep_index)(timestep)++;
                lock.release();
              }
              n_inputs++;
            }
          }

          // WAR dependencies: avoid copying over data that is still being copied.
          {
            var n_war_deps:Long = 0;
            if (point >= last_offset && point < last_offset + last_width) {
              val dset = dset_at_timestep(graph_index)(timestep);
              for (dep in rev_deps(graph_index)(point)(dset)) {
                if (dep < offset || dep >= offset + width) {
                  continue;
                }
                n_war_deps++;
              }
            }

            val lock = pi.task_used_lock(graph_index)(point_index)(timestep);
            lock.lock();
            while (pi.task_used(graph_index)(point_index)(timestep) != n_war_deps) {
              lock.await();
            }
            lock.unlock();
          }

          // Execute task.
          executePoint(task_graph, timestep, point, output, input_rails, n_inputs, scratch);

          // Mark dependencies as ready.
          if (timestep + 1 < timesteps(graph_index)) {
            val next_dset = dset_at_timestep(graph_index)(timestep+1);
            finish for (dep in rev_deps(graph_index)(point)(next_dset)) {
              if (dep < next_offset || dep >= next_offset + next_width) {
                continue;
              }

              val dep_index = point_local_indices(dep);
              async at(owners(dep)) {
                val remote_pi = local_plh();

                val lock = remote_pi.task_ready_lock(graph_index)(dep_index)(timestep+1);
                lock.lock();
                remote_pi.task_ready(graph_index)(dep_index)(timestep+1)++;
                lock.release();
              }
            }
          }
        }
      }
    }
  }

  private def execute() {
    val local_plh = plh; // Make local so that it's not copied by at statements.

    var start_time:Long = 0;
    var stop_time:Long = 0;
    for (iter in 0..1) {
      finish for (p in Place.places()) {
        async at (p) {
          val remote_pi = local_plh();
          for (graph_result in remote_pi.task_result) {
            for (point_result in graph_result) {
              point_result.fill(0uy);
            }
          }
          for (graph_ready in remote_pi.task_ready) {
            for (point_ready in graph_ready) {
              point_ready.fill(0);
            }
          }
          for (graph_used in remote_pi.task_used) {
            for (point_used in graph_used) {
              point_used.fill(0);
            }
          }
        }
      }
      start_time = Timer.nanoTime();
      finish for (p in Place.places()) {
        async at (p) {
          for (graph_index in 0..(timesteps.size-1)) {
            async {
              executeGraph(graph_index);
            }
          }
        }
      }
      stop_time = Timer.nanoTime();
    }
    return (stop_time - start_time)/1e9;
  }

  private static def executeTaskBench(argc: Int, argRail: Rail[String]) {
    // graph -> point -> dset -> [dep]
    var deps:Rail[Rail[Rail[Rail[Long]]]];

    // graph -> point -> dset -> [reverse_dep]
    var rev_deps:Rail[Rail[Rail[Rail[Long]]]];

    // graph -> max_width
    var max_width:Rail[Long];

    // graph -> output_bytes
    var output_bytes:Rail[Long];

    // graph -> scratch_bytes
    var scratch_bytes:Rail[Long];

    // graph -> bytes
    var task_graphs:Rail[Rail[UByte]];

    // graph -> timestep -> width
    var width_at_timestep:Rail[Rail[Long]];

    // graph -> timestep -> offset
    var offset_at_timestep:Rail[Rail[Long]];

    // graph -> timestep -> dset
    var dset_at_timestep:Rail[Rail[Long]];

    // graph -> timesteps
    var timesteps:Rail[Long];

    @Native("c++", "
      char **argv = new char *[argc];
      for (int i = 0; i < argc; i++) {
        x10::lang::String str = *((*argRail)[i]);
        x10_int strSize = str.length();
        char *result = new char[strSize+1];
        for (int j = 0; j < strSize; j++) { 
          x10_char c = (str).charAt(j);
          char *ch = (char *)&c;
          result[j] = *ch;
        }
        result[strSize] = \'\\0\';
        argv[i] = result;
      }
      App app(argc, argv);
      // cleanup allocated arrays
      for (int i = 0; i < argc; i++) {
        delete [] argv[i];
      }
      delete [] argv;

      app.display();

      auto &graphs = app.graphs;

      deps = ::x10::lang::Rail<::x10::lang::Rail<::x10::lang::Rail<::x10::lang::Rail<x10_long>*>*>*>::_make((x10_long)graphs.size());
      rev_deps = ::x10::lang::Rail<::x10::lang::Rail<::x10::lang::Rail<::x10::lang::Rail<x10_long>*>*>*>::_make((x10_long)graphs.size());
      max_width = ::x10::lang::Rail<x10_long>::_make((x10_long)graphs.size());
      output_bytes = ::x10::lang::Rail<x10_long>::_make((x10_long)graphs.size());
      scratch_bytes = ::x10::lang::Rail<x10_long>::_make((x10_long)graphs.size());
      task_graphs = ::x10::lang::Rail<::x10::lang::Rail<x10_ubyte>*>::_make((x10_long)graphs.size());
      width_at_timestep = ::x10::lang::Rail<::x10::lang::Rail<x10_long>*>::_make((x10_long)graphs.size());
      offset_at_timestep = ::x10::lang::Rail<::x10::lang::Rail<x10_long>*>::_make((x10_long)graphs.size());
      dset_at_timestep = ::x10::lang::Rail<::x10::lang::Rail<x10_long>*>::_make((x10_long)graphs.size());
      timesteps = ::x10::lang::Rail<x10_long>::_make((x10_long)graphs.size());

      for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
        TaskGraph graph = graphs.at(graph_index);

        ::x10aux::nullCheck(max_width)->::x10::lang::Rail<x10_long>::__set((x10_long)graph_index, (x10_long)graph.max_width);
        ::x10aux::nullCheck(output_bytes)->::x10::lang::Rail<x10_long>::__set((x10_long)graph_index, (x10_long)graph.output_bytes_per_task);
        ::x10aux::nullCheck(scratch_bytes)->::x10::lang::Rail<x10_long>::__set((x10_long)graph_index, (x10_long)graph.scratch_bytes_per_task);
        ::x10aux::nullCheck(timesteps)->::x10::lang::Rail<x10_long>::__set((x10_long)graph_index, (x10_long)graph.timesteps);

        auto graph_width_at_timestep = ::x10::lang::Rail<x10_long>::_make((x10_long)graph.timesteps);
        auto graph_offset_at_timestep = ::x10::lang::Rail<x10_long>::_make((x10_long)graph.timesteps);
        auto graph_dset_at_timestep = ::x10::lang::Rail<x10_long>::_make((x10_long)graph.timesteps);

        for (long timestep = 0; timestep < graph.timesteps; ++timestep) {
          ::x10aux::nullCheck(graph_width_at_timestep)->::x10::lang::Rail<x10_long>::__set((x10_long)timestep, (x10_long)graph.width_at_timestep(timestep));
          ::x10aux::nullCheck(graph_offset_at_timestep)->::x10::lang::Rail<x10_long>::__set((x10_long)timestep, (x10_long)graph.offset_at_timestep(timestep));
          ::x10aux::nullCheck(graph_dset_at_timestep)->::x10::lang::Rail<x10_long>::__set((x10_long)timestep, (x10_long)graph.dependence_set_at_timestep(timestep));
        }

        ::x10aux::nullCheck(width_at_timestep)->::x10::lang::Rail<::x10::lang::Rail<x10_long>*>::__set((x10_long)graph_index, graph_width_at_timestep);
        ::x10aux::nullCheck(offset_at_timestep)->::x10::lang::Rail<::x10::lang::Rail<x10_long>*>::__set((x10_long)graph_index, graph_offset_at_timestep);
        ::x10aux::nullCheck(dset_at_timestep)->::x10::lang::Rail<::x10::lang::Rail<x10_long>*>::__set((x10_long)graph_index, graph_dset_at_timestep);

        auto graph_task_graph = ::x10::lang::Rail<x10_ubyte>::_make((x10_long)sizeof(graph));
        for (size_t i = 0; i < sizeof(graph); ++i) {
          ::x10aux::nullCheck(graph_task_graph)->::x10::lang::Rail<x10_ubyte>::__set((x10_long)i, (x10_ubyte)(((char*)&graph)[i]));
        }
        ::x10aux::nullCheck(task_graphs)->::x10::lang::Rail<::x10::lang::Rail<x10_ubyte>*>::__set((x10_long)graph_index, graph_task_graph);

        auto max_dsets = graph.max_dependence_sets();
        auto graph_deps = ::x10::lang::Rail<::x10::lang::Rail<::x10::lang::Rail<x10_long>*>*>::_make((x10_long)graph.max_width);
        for (long point = 0; point < graph.max_width; ++point) {
          auto point_deps = ::x10::lang::Rail<::x10::lang::Rail<x10_long>*>::_make((x10_long)max_dsets);
          for (long dset = 0; dset < max_dsets; ++dset) {
            long ndeps = 0;
            for (auto interval : graph.dependencies(dset, point)) {
              ndeps += interval.second - interval.first + 1;
            }

            auto dset_deps = ::x10::lang::Rail<x10_long>::_make((x10_long)ndeps);

            long idep = 0;
            for (auto interval : graph.dependencies(dset, point)) {
              for (long dep = interval.first; dep <= interval.second; ++dep) {
                ::x10aux::nullCheck(dset_deps)->::x10::lang::Rail<x10_long>::__set((x10_long)idep, dep);
                ++idep;
              }
            }

            ::x10aux::nullCheck(point_deps)->::x10::lang::Rail<::x10::lang::Rail<x10_long>*>::__set((x10_long)dset, dset_deps);
          }
          ::x10aux::nullCheck(graph_deps)->::x10::lang::Rail<::x10::lang::Rail<::x10::lang::Rail<x10_long>*>*>::__set((x10_long)point, point_deps);
        }
        ::x10aux::nullCheck(deps)->::x10::lang::Rail<::x10::lang::Rail<::x10::lang::Rail<::x10::lang::Rail<x10_long>*>*>*>::__set((x10_long)graph_index, graph_deps);

        auto max_rev_dsets = graph.max_dependence_sets();
        auto graph_rev_deps = ::x10::lang::Rail<::x10::lang::Rail<::x10::lang::Rail<x10_long>*>*>::_make((x10_long)graph.max_width);
        for (long point = 0; point < graph.max_width; ++point) {
          auto point_rev_deps = ::x10::lang::Rail<::x10::lang::Rail<x10_long>*>::_make((x10_long)max_rev_dsets);
          for (long rev_dset = 0; rev_dset < max_rev_dsets; ++rev_dset) {
            long nrev_deps = 0;
            for (auto interval : graph.reverse_dependencies(rev_dset, point)) {
              nrev_deps += interval.second - interval.first + 1;
            }

            auto dset_rev_deps = ::x10::lang::Rail<x10_long>::_make((x10_long)nrev_deps);

            long irev_dep = 0;
            for (auto interval : graph.reverse_dependencies(rev_dset, point)) {
              for (long rev_dep = interval.first; rev_dep <= interval.second; ++rev_dep) {
                ::x10aux::nullCheck(dset_rev_deps)->::x10::lang::Rail<x10_long>::__set((x10_long)irev_dep, rev_dep);
                ++irev_dep;
              }
            }

            ::x10aux::nullCheck(point_rev_deps)->::x10::lang::Rail<::x10::lang::Rail<x10_long>*>::__set((x10_long)rev_dset, dset_rev_deps);
          }
          ::x10aux::nullCheck(graph_rev_deps)->::x10::lang::Rail<::x10::lang::Rail<::x10::lang::Rail<x10_long>*>*>::__set((x10_long)point, point_rev_deps);
        }
        ::x10aux::nullCheck(rev_deps)->::x10::lang::Rail<::x10::lang::Rail<::x10::lang::Rail<::x10::lang::Rail<x10_long>*>*>*>::__set((x10_long)graph_index, graph_rev_deps);
      }
    ") {
      deps = new Rail[Rail[Rail[Rail[Long]]]]();
      rev_deps = new Rail[Rail[Rail[Rail[Long]]]]();
      max_width = new Rail[Long]();
      output_bytes = new Rail[Long]();
      scratch_bytes = new Rail[Long]();
      task_graphs = new Rail[Rail[UByte]]();
      width_at_timestep = new Rail[Rail[Long]]();
      offset_at_timestep = new Rail[Rail[Long]]();
      dset_at_timestep = new Rail[Rail[Long]]();
      timesteps = new Rail[Long]();
    }
    val task_bench = new TaskBench(deps, rev_deps, max_width, output_bytes, scratch_bytes, task_graphs, width_at_timestep, offset_at_timestep, dset_at_timestep, timesteps);
    return task_bench.execute();
  }

  private static def appReport(argc: Int, argRail: Rail[String], time: Double) {
    @Native("c++", "
      char **argv = new char *[argc];
      for (int i = 0; i < argc; i++) {
        x10::lang::String str = *((*argRail)[i]);
        x10_int strSize = str.length();
        char *result = new char[strSize+1];
        for (int j = 0; j < strSize; j++) { 
          x10_char c = (str).charAt(j);
          char *ch = (char *)&c;
          result[j] = *ch;
        }
        result[strSize] = \'\\0\';
        argv[i] = result;
      }
      App app(argc, argv);
      // cleanup allocated arrays
      for (int i = 0; i < argc; i++) {
        delete [] argv[i];
      }
      delete [] argv;

      app.report_timing(time);
    ") {}
  }

  private static def constructCPPArgs(args:Rail[String]):Rail[String] {
    val argv = new Rail[String](args.size+1);
    argv(0) = "";
    for (i in 1..(args.size)) {
      argv(i) = args(i-1);
    }
    return argv;
  }

  public static def main(args:Rail[String]):void {
    val argc = (args.size+1) as Int;
    val argv = constructCPPArgs(args);
    val time = executeTaskBench(argc, argv);
    appReport(argc, argv, time);
  }

}
