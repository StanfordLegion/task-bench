/* Copyright 2020 Stanford University
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
  TID_INIT,
  TID_LEAF,
};

enum ShardingFunctorIDs {
  SID_LINEAR = 1,
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
};

class LinearShardingFunctor : public ShardingFunctor {
public:
  LinearShardingFunctor();
  LinearShardingFunctor(const LinearShardingFunctor &rhs);
  virtual ~LinearShardingFunctor(void);
public:
  LinearShardingFunctor& operator=(const LinearShardingFunctor &rhs);
public:
  template<int DIM>
  size_t linearize_point(const Realm::IndexSpace<DIM,coord_t> &is,
                         const Realm::Point<DIM,coord_t> &point) const;
public:
  virtual ShardID shard(const DomainPoint &point,
                        const Domain &full_space,
                        const size_t total_shards);
};

//--------------------------------------------------------------------------
LinearShardingFunctor::LinearShardingFunctor()
  : ShardingFunctor()
//--------------------------------------------------------------------------
{
}

//--------------------------------------------------------------------------
LinearShardingFunctor::LinearShardingFunctor(
                                           const LinearShardingFunctor &rhs)
  : ShardingFunctor()
//--------------------------------------------------------------------------
{
  // should never be called
  assert(false);
}

//--------------------------------------------------------------------------
LinearShardingFunctor::~LinearShardingFunctor(void)
//--------------------------------------------------------------------------
{
}

//--------------------------------------------------------------------------
LinearShardingFunctor& LinearShardingFunctor::operator=(
                                           const LinearShardingFunctor &rhs)
//--------------------------------------------------------------------------
{
  // should never be called
  assert(false);
  return *this;
}

//--------------------------------------------------------------------------
template<int DIM>
size_t LinearShardingFunctor::linearize_point(
                               const Realm::IndexSpace<DIM,coord_t> &is,
                               const Realm::Point<DIM,coord_t> &point) const
//--------------------------------------------------------------------------
{
  Realm::AffineLinearizedIndexSpace<DIM,coord_t> linearizer(is);
  return linearizer.linearize(point);
}

//--------------------------------------------------------------------------
ShardID LinearShardingFunctor::shard(const DomainPoint &point,
                                     const Domain &full_space,
                                     const size_t total_shards)
//--------------------------------------------------------------------------
{
#ifdef DEBUG_LEGION
  assert(point.get_dim() == full_space.get_dim());
#endif
  size_t domain_size = full_space.get_volume();
  switch (point.get_dim())
  {
    case 1:
      {
        const DomainT<1,coord_t> is = full_space;
        const Point<1,coord_t> p1 = point;
        return linearize_point<1>(is, p1)  * total_shards / domain_size;
      }
    case 2:
      {
        const DomainT<2,coord_t> is = full_space;
        const Point<2,coord_t> p2 = point;
        return linearize_point<2>(is, p2)  * total_shards / domain_size;
      }
    case 3:
      {
        const DomainT<3,coord_t> is = full_space;
        const Point<3,coord_t> p3 = point;
        return linearize_point<3>(is, p3)  * total_shards / domain_size;
      }
    default:
      assert(false);
  }
  return 0;
}

class TaskBenchMapper : public DefaultMapper
{
public:
  TaskBenchMapper(MapperRuntime *rt, Machine machine, Processor local,
                  const char *mapper_name);
  virtual void select_sharding_functor(
                                 const MapperContext                ctx,
                                 const Task&                        task,
                                 const SelectShardingFunctorInput&  input,
                                       SelectShardingFunctorOutput& output);
  virtual void select_sharding_functor(
                                 const MapperContext                ctx,
                                 const Copy&                        copy,
                                 const SelectShardingFunctorInput&  input,
                                       SelectShardingFunctorOutput& output);
  virtual void select_sharding_functor(
                                 const MapperContext                ctx,
                                 const Fill&                        fill,
                                 const SelectShardingFunctorInput&  input,
                                       SelectShardingFunctorOutput& output);
  virtual void default_policy_select_target_processors(MapperContext ctx,
                                                       const Task &task,
                                                       std::vector<Processor> &target_procs);
  virtual void slice_task(const MapperContext      ctx,
                          const Task&              task,
                          const SliceTaskInput&    input,
                                SliceTaskOutput&   output);
  void task_bench_slice_task(const Task &task,
                             const std::vector<Processor> &local_procs,
                             const std::vector<Processor> &remote_procs,
                             const SliceTaskInput &input,
                                   SliceTaskOutput &output,
            std::map<Domain,std::vector<TaskSlice> > &cached_slices) const;
};

TaskBenchMapper::TaskBenchMapper(MapperRuntime *rt, Machine machine, Processor local,
                                 const char *mapper_name)
  : DefaultMapper(rt, machine, local, mapper_name)
{
}

void TaskBenchMapper::select_sharding_functor(
                                 const MapperContext                ctx,
                                 const Task&                        task,
                                 const SelectShardingFunctorInput&  input,
                                       SelectShardingFunctorOutput& output)
{
  output.chosen_functor = SID_LINEAR;
}

void TaskBenchMapper::select_sharding_functor(
                                 const MapperContext                ctx,
                                 const Copy&                        copy,
                                 const SelectShardingFunctorInput&  input,
                                       SelectShardingFunctorOutput& output)
{
  output.chosen_functor = SID_LINEAR;
}

void TaskBenchMapper::select_sharding_functor(
                                 const MapperContext                ctx,
                                 const Fill&                        fill,
                                 const SelectShardingFunctorInput&  input,
                                       SelectShardingFunctorOutput& output)
{
  output.chosen_functor = SID_LINEAR;
}

void TaskBenchMapper::default_policy_select_target_processors(MapperContext ctx,
                                                              const Task &task,
                                                              std::vector<Processor> &target_procs)
{
  target_procs.push_back(task.target_proc);
}

//--------------------------------------------------------------------------
void TaskBenchMapper::slice_task(const MapperContext      ctx,
                                 const Task&              task,
                                 const SliceTaskInput&    input,
                                       SliceTaskOutput&   output)
//--------------------------------------------------------------------------
{
  std::vector<VariantID> variants;
  runtime->find_valid_variants(ctx, task.task_id, variants);
  /* find if we have a procset variant for task */
  for(unsigned i = 0; i < variants.size(); i++)
  {
    const ExecutionConstraintSet exset =
       runtime->find_execution_constraints(ctx, task.task_id, variants[i]);
    if(exset.processor_constraint.can_use(Processor::PROC_SET)) {

       // Before we do anything else, see if it is in the cache
       std::map<Domain,std::vector<TaskSlice> >::const_iterator finder =
         procset_slices_cache.find(input.domain);
       if (finder != procset_slices_cache.end()) {
               output.slices = finder->second;
               return;
       }

      output.slices.resize(input.domain.get_volume());
      unsigned idx = 0;
      Rect<1> rect = input.domain;
      for (PointInRectIterator<1> pir(rect); pir(); pir++, idx++)
      {
        Rect<1> slice(*pir, *pir);
        output.slices[idx] = TaskSlice(slice,
          remote_procsets[idx % remote_cpus.size()],
          false/*recurse*/, false/*stealable*/);
      }

      // Save the result in the cache
      procset_slices_cache[input.domain] = output.slices;
      return;
    }
  }

  // Whatever kind of processor we are is the one this task should
  // be scheduled on as determined by select initial task
  Processor::Kind target_kind =
    task.must_epoch_task ? local_proc.kind() : task.target_proc.kind();
  switch (target_kind)
  {
    case Processor::LOC_PROC:
      {
        task_bench_slice_task(task, local_cpus, remote_cpus,
                           input, output, cpu_slices_cache);
        break;
      }
    case Processor::TOC_PROC:
      {
        task_bench_slice_task(task, local_gpus, remote_gpus,
                           input, output, gpu_slices_cache);
        break;
      }
    case Processor::IO_PROC:
      {
        task_bench_slice_task(task, local_ios, remote_ios,
                           input, output, io_slices_cache);
        break;
      }
    case Processor::PY_PROC:
      {
        task_bench_slice_task(task, local_pys, remote_pys,
                           input, output, py_slices_cache);
        break;
      }
    case Processor::PROC_SET:
      {
        task_bench_slice_task(task, local_procsets, remote_procsets,
                           input, output, procset_slices_cache);
        break;
      }
    case Processor::OMP_PROC:
      {
        task_bench_slice_task(task, local_omps, remote_omps,
                           input, output, omp_slices_cache);
        break;
      }
    default:
      assert(false); // unimplemented processor kind
  }
}

//--------------------------------------------------------------------------
void TaskBenchMapper::task_bench_slice_task(const Task &task,
                                            const std::vector<Processor> &local,
                                            const std::vector<Processor> &remote,
                                            const SliceTaskInput& input,
                                                  SliceTaskOutput &output,
              std::map<Domain,std::vector<TaskSlice> > &cached_slices) const
//--------------------------------------------------------------------------
{
  // Before we do anything else, see if it is in the cache
  std::map<Domain,std::vector<TaskSlice> >::const_iterator finder =
    cached_slices.find(input.domain);
  if (finder != cached_slices.end()) {
    output.slices = finder->second;
    return;
  }

  // The two-level decomposition doesn't work so for now do a
  // simple one-level decomposition across all the processors.
  Machine::ProcessorQuery all_procs(machine);
  all_procs.only_kind(local[0].kind());
  if ((task.tag & SAME_ADDRESS_SPACE) != 0)
	all_procs.local_address_space();
  // Hack: This is a workaround for buggy code in the default mapper with DCR
  std::vector<Processor> procs(local.begin(), local.end()); // (all_procs.begin(), all_procs.end());

  switch (input.domain.get_dim())
  {
#define BLOCK(DIM) \
    case DIM: \
      { \
        DomainT<DIM,coord_t> point_space = input.domain; \
        Point<DIM,coord_t> num_blocks(procs.size()); \
        default_decompose_points<DIM>(point_space, procs, \
              num_blocks, false/*recurse*/, \
              stealing_enabled, output.slices); \
        break; \
      }
    LEGION_FOREACH_N(BLOCK)
#undef BLOCK
    default: // don't support other dimensions right now
      assert(false);
  }

  // Save the result in the cache
  cached_slices[input.domain] = output.slices;
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

void init(const Task *task,
          const std::vector<PhysicalRegion> &regions,
          Context ctx, Runtime *runtime)
{
  log_taskbench.info("Init at point %lld", task->index_point[0]);

  char *scratch_ptr = NULL;
  size_t scratch_bytes = 0;
  Rect<1> scratch_rect = runtime->get_index_space_domain(
    regions[0].get_logical_region().get_index_space());
  get_base_and_size(runtime, regions[0], task->regions[0], scratch_rect, scratch_ptr, scratch_bytes);
  TaskGraph::prepare_scratch(scratch_ptr, scratch_bytes);
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

  Point<1> point = task->index_point;

  Rect<1> output_rect = runtime->get_index_space_domain(
    regions[0].get_logical_region().get_index_space());
  char *output_ptr;
  size_t output_bytes;
  get_base_and_size(runtime, regions[0], task->regions[0], output_rect, output_ptr, output_bytes);

  long last_offset = graph.offset_at_timestep(timestep-1);
  long last_width = graph.width_at_timestep(timestep-1);

  long dset = graph.dependence_set_at_timestep(timestep);
  std::vector<std::pair<long, long> > deps = graph.dependencies(dset, point);

  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  long ninput = 1;
  for (auto span : deps) {
    for (long dep = span.first; dep <= span.second; dep++) {
      if (dep >= last_offset && dep < last_offset + last_width) {
        Rect<1> rect = runtime->get_index_space_domain(
          regions[ninput].get_logical_region().get_index_space());
        char *ptr;
        size_t bytes;
        get_base_and_size(runtime, regions[ninput], task->regions[ninput], rect, ptr, bytes);
        input_ptrs.push_back(ptr);
        input_bytes.push_back(bytes);
      }
      ninput++;
    }
  }

  char *scratch_ptr = NULL;
  size_t scratch_bytes = 0;
  if (graph.scratch_bytes_per_task != 0) {
    Rect<1> scratch_rect = runtime->get_index_space_domain(
      regions.back().get_logical_region().get_index_space());
    get_base_and_size(runtime, regions.back(), task->regions.back(), scratch_rect, scratch_ptr, scratch_bytes);
  }

  graph.execute_point(timestep, point, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(),
                      scratch_ptr, scratch_bytes);
}

struct LegionApp : public App {
  LegionApp(Runtime *runtime, Context ctx);

  void run();
private:
  void execute_main_loop();

  void execute_timestep(size_t i, long t);

  void init(size_t i);

  void issue_execution_fence_and_block();

private:
  Runtime *runtime;
  Context ctx;
  long num_fields;
  bool exact_instance;
  std::vector<LogicalRegionT<1> > regions;
  std::vector<LogicalPartitionT<1> > primary_partitions;
  std::vector<std::vector<std::vector<LogicalPartitionT<1> > > > secondary_partitions;
  std::vector<LogicalRegionT<1> > scratch_regions;
  std::vector<LogicalPartitionT<1> > scratch_partitions;
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
    long ndsets = g.max_dependence_sets();

    long max_deps = 0;
    for (long dset = 0; dset < ndsets; ++dset) {
      for (long point = 0; point < g.max_width; ++point) {
        long deps = 0;

        for (auto dep : g.dependencies(dset, point)) {
          deps += dep.second - dep.first + 1;
        }

        max_deps = std::max(max_deps, deps);
      }
    }

    std::vector<std::vector<LogicalPartitionT<1> > > secondary_lps(ndsets);
    for (long dset = 0; dset < ndsets; ++dset) {
      for (long ndep = 0; ndep < max_deps; ++ndep) {
        IndexPartitionT<1> secondary_ip = runtime->create_pending_partition(ctx, is, ts);

        for (long point = 0; point < g.max_width; ++point) {
          std::vector<IndexSpace> subspaces;
          long ninput = 0;
          bool done = false;
          for (auto dep : g.dependencies(dset, point)) {
            for (long i = dep.first; i <= dep.second; ++i) {
              if (ninput == ndep) {
                subspaces.push_back(runtime->get_index_subspace(ctx, primary_ip, i));
                done = true;
                break;
              }
              ++ninput;
            }
            if (done) break;
          }
          runtime->create_index_space_union(ctx, secondary_ip, point, subspaces);
        }

        LogicalPartitionT<1> secondary_lp = runtime->get_logical_partition(result_lr, secondary_ip);
        secondary_lps[dset].push_back(secondary_lp);
      }
    }

    // Initialize primary partition
    {
      char zero = 0;
      IndexFillLauncher launcher(ts, primary_lp, result_lr,
                                 TaskArgument(&zero, sizeof(zero)),
                                 0 /* default projection */);
      for (long i = 0; i < num_fields; ++i) {
        launcher.add_field(FID_FIRST+i);
      }
      runtime->fill_fields(ctx, launcher);
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

  for (size_t idx = 0; idx < graphs.size(); ++idx) {
    init(idx);
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

  long max_timesteps = LONG_MIN;
  for (auto g : graphs) {
    max_timesteps = std::max(max_timesteps, g.timesteps);
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

void LegionApp::init(size_t idx)
{
  const TaskGraph &g = graphs[idx];

  Rect<1> bounds(0, g.max_width-1);

  if (g.scratch_bytes_per_task != 0) {
    for (long i = 0; i < num_fields; ++i) {
      FieldID fout(FID_FIRST + i);
      IndexLauncher launcher(TID_INIT, bounds, TaskArgument(), ArgumentMap());
      MappingTagID tag = exact_instance ? Legion::Mapping::DefaultMapper::EXACT_REGION : 0;
      const LogicalRegionT<1> &sratch_region = scratch_regions[idx];
      const LogicalPartitionT<1> &scratch = scratch_partitions[idx];
      launcher.add_region_requirement(
        RegionRequirement(scratch, 0 /* default projection */,
                          WRITE_DISCARD, EXCLUSIVE, sratch_region, tag)
        .add_field(fout));

      runtime->execute_index_space(ctx, launcher);
    }
  }
}

void LegionApp::execute_timestep(size_t idx, long t)
{
  const TaskGraph &g = graphs[idx];
  const LogicalRegionT<1> &region = regions[idx];
  const LogicalPartitionT<1> &primary = primary_partitions[idx];
  const std::vector<std::vector<LogicalPartitionT<1> > > &secondary = secondary_partitions[idx];

  long offset = g.offset_at_timestep(t);
  long width = g.width_at_timestep(t);
  long dset = g.dependence_set_at_timestep(t);
  log_taskbench.info("Timestep %ld offset %ld width %ld dset %ld", t, offset, width, dset);

  Rect<1> bounds(offset, offset+width-1);

  FieldID fout(FID_FIRST + ((t+1) % num_fields)), fin(FID_FIRST + (t % num_fields));

  Payload payload;
  payload.graph = g;
  payload.timestep = t;
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
    for (auto s : secondary[dset]) {
      launcher.add_region_requirement(
        RegionRequirement(s, 0 /* default projection */,
                          READ_ONLY, EXCLUSIVE, region, tag)
        .add_field(fin));
    }
  }
  if (g.scratch_bytes_per_task != 0) {
    const LogicalRegionT<1> &sratch_region = scratch_regions[idx];
    const LogicalPartitionT<1> &scratch = scratch_partitions[idx];
    launcher.add_region_requirement(
      RegionRequirement(scratch, 0 /* default projection */,
                        READ_WRITE, EXCLUSIVE, sratch_region, tag)
      .add_field(fout));
  }

  runtime->execute_index_space(ctx, launcher);
}

void LegionApp::issue_execution_fence_and_block()
{
  Future f = runtime->issue_execution_fence(ctx);
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
    TaskVariantRegistrar registrar(TID_INIT, "init");
    registrar.add_constraint(ProcessorConstraint(Processor::LOC_PROC));
    registrar.set_leaf();
    Runtime::preregister_task_variant<init>(registrar, "init");
  }

  {
    TaskVariantRegistrar registrar(TID_LEAF, "leaf");
    registrar.add_constraint(ProcessorConstraint(Processor::LOC_PROC));
    registrar.set_leaf();
    Runtime::preregister_task_variant<leaf>(registrar, "leaf");
  }

  LinearShardingFunctor *sharding_functor = new LinearShardingFunctor();
  Runtime::preregister_sharding_functor(SID_LINEAR, sharding_functor);

  Runtime::add_registration_callback(update_mappers);
  return Runtime::start(argc, argv);
}
