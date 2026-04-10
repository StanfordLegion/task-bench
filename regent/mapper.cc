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

#include "mapper.h"

#include "mappers/default_mapper.h"

using namespace Legion;
using namespace Legion::Mapping;

enum ShardingFunctorIDs {
  SID_LINEAR = 1,
};

static Logger log_taskbench("taskbench");

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

static void create_mappers(Machine machine, Runtime *runtime, const std::set<Processor> &local_procs)
{
  for (std::set<Processor>::const_iterator it = local_procs.begin();
        it != local_procs.end(); it++)
  {
    TaskBenchMapper* mapper = new TaskBenchMapper(runtime->get_mapper_runtime(),
                                              machine, *it, "task_bench_mapper");
    runtime->replace_default_mapper(mapper, *it);
  }
}

void register_mappers()
{
  LinearShardingFunctor *sharding_functor = new LinearShardingFunctor();
  Runtime::preregister_sharding_functor(SID_LINEAR, sharding_functor);

  Runtime::add_registration_callback(create_mappers);
}
