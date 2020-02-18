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

#include "mapper.h"

#include "mappers/default_mapper.h"

#define SPMD_SHARD_USE_IO_PROC 1

using namespace Legion;
using namespace Legion::Mapping;

static LegionRuntime::Logger::Category log_task_bench("task_bench");

class TaskBenchMapper : public DefaultMapper
{
public:
  TaskBenchMapper(MapperRuntime *rt, Machine machine, Processor local,
                  const char *mapper_name,
                  std::vector<Processor>* procs_list,
                  std::vector<Memory>* sysmems_list,
                  std::map<Memory, std::vector<Processor> >* sysmem_local_procs,
#if SPMD_SHARD_USE_IO_PROC
                  std::map<Memory, std::vector<Processor> >* sysmem_local_io_procs,
#endif
                  std::map<Processor, Memory>* proc_sysmems,
                  std::map<Processor, Memory>* proc_regmems);
  virtual void default_policy_rank_processor_kinds(
                                    MapperContext ctx, const Task &task,
                                    std::vector<Processor::Kind> &ranking);
  virtual Processor default_policy_select_initial_processor(
                                    MapperContext ctx, const Task &task);
  virtual void default_policy_select_target_processors(
                                    MapperContext ctx,
                                    const Task &task,
                                    std::vector<Processor> &target_procs);
  virtual LogicalRegion default_policy_select_instance_region(
                                    MapperContext ctx, Memory target_memory,
                                    const RegionRequirement &req,
                                    const LayoutConstraintSet &constraints,
                                    bool force_new_instances,
                                    bool meets_constraints);
  virtual void map_copy(const MapperContext ctx,
                        const Copy &copy,
                        const MapCopyInput &input,
                        MapCopyOutput &output);
  virtual void map_must_epoch(const MapperContext           ctx,
                              const MapMustEpochInput&      input,
                                    MapMustEpochOutput&     output);
  template<bool IS_SRC>
  void task_bench_create_copy_instance(MapperContext ctx, const Copy &copy,
                                    const RegionRequirement &req, unsigned index,
                                    std::vector<PhysicalInstance> &instances);
private:
  std::vector<Processor>& procs_list;
  std::vector<Memory>& sysmems_list;
  std::map<Memory, std::vector<Processor> >& sysmem_local_procs;
#if SPMD_SHARD_USE_IO_PROC
  std::map<Memory, std::vector<Processor> >& sysmem_local_io_procs;
#endif
  std::map<Processor, Memory>& proc_sysmems;
  // std::map<Processor, Memory>& proc_regmems;
};

TaskBenchMapper::TaskBenchMapper(MapperRuntime *rt, Machine machine, Processor local,
                                 const char *mapper_name,
                                 std::vector<Processor>* _procs_list,
                                 std::vector<Memory>* _sysmems_list,
                                 std::map<Memory, std::vector<Processor> >* _sysmem_local_procs,
#if SPMD_SHARD_USE_IO_PROC
                                 std::map<Memory, std::vector<Processor> >* _sysmem_local_io_procs,
#endif
                                 std::map<Processor, Memory>* _proc_sysmems,
                                 std::map<Processor, Memory>* _proc_regmems)
  : DefaultMapper(rt, machine, local, mapper_name),
    procs_list(*_procs_list),
    sysmems_list(*_sysmems_list),
    sysmem_local_procs(*_sysmem_local_procs),
#if SPMD_SHARD_USE_IO_PROC
    sysmem_local_io_procs(*_sysmem_local_io_procs),
#endif
    proc_sysmems(*_proc_sysmems)// ,
    // proc_regmems(*_proc_regmems)
{
}

void TaskBenchMapper::default_policy_rank_processor_kinds(MapperContext ctx,
                        const Task &task, std::vector<Processor::Kind> &ranking)
{
#if SPMD_SHARD_USE_IO_PROC
  const char* task_name = task.get_task_name();
  const char* prefix = "shard_";
  if (strncmp(task_name, prefix, strlen(prefix)) == 0) {
    // Put shard tasks on IO processors.
    ranking.resize(5);
    ranking[0] = Processor::TOC_PROC;
    ranking[1] = Processor::PROC_SET;
    ranking[2] = Processor::IO_PROC;
    ranking[3] = Processor::LOC_PROC;
    ranking[4] = Processor::PY_PROC;
  } else {
#endif
    ranking.resize(5);
    ranking[0] = Processor::TOC_PROC;
    ranking[1] = Processor::PROC_SET;
    ranking[2] = Processor::LOC_PROC;
    ranking[3] = Processor::IO_PROC;
    ranking[4] = Processor::PY_PROC;
#if SPMD_SHARD_USE_IO_PROC
  }
#endif
}

Processor TaskBenchMapper::default_policy_select_initial_processor(
                                    MapperContext ctx, const Task &task)
{
  if (!task.regions.empty()) {
    if (task.regions[0].handle_type == SINGULAR) {
      Color index = runtime->get_logical_region_color(ctx, task.regions[0].region);
#define NO_SPMD 0
#if NO_SPMD
      return procs_list[index % procs_list.size()];
#else
      std::vector<Processor> &local_procs =
        sysmem_local_procs[proc_sysmems[local_proc]];
      if (local_procs.size() > 1) {
#define SPMD_RESERVE_SHARD_PROC 0
#if SPMD_RESERVE_SHARD_PROC
        return local_procs[(index % (local_procs.size() - 1)) + 1];
#else
        return local_procs[index % local_procs.size()];
#endif
      } else if (local_procs.size() > 0) { // FIXME: This check seems to be required when using Python processors
        return local_procs[0];
      }
#endif
    }
  }

  return DefaultMapper::default_policy_select_initial_processor(ctx, task);
}

void TaskBenchMapper::default_policy_select_target_processors(
                                    MapperContext ctx,
                                    const Task &task,
                                    std::vector<Processor> &target_procs)
{
  target_procs.push_back(task.target_proc);
}

LogicalRegion TaskBenchMapper::default_policy_select_instance_region(
                                MapperContext ctx, Memory target_memory,
                                const RegionRequirement &req,
                                const LayoutConstraintSet &layout_constraints,
                                bool force_new_instances,
                                bool meets_constraints)
{
  return req.region;
}

//--------------------------------------------------------------------------
template<bool IS_SRC>
void TaskBenchMapper::task_bench_create_copy_instance(MapperContext ctx,
                     const Copy &copy, const RegionRequirement &req,
                     unsigned idx, std::vector<PhysicalInstance> &instances)
//--------------------------------------------------------------------------
{
  // This method is identical to the default version except that it
  // chooses an intelligent memory based on the destination of the
  // copy.

  // See if we have all the fields covered
  std::set<FieldID> missing_fields = req.privilege_fields;
  for (std::vector<PhysicalInstance>::const_iterator it =
        instances.begin(); it != instances.end(); it++)
  {
    it->remove_space_fields(missing_fields);
    if (missing_fields.empty())
      break;
  }
  if (missing_fields.empty())
    return;
  // If we still have fields, we need to make an instance
  // We clearly need to take a guess, let's see if we can find
  // one of our instances to use.

  // ELLIOTT: Get the remote node here.
  Color index = runtime->get_logical_region_color(ctx, copy.src_requirements[idx].region);
// #if SPMD_RESERVE_SHARD_PROC
//   size_t sysmem_index = index / (std::max(sysmem_local_procs.begin()->second.size() - 1, (size_t)1));
// #else
//   size_t sysmem_index = index / sysmem_local_procs.begin()->second.size();
// #endif
//   assert(sysmem_index < sysmems_list.size());
//   Memory target_memory = sysmems_list[sysmem_index];
  Memory target_memory = default_policy_select_target_memory(ctx,
                           procs_list[index % procs_list.size()],
                           req);
  log_task_bench.spew("Building instance for copy of a region with index %u to be in memory %llx",
                      index, target_memory.id);
  bool force_new_instances = false;
  LayoutConstraintID our_layout_id =
   default_policy_select_layout_constraints(ctx, target_memory,
                                            req, COPY_MAPPING,
                                            true/*needs check*/,
                                            force_new_instances);
  LayoutConstraintSet creation_constraints =
              runtime->find_layout_constraints(ctx, our_layout_id);
  creation_constraints.add_constraint(
      FieldConstraint(missing_fields,
                      false/*contig*/, false/*inorder*/));
  instances.resize(instances.size() + 1);
  if (!default_make_instance(ctx, target_memory,
        creation_constraints, instances.back(),
        COPY_MAPPING, force_new_instances, true/*meets*/, req))
  {
    // If we failed to make it that is bad
    log_task_bench.error("TaskBench mapper failed allocation for "
                   "%s region requirement %d of explicit "
                   "region-to-region copy operation in task %s "
                   "(ID %lld) in memory " IDFMT " for processor "
                   IDFMT ". This means the working set of your "
                   "application is too big for the allotted "
                   "capacity of the given memory under the default "
                   "mapper's mapping scheme. You have three "
                   "choices: ask Realm to allocate more memory, "
                   "write a custom mapper to better manage working "
                   "sets, or find a bigger machine. Good luck!",
                   IS_SRC ? "source" : "destination", idx,
                   copy.parent_task->get_task_name(),
                   copy.parent_task->get_unique_id(),
		       target_memory.id,
		       copy.parent_task->current_proc.id);
    assert(false);
  }
}

void TaskBenchMapper::map_copy(const MapperContext ctx,
                               const Copy &copy,
                               const MapCopyInput &input,
                               MapCopyOutput &output)
{
  log_task_bench.spew("TaskBench mapper map_copy");
  for (unsigned idx = 0; idx < copy.src_requirements.size(); idx++)
  {
    // Use a virtual instance for the source unless source is
    // restricted or we'd applying a reduction.
    output.src_instances[idx].clear();
    if (copy.src_requirements[idx].is_restricted()) {
      // If it's restricted, just take the instance. This will only
      // happen inside the shard task.
      output.src_instances[idx] = input.src_instances[idx];
      if (!output.src_instances[idx].empty())
        runtime->acquire_and_filter_instances(ctx,
                                output.src_instances[idx]);
    } else if (copy.dst_requirements[idx].privilege == REDUCE) {
      // Use the default here. This will place the instance on the
      // current node.
      default_create_copy_instance<true/*is src*/>(ctx, copy,
                copy.src_requirements[idx], idx, output.src_instances[idx]);
    } else {
      output.src_instances[idx].push_back(
        PhysicalInstance::get_virtual_instance());
    }

    // Place the destination instance on the remote node.
    output.dst_instances[idx].clear();
    if (!copy.dst_requirements[idx].is_restricted()) {
      // Call a customized method to create an instance on the desired node.
      task_bench_create_copy_instance<false/*is src*/>(ctx, copy,
        copy.dst_requirements[idx], idx, output.dst_instances[idx]);
    } else {
      // If it's restricted, just take the instance. This will only
      // happen inside the shard task.
      output.dst_instances[idx] = input.dst_instances[idx];
      if (!output.dst_instances[idx].empty())
        runtime->acquire_and_filter_instances(ctx,
                                output.dst_instances[idx]);
    }
  }
}

void TaskBenchMapper::map_must_epoch(const MapperContext           ctx,
                                   const MapMustEpochInput&      input,
                                         MapMustEpochOutput&     output)
{
  size_t num_nodes = sysmems_list.size();
  size_t num_tasks = input.tasks.size();
  size_t num_shards_per_node =
    num_nodes < input.tasks.size() ? (num_tasks + num_nodes - 1) / num_nodes : 1;
  std::map<const Task*, size_t> task_indices;
  for (size_t idx = 0; idx < num_tasks; ++idx) {
    size_t node_idx = idx / num_shards_per_node;
    size_t proc_idx = idx % num_shards_per_node;
    assert(node_idx < sysmems_list.size());
#if SPMD_SHARD_USE_IO_PROC
    assert(proc_idx < sysmem_local_io_procs[sysmems_list[node_idx]].size());
    output.task_processors[idx] = sysmem_local_io_procs[sysmems_list[node_idx]][proc_idx];
#else
    assert(proc_idx < sysmem_local_procs[sysmems_list[node_idx]].size());
    output.task_processors[idx] = sysmem_local_procs[sysmems_list[node_idx]][proc_idx];
#endif

    task_indices[input.tasks[idx]] = node_idx;
  }

  for (size_t idx = 0; idx < input.constraints.size(); ++idx) {
    const MappingConstraint& constraint = input.constraints[idx];
    int owner_id = -1;

    for (unsigned i = 0; i < constraint.constrained_tasks.size(); ++i) {
      const RegionRequirement& req =
        constraint.constrained_tasks[i]->regions[
          constraint.requirement_indexes[i]];
      if (req.is_no_access()) continue;
      assert(owner_id == -1);
      owner_id = static_cast<int>(i);
    }
    assert(owner_id != -1);

    const Task* task = constraint.constrained_tasks[owner_id];
    const RegionRequirement& req =
      task->regions[constraint.requirement_indexes[owner_id]];
    Memory target_memory = sysmems_list[task_indices[task]];
    LayoutConstraintSet layout_constraints;
    default_policy_select_constraints(ctx, layout_constraints, target_memory, req);
    layout_constraints.add_constraint(
      FieldConstraint(req.privilege_fields, false /*!contiguous*/));

    PhysicalInstance inst;
    bool created;
    bool ok = runtime->find_or_create_physical_instance(ctx, target_memory,
        layout_constraints, std::vector<LogicalRegion>(1, req.region),
        inst, created, true /*acquire*/);
    assert(ok);
    output.constraint_mappings[idx].push_back(inst);
  }
}

static void create_mappers(Machine machine, Runtime *runtime, const std::set<Processor> &local_procs)
{
  std::vector<Processor>* procs_list = new std::vector<Processor>();
  std::vector<Memory>* sysmems_list = new std::vector<Memory>();
  std::map<Memory, std::vector<Processor> >* sysmem_local_procs =
    new std::map<Memory, std::vector<Processor> >();
#if SPMD_SHARD_USE_IO_PROC
  std::map<Memory, std::vector<Processor> >* sysmem_local_io_procs =
    new std::map<Memory, std::vector<Processor> >();
#endif
  std::map<Processor, Memory>* proc_sysmems = new std::map<Processor, Memory>();
  std::map<Processor, Memory>* proc_regmems = new std::map<Processor, Memory>();


  std::vector<Machine::ProcessorMemoryAffinity> proc_mem_affinities;
  machine.get_proc_mem_affinity(proc_mem_affinities);

  for (unsigned idx = 0; idx < proc_mem_affinities.size(); ++idx) {
    Machine::ProcessorMemoryAffinity& affinity = proc_mem_affinities[idx];
    if (affinity.p.kind() == Processor::LOC_PROC ||
        affinity.p.kind() == Processor::IO_PROC) {
      if (affinity.m.kind() == Memory::SYSTEM_MEM) {
        (*proc_sysmems)[affinity.p] = affinity.m;
        if (proc_regmems->find(affinity.p) == proc_regmems->end())
          (*proc_regmems)[affinity.p] = affinity.m;
      }
      else if (affinity.m.kind() == Memory::REGDMA_MEM)
        (*proc_regmems)[affinity.p] = affinity.m;
    }
  }

  for (std::map<Processor, Memory>::iterator it = proc_sysmems->begin();
       it != proc_sysmems->end(); ++it) {
    if (it->first.kind() == Processor::LOC_PROC) {
      procs_list->push_back(it->first);
      (*sysmem_local_procs)[it->second].push_back(it->first);
    }
#if SPMD_SHARD_USE_IO_PROC
    else if (it->first.kind() == Processor::IO_PROC) {
      (*sysmem_local_io_procs)[it->second].push_back(it->first);
    }
#endif
  }

  for (std::map<Memory, std::vector<Processor> >::iterator it =
        sysmem_local_procs->begin(); it != sysmem_local_procs->end(); ++it)
    sysmems_list->push_back(it->first);

  for (std::set<Processor>::const_iterator it = local_procs.begin();
        it != local_procs.end(); it++)
  {
    TaskBenchMapper* mapper = new TaskBenchMapper(runtime->get_mapper_runtime(),
                                                  machine, *it, "task_bench_mapper",
                                                  procs_list,
                                                  sysmems_list,
                                                  sysmem_local_procs,
#if SPMD_SHARD_USE_IO_PROC
                                                  sysmem_local_io_procs,
#endif
                                                  proc_sysmems,
                                                  proc_regmems);
    runtime->replace_default_mapper(mapper, *it);
  }
}

void register_mappers()
{
  Runtime::add_registration_callback(create_mappers);
}
