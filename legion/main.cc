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

#include <algorithm>
#include <climits>
#include <numeric>
#include <utility>

#include "legion.h"

#include "core.h"

using namespace Legion;

enum TaskIDs {
  TID_TOP,
  TID_LEAF,
  TID_DUMMY,
};

// In order to avoid spurious WAR dependencies, we round-robin the
// task output across a set of fields. This is basically
// double-buffering with an arbitrary factor N. This could technically
// be done in the mapper, but it's easier to just do it here. The
// tradeoff is that we're allocated a fixed amount of memory up front
// for instances.

// This is a static upper-bound on the number of fields, the actual
// number is configured at runtime.
constexpr long STATIC_NUM_FIELDS = 100;
constexpr long DEFAULT_NUM_FIELDS = 10;
static_assert(DEFAULT_NUM_FIELDS < STATIC_NUM_FIELDS,
              "DEFAULT_NUM_FIELDS is out of bounds");

enum FieldIDs {
  FID_FIRST,
  FID_LAST=FID_FIRST+STATIC_NUM_FIELDS,
};

static Logger log_taskbench("taskbench");

void leaf(const Task *task,
            const std::vector<PhysicalRegion> &regions,
            Context ctx, Runtime *runtime)
{
  log_taskbench.info("Leaf at point %lld", task->index_point[0]);

  assert(task->arglen == sizeof(Kernel));
  Kernel kernel = *reinterpret_cast<Kernel *>(task->args);
  kernel.execute();
}

void dummy(const Task *task,
           const std::vector<PhysicalRegion> &regions,
           Context ctx, Runtime *runtime)
{
}

struct LegionApp : public App {
  LegionApp(Runtime *runtime, Context ctx);

  void run();
private:
  void execute_main_loop();

  void execute_timestep(size_t i, long t);

  void issue_execution_fence_and_block();

private:
  Runtime *runtime;
  Context ctx;
  long num_fields;
  std::vector<LogicalRegionT<1> > regions;
  std::vector<LogicalPartitionT<1> > primary_partitions;
  std::vector<std::vector<LogicalPartitionT<1> > > secondary_partitions;
};

LegionApp::LegionApp(Runtime *runtime, Context ctx)
  : App(Runtime::get_input_args().argc, Runtime::get_input_args().argv)
  , runtime(runtime)
  , ctx(ctx)
  , num_fields(DEFAULT_NUM_FIELDS)
{
  int argc = Runtime::get_input_args().argc;
  char **argv = Runtime::get_input_args().argv;

  for (int i = 1; i < argc; i++) {
    if (!strcmp(argv[i], "-fields")) {
      assert(i+1 < argc);
      long value = atol(argv[++i]);
      if (value <= 0) {
        fprintf(stderr, "error: Invalid flag \"-fields %ld\" must be > 0\n", value);
        abort();
      }
      num_fields = value;
    }
  }

  for (auto g : graphs) {
    // For now, create enough room for one output per task
    IndexSpaceT<1> is = runtime->create_index_space(ctx, Rect<1>(0, g.max_width-1));
    FieldSpace fs = runtime->create_field_space(ctx);
    {
      FieldAllocator allocator =
        runtime->create_field_allocator(ctx, fs);
      for (long i = 0; i < num_fields; ++i) {
        allocator.allocate_field(sizeof(double), FID_FIRST+i);
      }
    }
    LogicalRegionT<1> result_lr = runtime->create_logical_region(ctx, is, fs);

    // Divide this first into one piece per task
    IndexPartitionT<1> primary_ip = runtime->create_equal_partition(ctx, is, is);
    LogicalPartitionT<1> primary_lp = runtime->get_logical_partition(result_lr, primary_ip);

    // Next create secondary partitions for dependencies
    std::vector<LogicalPartitionT<1> >secondary_lps;

    long ndsets = g.max_dependence_sets();
    for (long dset = 0; dset < ndsets; ++dset) {
      IndexPartitionT<1> secondary_ip = runtime->create_pending_partition(ctx, is, is);

      for (long point = 0; point < g.max_width; ++point) {
        std::vector<std::pair<long, long> > deps = g.dependencies(dset, point);

        std::vector<IndexSpace> subspaces;
        for (auto dep : deps) {
          for (long i = dep.first; i <= dep.second; ++i) {
            subspaces.push_back(runtime->get_index_subspace(ctx, primary_ip, i));
          }
        }
        runtime->create_index_space_union(ctx, secondary_ip, point, subspaces);
      }

      LogicalPartitionT<1> secondary_lp = runtime->get_logical_partition(result_lr, secondary_ip);
      secondary_lps.push_back(secondary_lp);
    }

    regions.push_back(result_lr);
    primary_partitions.push_back(primary_lp);
    secondary_partitions.push_back(secondary_lps);
  }
}

void LegionApp::run()
{
  display();

  execute_main_loop(); // warm-up

  issue_execution_fence_and_block();
  unsigned long long start = Realm::Clock::current_time_in_nanoseconds();

  execute_main_loop(); // timed

  issue_execution_fence_and_block();
  unsigned long long stop = Realm::Clock::current_time_in_nanoseconds();

  double elapsed = (stop - start) / 1e9;
  report_timing(elapsed);
}

static long lcm(long a, long b) {
  // Hack: Workaround to avoid needing C++17
  return a * b / std::__gcd(a, b);
}

void LegionApp::execute_main_loop()
{
  long period = num_fields;
  for (auto g : graphs) {
    period = lcm(period, g.timestep_period());
  }

  long max_timesteps = LONG_MAX;
  for (auto g : graphs) {
    max_timesteps = std::min(max_timesteps, g.timesteps);
  }

  for (long t = 0; t < max_timesteps; ++t) {
    if (t % period == 0 && t + period - 1 < max_timesteps) {
      runtime->begin_trace(ctx, 0);
    }
    for (size_t idx = 0; idx < graphs.size(); ++idx) {
      const TaskGraph &g = graphs[idx];
      if (t < g.timesteps) {
        execute_timestep(idx, t);
      }
    }
    if ((t+1) % period == 0 && t < max_timesteps) {
      runtime->end_trace(ctx, 0);
    }
  }
}

void LegionApp::execute_timestep(size_t idx, long t)
{
  const TaskGraph &g = graphs[idx];
  const LogicalRegionT<1> &region = regions[idx];
  const LogicalPartitionT<1> &primary = primary_partitions[idx];
  const std::vector<LogicalPartitionT<1> > &secondary = secondary_partitions[idx];

  long offset = g.offset_at_timestep(t);
  long width = g.width_at_timestep(t);
  long dset = g.dependence_set_at_timestep(t);
  log_taskbench.info("Timestep %ld offset %ld width %ld dset %ld", t, offset, width, dset);

  Rect<1> bounds(offset, offset+width-1);

  FieldID fout(FID_FIRST + ((t+1) % num_fields)), fin(FID_FIRST + (t % num_fields));

  Kernel kernel = g.kernel;
  IndexLauncher launcher(TID_LEAF, bounds,
                         TaskArgument(&kernel, sizeof(kernel)), ArgumentMap());
  // This needs to be write-discard so that we don't catch a
  // dependence on the same point in the previous timestep, unless
  // that task is an explicit dependence. Note: there may still be a
  // dependence if the mapper does not map the two executions to
  // different instances.
  launcher.add_region_requirement(
    RegionRequirement(primary, 0 /* default projection */,
                      WRITE_DISCARD, EXCLUSIVE, region)
    .add_field(fout));
  if (dset < g.max_dependence_sets()) {
    launcher.add_region_requirement(
      RegionRequirement(secondary[dset], 0 /* default projection */,
                        READ_ONLY, EXCLUSIVE, region)
      .add_field(fin));
  }
  runtime->execute_index_space(ctx, launcher);
}

void LegionApp::issue_execution_fence_and_block()
{
  runtime->issue_execution_fence(ctx);

  TaskLauncher launcher(TID_DUMMY, TaskArgument());
  Future f = runtime->execute_task(ctx, launcher);
  f.get_void_result();
}

void top(const Task *task,
         const std::vector<PhysicalRegion> &regions,
         Context ctx, Runtime *runtime)
{
  LegionApp app(runtime, ctx);
  app.run();
}

int main(int argc, char **argv)
{
  Runtime::set_top_level_task_id(TID_TOP);

  {
    TaskVariantRegistrar registrar(TID_TOP, "top");
    registrar.add_constraint(ProcessorConstraint(Processor::LOC_PROC));
    Runtime::preregister_task_variant<top>(registrar, "top");
  }

  {
    TaskVariantRegistrar registrar(TID_LEAF, "leaf");
    registrar.add_constraint(ProcessorConstraint(Processor::LOC_PROC));
    registrar.set_leaf();
    Runtime::preregister_task_variant<leaf>(registrar, "leaf");
  }

  {
    TaskVariantRegistrar registrar(TID_DUMMY, "dummy");
    registrar.add_constraint(ProcessorConstraint(Processor::LOC_PROC));
    registrar.set_leaf();
    Runtime::preregister_task_variant<dummy>(registrar, "dummy");
  }

  return Runtime::start(argc, argv);
}
