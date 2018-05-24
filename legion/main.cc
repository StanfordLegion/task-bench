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

#include <utility>

#include "legion.h"

#include "core.h"

using namespace Legion;

enum TaskIDs {
  TID_TOP,
  TID_KERNEL,
};

enum FieldIDs {
  FID_IN,
  FID_OUT,
};

void kernel(const Task *task,
            const std::vector<PhysicalRegion> &regions,
            Context ctx, Runtime *runtime)
{
  printf("Kernel at point %lld\n",
         task->index_point[0]);
}

struct LegionApp : public App {
  LegionApp(Runtime *runtime, Context ctx);
  void execute_main_loop();

private:
  void execute_timestep(size_t i, long t);

private:
  Runtime *runtime;
  Context ctx;
  std::vector<LogicalRegionT<1> > regions;
  std::vector<LogicalPartitionT<1> > primary_partitions;
  std::vector<std::vector<LogicalPartitionT<1> > > secondary_partitions;
};

LegionApp::LegionApp(Runtime *runtime, Context ctx)
  : App(Runtime::get_input_args().argc, Runtime::get_input_args().argv)
  , runtime(runtime)
  , ctx(ctx)
{
  for (auto g : graphs) {
    // For now, create enough room for one output per task
    IndexSpaceT<1> is = runtime->create_index_space(ctx, Rect<1>(0, g.max_width-1));
    FieldSpace fs = runtime->create_field_space(ctx);
    {
      FieldAllocator allocator =
        runtime->create_field_allocator(ctx, fs);
      allocator.allocate_field(sizeof(double), FID_IN);
      allocator.allocate_field(sizeof(double), FID_OUT);
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

void LegionApp::execute_main_loop()
{
  display();

  for (long t = 0; ; ++t) {
    bool still_executing = false;
    for (size_t idx = 0; idx < graphs.size(); ++idx) {
      const TaskGraph &g = graphs[idx];
      if (t < g.timesteps) {
        execute_timestep(idx, t);
        still_executing = true;
      }
    }
    if (!still_executing) {
      break;
    }
  }
}

void LegionApp::execute_timestep(size_t idx, long t)
{
  const TaskGraph &g = graphs[idx];
  const LogicalRegionT<1> &region = regions[idx];
  const LogicalPartitionT<1> &primary = primary_partitions[idx];
  const std::vector<LogicalPartitionT<1> > &secondary = secondary_partitions[idx];

  long width = g.width_at_timestep(t);
  long dset = g.dependence_set_at_timestep(t);
  printf("Timestep %ld width %ld dset %ld\n", t, width, dset);

  Rect<1> bounds(0, width-1);

  FieldID f1(FID_IN), f2(FID_OUT);
  if (t % 2 == 1) {
    std::swap(f1, f2);
  }

  Kernel kernel = g.kernel;
  IndexLauncher launcher(TID_KERNEL, bounds,
                         TaskArgument(&kernel, sizeof(kernel)), ArgumentMap());
  // This needs to be write-discard so that we don't catch a
  // dependence on the same point in the previous timestep, unless
  // that task is an explicit dependence. Note: there may still be a
  // dependence if the mapper does not map the two executions to
  // different instances.
  launcher.add_region_requirement(
    RegionRequirement(primary, 0 /* default projection */,
                      WRITE_DISCARD, EXCLUSIVE, region)
    .add_field(f1));
  if (dset < g.max_dependence_sets()) {
    launcher.add_region_requirement(
      RegionRequirement(secondary[dset], 0 /* default projection */,
                        READ_ONLY, EXCLUSIVE, region)
      .add_field(f2));
  }
  runtime->execute_index_space(ctx, launcher);
}

void top(const Task *task,
         const std::vector<PhysicalRegion> &regions,
         Context ctx, Runtime *runtime)
{
  LegionApp app(runtime, ctx);
  app.execute_main_loop();
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
    TaskVariantRegistrar registrar(TID_KERNEL, "kernel");
    registrar.add_constraint(ProcessorConstraint(Processor::LOC_PROC));
    registrar.set_leaf();
    Runtime::preregister_task_variant<kernel>(registrar, "kernel");
  }

  return Runtime::start(argc, argv);
}
