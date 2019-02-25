/* Copyright 2019 Stanford University
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
#include "mappers/default_mapper.h"

#include "core.h"

using namespace Legion;
using namespace Legion::Mapping;

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
constexpr bool DEFAULT_EXACT_INSTANCE = false;
static_assert(DEFAULT_NUM_FIELDS < STATIC_NUM_FIELDS,
              "DEFAULT_NUM_FIELDS is out of bounds");

enum FieldIDs {
  FID_FIRST,
  FID_LAST=FID_FIRST+STATIC_NUM_FIELDS,
};

static Logger log_taskbench("taskbench");

struct Payload {
  TaskGraph graph;
  long timestep;
  IndexPartitionT<1> primary_partition;
};

class TaskBenchMapper : public DefaultMapper
{
  public:
    TaskBenchMapper(MapperRuntime *rt, Machine machine, Processor local,
                    const char *mapper_name);
    virtual void default_policy_select_target_processors(MapperContext ctx,
                                                         const Task &task,
                                                         std::vector<Processor> &target_procs);
};

TaskBenchMapper::TaskBenchMapper(MapperRuntime *rt, Machine machine, Processor local,
                                 const char *mapper_name)
  : DefaultMapper(rt, machine, local, mapper_name)
{
}

void TaskBenchMapper::default_policy_select_target_processors(MapperContext ctx,
                                                              const Task &task,
                                                              std::vector<Processor> &target_procs)
{
  target_procs.push_back(task.target_proc);
}

void get_base_and_size(Runtime *runtime,
                       const PhysicalRegion &region,
                       const RegionRequirement &req,
                       const Rect<1> &rect,
                       char *&base,
                       size_t &bytes)
{
  UnsafeFieldAccessor<char, 1, coord_t, Realm::AffineAccessor<char, 1, coord_t> > acc(
    region, req.instance_fields[0]);
  assert(acc.accessor.strides[0] == sizeof(char));
  base = reinterpret_cast<char *>(acc.ptr(rect.lo));
  bytes = rect.volume();
}

void leaf(const Task *task,
          const std::vector<PhysicalRegion> &regions,
          Context ctx, Runtime *runtime)
{
  log_taskbench.info("Leaf at point %lld", task->index_point[0]);

  assert(task->arglen == sizeof(Payload));
  Payload payload = *reinterpret_cast<Payload *>(task->args);
  TaskGraph graph = payload.graph;
  long timestep = payload.timestep;
  IndexPartitionT<1> primary = payload.primary_partition;

  Point<1> point = task->index_point;

  Rect<1> output_rect = runtime->get_index_space_domain(
    regions[0].get_logical_region().get_index_space());
  char *output_ptr;
  size_t output_bytes;
  get_base_and_size(runtime, regions[0], task->regions[0], output_rect, output_ptr, output_bytes);

  long dset = graph.dependence_set_at_timestep(timestep);
  std::vector<std::pair<long, long> > deps = graph.dependencies(dset, point);
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  for (auto span : deps) {
    for (long dep = span.first; dep <= span.second; dep++) {
      IndexSpaceT<1> is = runtime->get_index_subspace<1>(primary, Point<1>(dep));
      Rect<1> rect = Domain(runtime->get_index_space_domain(is));
      char *ptr;
      size_t bytes;
      get_base_and_size(runtime, regions[1], task->regions[1], rect, ptr, bytes);
      input_ptrs.push_back(ptr);
      input_bytes.push_back(bytes);
    }
  }

  char *scratch_ptr = NULL;
  size_t scratch_bytes = 0;
  if (graph.scratch_bytes_per_task != 0) {
    Rect<1> scratch_rect = runtime->get_index_space_domain(
      regions[2].get_logical_region().get_index_space());
    get_base_and_size(runtime, regions[2], task->regions[2], scratch_rect, scratch_ptr, scratch_bytes);
  }
  graph.execute_point(timestep, point, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(),
                      scratch_ptr, scratch_bytes);
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
  bool exact_instance;
  std::vector<LogicalRegionT<1> > regions;
  std::vector<LogicalRegionT<1> > scratch_regions;
  std::vector<LogicalPartitionT<1> > primary_partitions;
  std::vector<LogicalPartitionT<1> > scratch_partitions;
  std::vector<std::vector<LogicalPartitionT<1> > > secondary_partitions;
};

LegionApp::LegionApp(Runtime *runtime, Context ctx)
  : App(Runtime::get_input_args().argc, Runtime::get_input_args().argv)
  , runtime(runtime)
  , ctx(ctx)
  , num_fields(DEFAULT_NUM_FIELDS)
  , exact_instance(DEFAULT_EXACT_INSTANCE)
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
    else if (!strcmp(argv[i], "-exact")) {
      exact_instance = true;
    }
  }

  for (auto g : graphs) {
    // Space of tasks
    IndexSpaceT<1> ts = runtime->create_index_space(ctx, Rect<1>(0, g.max_width - 1));

    // Space of task output
    IndexSpaceT<1> is = runtime->create_index_space(
      ctx, Rect<1>(0, g.max_width * g.output_bytes_per_task - 1));
    FieldSpace fs = runtime->create_field_space(ctx);
    {
      FieldAllocator allocator =
        runtime->create_field_allocator(ctx, fs);
      for (long i = 0; i < num_fields; ++i) {
        allocator.allocate_field(sizeof(char), FID_FIRST+i);
      }
    }
    LogicalRegionT<1> result_lr = runtime->create_logical_region(ctx, is, fs);

    // Divide this first into one piece per task
    IndexPartitionT<1> primary_ip = runtime->create_equal_partition(ctx, is, ts);
    LogicalPartitionT<1> primary_lp = runtime->get_logical_partition(result_lr, primary_ip);

    // Next create secondary partitions for dependencies
    std::vector<LogicalPartitionT<1> >secondary_lps;

    long ndsets = g.max_dependence_sets();
    for (long dset = 0; dset < ndsets; ++dset) {
      IndexPartitionT<1> secondary_ip = runtime->create_pending_partition(ctx, is, ts);

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

    // Create scratch space for tasks
    if (g.scratch_bytes_per_task != 0) {
      IndexSpaceT<1> scratch_is = runtime->create_index_space(
        ctx, Rect<1>(0, g.max_width * g.scratch_bytes_per_task - 1));
      LogicalRegionT<1> scratch_lr = runtime->create_logical_region(ctx, scratch_is, fs);

      // Divide into one piece per task
      IndexPartitionT<1> scratch_ip = runtime->create_equal_partition(ctx, scratch_is, ts);
      LogicalPartitionT<1> scratch_lp = runtime->get_logical_partition(scratch_lr, scratch_ip);
      scratch_regions.push_back(scratch_lr);
      scratch_partitions.push_back(scratch_lp);
    }
  }
}

void LegionApp::run()
{
  // FIXME (Elliott): Do this correctly for control replication
  if (runtime->get_executing_processor(ctx).address_space() == 0) {
    display();
  }

  execute_main_loop(); // warm-up

  issue_execution_fence_and_block();
  unsigned long long start = Realm::Clock::current_time_in_nanoseconds();

  execute_main_loop(); // timed

  issue_execution_fence_and_block();
  unsigned long long stop = Realm::Clock::current_time_in_nanoseconds();

  double elapsed = (stop - start) / 1e9;
  if (runtime->get_executing_processor(ctx).address_space() == 0) {
    report_timing(elapsed);
  }
}

template<typename T>
T gcd(T a, T b)
{
  while (b != 0)
  {
    T old_b = b;
    b = a % b;
    a = old_b;
  }
  return a;
}

static long lcm(long a, long b) {
  return a * b / gcd(a, b);
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

  Payload payload;
  payload.graph = g;
  payload.timestep = t;
  payload.primary_partition = primary.get_index_partition();
  IndexLauncher launcher(TID_LEAF, bounds,
                         TaskArgument(&payload, sizeof(payload)), ArgumentMap());
  MappingTagID tag = exact_instance ? Legion::Mapping::DefaultMapper::EXACT_REGION : 0;
  // This needs to be write-discard so that we don't catch a
  // dependence on the same point in the previous timestep, unless
  // that task is an explicit dependence. Note: there may still be a
  // dependence if the mapper does not map the two executions to
  // different instances.
  launcher.add_region_requirement(
    RegionRequirement(primary, 0 /* default projection */,
                      WRITE_DISCARD, EXCLUSIVE, region, tag)
    .add_field(fout));
  if (dset < g.max_dependence_sets()) {
    launcher.add_region_requirement(
      RegionRequirement(secondary[dset], 0 /* default projection */,
                        READ_ONLY, EXCLUSIVE, region, tag)
      .add_field(fin));
  }
  if (g.scratch_bytes_per_task != 0) {
    const LogicalRegionT<1> &sratch_region = scratch_regions[idx];
    const LogicalPartitionT<1> &scratch = scratch_partitions[idx];
    launcher.add_region_requirement(
      RegionRequirement(scratch, 0 /* default projection */,
                        WRITE_DISCARD, EXCLUSIVE, sratch_region, tag)
      .add_field(fout));
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

void update_mappers(Machine machine, Runtime *runtime,
                    const std::set<Processor> &local_procs)
{
  for (std::set<Processor>::const_iterator it = local_procs.begin();
        it != local_procs.end(); it++)
  {
    TaskBenchMapper* mapper = new TaskBenchMapper(runtime->get_mapper_runtime(),
                                                  machine, *it, "task_bench_mapper");
    runtime->replace_default_mapper(mapper, *it);
  }
}

int main(int argc, char **argv)
{
  Runtime::set_top_level_task_id(TID_TOP);

  {
    TaskVariantRegistrar registrar(TID_TOP, "top");
    registrar.add_constraint(ProcessorConstraint(Processor::LOC_PROC));
    registrar.set_replicable();
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

  Runtime::add_registration_callback(update_mappers);
  return Runtime::start(argc, argv);
}
