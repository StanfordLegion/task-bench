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

#include "main.h"

#include <algorithm>
#include <climits>
#include <vector>

#include <float.h>

#include "realm.h"

#include "core.h"

using namespace Realm;
using namespace Realm::Serialization;

TYPE_IS_SERIALIZABLE(TaskGraph);

// Hack: Track argc/argv in globals to avoid needing to serialize arguments to top_level task.
static int global_argc = 0;
static char **global_argv = NULL;

enum {
  TOP_LEVEL_TASK = Processor::TASK_ID_FIRST_AVAILABLE,
  SHARD_TASK,
  LEAF_TASK,
};

enum {
  REDOP_MIN = 11,
  REDOP_MAX = 12,
};

enum {
  FID_FIRST = 100,
};

#define DECLARE_REDUCTION(CLASS, T, U, APPLY_OP, FOLD_OP, ID)                  \
  class CLASS {                                                                \
  public:                                                                      \
    typedef T LHS, RHS;                                                        \
    template <bool EXCLUSIVE>                                                  \
    static void apply(LHS &lhs, RHS rhs);                                      \
    template <bool EXCLUSIVE>                                                  \
    static void fold(RHS &rhs1, RHS rhs2);                                     \
    static const T identity;                                                   \
  };                                                                           \
                                                                               \
  const T CLASS::identity = ID;                                                \
                                                                               \
  template <>                                                                  \
  void CLASS::apply<true>(LHS & lhs, RHS rhs)                                  \
  {                                                                            \
    lhs = APPLY_OP(lhs, rhs);                                                  \
  }                                                                            \
                                                                               \
  template <>                                                                  \
  void CLASS::apply<false>(LHS & lhs, RHS rhs)                                 \
  {                                                                            \
    volatile U *target = (U *)&(lhs);                                          \
    union {                                                                    \
      U as_U;                                                                  \
      T as_T;                                                                  \
    } oldval, newval;                                                          \
    do {                                                                       \
      oldval.as_U = *target;                                                   \
      newval.as_T = APPLY_OP(oldval.as_T, rhs);                                \
    } while (!__sync_bool_compare_and_swap(target, oldval.as_U, newval.as_U)); \
  }                                                                            \
                                                                               \
  template <>                                                                  \
  void CLASS::fold<true>(RHS & rhs1, RHS rhs2)                                 \
  {                                                                            \
    rhs1 = FOLD_OP(rhs1, rhs2);                                                \
  }                                                                            \
                                                                               \
  template <>                                                                  \
  void CLASS::fold<false>(RHS & rhs1, RHS rhs2)                                \
  {                                                                            \
    volatile U *target = (U *)&rhs1;                                           \
    union {                                                                    \
      U as_U;                                                                  \
      T as_T;                                                                  \
    } oldval, newval;                                                          \
    do {                                                                       \
      oldval.as_U = *target;                                                   \
      newval.as_T = FOLD_OP(oldval.as_T, rhs2);                                \
    } while (!__sync_bool_compare_and_swap(target, oldval.as_U, newval.as_U)); \
  }

DECLARE_REDUCTION(RedopMin, unsigned long long, unsigned long long,
                  std::min, std::min, std::numeric_limits<unsigned long long>::max())
DECLARE_REDUCTION(RedopMax, unsigned long long, unsigned long long,
                  std::max, std::max, std::numeric_limits<unsigned long long>::min())

#undef DECLARE_REDUCTION

Event copy(RegionInstance src_inst, RegionInstance dst_inst, FieldID fid,
           size_t value_size, Event wait_for)
{
  CopySrcDstField src_field;
  src_field.inst = src_inst;
  src_field.field_id = fid;
  src_field.size = value_size;

  std::vector<CopySrcDstField> src_fields;
  src_fields.push_back(src_field);

  CopySrcDstField dst_field;
  dst_field.inst = dst_inst;
  dst_field.field_id = fid;
  dst_field.size = value_size;

  std::vector<CopySrcDstField> dst_fields;
  dst_fields.push_back(dst_field);

  return dst_inst.get_indexspace<1, coord_t>().copy(
      src_fields, dst_fields, ProfilingRequestSet(), wait_for);
}

SubgraphDefinition::CopyDesc copy_desc(RegionInstance src_inst, RegionInstance dst_inst, FieldID fid,
                                       size_t value_size)
{
  CopySrcDstField src_field;
  src_field.inst = src_inst;
  src_field.field_id = fid;
  src_field.size = value_size;

  std::vector<CopySrcDstField> src_fields;
  src_fields.push_back(src_field);

  CopySrcDstField dst_field;
  dst_field.inst = dst_inst;
  dst_field.field_id = fid;
  dst_field.size = value_size;

  std::vector<CopySrcDstField> dst_fields;
  dst_fields.push_back(dst_field);

  SubgraphDefinition::CopyDesc copy;
  copy.space = dst_inst.get_indexspace<1, coord_t>();
  copy.srcs = src_fields;
  copy.dsts = dst_fields;
  copy.prs = ProfilingRequestSet();

  return copy;
}

Event fill(RegionInstance dst_inst, FieldID fid,
           const void *value, size_t value_size,
           Event wait_for)
{
  CopySrcDstField dst_field;
  dst_field.inst = dst_inst;
  dst_field.field_id = fid;
  dst_field.size = value_size;

  std::vector<CopySrcDstField> dst_fields;
  dst_fields.push_back(dst_field);
  return dst_inst.get_indexspace<1, coord_t>().fill(
      dst_fields, ProfilingRequestSet(), value, value_size, wait_for);
}

char *get_base(RegionInstance inst, FieldID fid)
{
  AffineAccessor<char, 1, coord_t> acc =
      AffineAccessor<char, 1, coord_t>(inst, fid);
  return reinterpret_cast<char *>(
      acc.ptr(inst.get_indexspace<1, coord_t>().bounds.lo));
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
  return a * b / ::gcd(a, b);
}

void leaf_task(const void *args, size_t arglen, const void *userdata,
               size_t userlen, Processor p)
{
  LeafArgs a;
  std::vector<uintptr_t> input_ptr;
  std::vector<size_t> input_bytes;
  {
    FixedBufferDeserializer ser(args, arglen);
    ser >> a;
    ser >> input_ptr;
    ser >> input_bytes;
    assert(ser.bytes_left() == 0);
  }

  a.graph.execute_point(a.timestep, a.point,
                        a.output_ptr, a.output_bytes,
                        (const char **)input_ptr.data(), (size_t *)input_bytes.data(), a.n_inputs,
                        a.scratch_ptr, a.scratch_bytes);
}

static Event define_subgraph(Subgraph &subgraph,
                             bool replayable,
                             Processor p,
                             const TaskGraph &graph, size_t graph_index,
                             long start_timestep, long stop_timestep,
                             long first_point, long last_point,
                             long num_fields,
                             const std::vector<std::vector<RegionInstance> > &task_results,
                             const std::vector<std::vector<std::map<long, std::vector<RegionInstance> > > > &remote_inputs,
                             const std::vector<std::vector<std::vector<std::map<long, long> > > > &remote_input_slot,
                             const std::vector<std::vector<std::vector<std::vector<long> > > > &raw_points_not_in_dset,
                             const std::vector<std::vector<std::vector<std::vector<long> > > > &war_points_not_in_dset,
                             const std::vector<std::vector<std::vector<char *> > > &result_base,
                             const std::vector<std::vector<std::vector<std::vector<char *> > > > &input_base,
                             std::vector<uintptr_t> &input_ptr,
                             const std::vector<size_t> &input_bytes,
                             char *scratch_ptr,
                             void *leaf_buffer,
                             size_t leaf_bufsize)
{
  // Things that have to be interpolated into the subgraph on each instantiation:
  //   * LeafArgs (field: timestep; other fields are constant)
  //   * Barriers

  // Since the instantiation code is going to deterministically walk
  // the arguments in the same order (??) the only thing we need to do
  // here is track where that expected offset is going to be in the
  // global subgraph args so that we can specify the interpolation in
  // the subgraph definition.

  SubgraphDefinition definition;

  // Keep a running count of bytes serialized in the global subgraph argument buffer.
  ByteCountSerializer global_ser;

  // Certain fields are going to be used over and over, so serialize
  // them once up front and track their locations for interpolation.
  std::vector<size_t> global_timestep_offset;
  size_t global_timestep_bytes = sizeof(long);
  for (long timestep = start_timestep; timestep < stop_timestep; ++timestep) {
    global_timestep_offset.push_back(global_ser.bytes_used());
    global_ser << timestep;
  }

  std::vector<size_t> preconditions;
  size_t next_precondition = 0;

  for (long timestep = start_timestep; timestep < stop_timestep; ++timestep) {
    long dset = graph.dependence_set_at_timestep(timestep);
    long next_dset = graph.dependence_set_at_timestep(timestep + 1);
    long last_field_dset = graph.dependence_set_at_timestep(std::max(timestep - num_fields + 1, 0L));

    long offset = graph.offset_at_timestep(timestep);
    long width = graph.width_at_timestep(timestep);

    long last_offset = graph.offset_at_timestep(timestep-1);
    long last_width = graph.width_at_timestep(timestep-1);

    long next_offset = graph.offset_at_timestep(timestep+1);
    long next_width = graph.width_at_timestep(timestep+1);

    long fid = FID_FIRST + timestep % num_fields;
    long last_fid = FID_FIRST + (timestep + num_fields - 1) % num_fields;

    for (long point = first_point; point <= last_point; ++point) {
      // Gather inputs
      long n_inputs = 0, slot = 0;
      preconditions.clear();
      for (auto interval : graph.dependencies(dset, point)) {
        for (long dep = interval.first; dep <= interval.second; ++dep) {
          preconditions.push_back(next_precondition++);

          if (dep >= last_offset && dep < last_offset + last_width) {
            char *data = result_base.at(graph_index).at(dep).at(last_fid - FID_FIRST);
            if (point >= offset && point < offset + width) {
              if (data) {
                // Data available locally
              } else {
                // Data is remote
                data = input_base.at(graph_index).at(point - first_point).at(slot).at(last_fid - FID_FIRST);
              }
            }
            input_ptr.at(n_inputs) = reinterpret_cast<uintptr_t>(data);
            n_inputs++;
          }
          slot++;
        }
      }

      // Dependencies can occur in one of two ways:
      //  1. The dependent task is local, so copy is not necessary.
      //     (In this case the dependency catches on the task itself.)
      //  2. The dependent task is non-local, so copy is necessary.
      //     (In this case the dependency catches on the copy.)

      // WAR dependencies (part 1)
      for (auto interval : graph.reverse_dependencies(last_field_dset, point)) {
        for (long dep = interval.first; dep <= interval.second; ++dep) {
          if (dep >= next_offset && dep < next_offset + next_width) {
            // FIXME: This dependency is being generated too aggressively,
            // it's technically only supposed to apply when a copy
            // *wasn't* issued (i.e. the dependency is local), but doing
            // so somehow messed up the dependencies with the last use of
            // the same field.

            // Only copy when the dependent task doesn't live in the same address space.
            // if (first_point <= dep && dep <= last_point) {
              preconditions.push_back(next_precondition++);
            // }
          }
        }
      }

      // Launch task
      size_t task_postcondition = SIZE_MAX;
      if (point >= offset && point < offset + width) {
        LeafArgs leaf_args = {
          .point = point,
          .timestep = LONG_MIN, // to be interpolated
          .graph = graph,
          .output_ptr = result_base.at(graph_index).at(point).at(fid - FID_FIRST),
          .output_bytes = graph.output_bytes_per_task,
          .scratch_ptr = scratch_ptr,
          .scratch_bytes = graph.scratch_bytes_per_task,
          .n_inputs = n_inputs,
        };

        FixedBufferSerializer ser(leaf_buffer, leaf_bufsize);
        ser << leaf_args;
        ser << input_ptr;
        ser << input_bytes;
        assert(ser.bytes_left() == 0);

        SubgraphDefinition::TaskDesc task;
        task.proc = p;
        task.task_id = Processor::TaskFuncID(LEAF_TASK);
        task.args = ByteArray(leaf_buffer, leaf_bufsize);
        task.prs = ProfilingRequestSet();

        task_postcondition = definition.tasks.size();
        definition.tasks.push_back(task);

        SubgraphDefinition::Interpolation interp;
        interp.offset = global_timestep_offset.at(timestep - start_timestep);
        interp.bytes = global_timestep_bytes;
        interp.target_kind = SubgraphDefinition::Interpolation::TargetKind::TARGET_TASK_ARGS;
        interp.target_index = task_postcondition;
        interp.target_offset = offsetof(LeafArgs, timestep);
        interp.redop_id = 0;

        definition.interpolations.push_back(interp);

        for (auto precondition : preconditions) {
          SubgraphDefinition::Dependency precondition_dep;
          precondition_dep.src_op_kind = SubgraphDefinition::OpKind::OPKIND_EXT_PRECOND;
          precondition_dep.src_op_index = precondition;
          precondition_dep.src_op_port = 0;
          precondition_dep.tgt_op_kind = SubgraphDefinition::OpKind::OPKIND_TASK;
          precondition_dep.tgt_op_index = task_postcondition;
          precondition_dep.tgt_op_port = 0;

          definition.dependencies.push_back(precondition_dep);
        }
      }

      // WAR dependencies (part 2)
      // RAW dependencies
      for (auto interval : graph.reverse_dependencies(next_dset, point)) {
        for (long dep = interval.first; dep <= interval.second; ++dep) {
          // FIXME: This is currently handled at the task, see note above.
          // size_t ready_offset = global_ser.bytes_used();
          // global_ser << Barrier::NO_BARRIER;
          global_ser << Barrier::NO_BARRIER;
          size_t complete_offset = global_ser.bytes_used() - sizeof(Barrier);

          size_t copy_postcondition = SIZE_MAX;
          if (dep >= next_offset && dep < next_offset + next_width) {
            // Only copy when the dependent task doesn't live in the same address space.
            if (!result_base.at(graph_index).at(dep).at(fid - FID_FIRST)) {
              long slot = remote_input_slot.at(graph_index).at(point - first_point).at(next_dset).at(dep);
              copy_postcondition = definition.copies.size();
              definition.copies.push_back(copy_desc(
                task_results.at(graph_index).at(point),
                remote_inputs
                  .at(graph_index)
                  .at(point - first_point)
                  .at(dep)
                  .at(slot),
                fid, graph.output_bytes_per_task));

              if (task_postcondition != SIZE_MAX) {
                // SubgraphDefinition::Dependency ready_dep;
                // ready_dep.src_op_kind = SubgraphDefinition::OpKind::OPKIND_EXT_PRECOND;
                // ready_dep.src_op_index = ready;
                // ready_dep.src_op_port = 0;
                // ready_dep.tgt_op_kind = SubgraphDefinition::OpKind::OPKIND_COPY;
                // ready_dep.tgt_op_index = copy_postcondition;
                // ready_dep.tgt_op_port = 0;

                // definition.dependencies.push_back(ready_dep);

                SubgraphDefinition::Dependency task_dep;
                task_dep.src_op_kind = SubgraphDefinition::OpKind::OPKIND_TASK;
                task_dep.src_op_index = task_postcondition;
                task_dep.src_op_port = 0;
                task_dep.tgt_op_kind = SubgraphDefinition::OpKind::OPKIND_COPY;
                task_dep.tgt_op_index = copy_postcondition;
                task_dep.tgt_op_port = 0;

                definition.dependencies.push_back(task_dep);
              }
            }
          }

          SubgraphDefinition::ArrivalDesc arrival;
          arrival.barrier = Barrier::NO_BARRIER; // to be interpolated
          arrival.count = 1;
          arrival.reduce_value = ByteArray();

          size_t arrival_precondition = definition.arrivals.size();
          definition.arrivals.push_back(arrival);

          SubgraphDefinition::Interpolation interp;
          interp.offset = complete_offset;
          interp.bytes = sizeof(Barrier);
          interp.target_kind = SubgraphDefinition::Interpolation::TargetKind::TARGET_ARRIVAL_BARRIER;
          interp.target_index = arrival_precondition;
          interp.target_offset = 0;
          interp.redop_id = 0;

          definition.interpolations.push_back(interp);

          if (task_postcondition != SIZE_MAX) {
            SubgraphDefinition::Dependency arrival_dep;
            if (copy_postcondition != SIZE_MAX) {
              arrival_dep.src_op_kind = SubgraphDefinition::OpKind::OPKIND_COPY;
              arrival_dep.src_op_index = copy_postcondition;
            } else {
              arrival_dep.src_op_kind = SubgraphDefinition::OpKind::OPKIND_TASK;
              arrival_dep.src_op_index = task_postcondition;
            }
            arrival_dep.src_op_port = 0;
            arrival_dep.tgt_op_kind = SubgraphDefinition::OpKind::OPKIND_ARRIVAL;
            arrival_dep.tgt_op_index = arrival_precondition;
            arrival_dep.tgt_op_port = 0;

            definition.dependencies.push_back(arrival_dep);
          }
        }
      }
      // Also need to arrive at any points not included in this
      // dset, otherwise we'll deadlock.
      for (long dep : war_points_not_in_dset.at(graph_index).at(point - first_point).at(next_dset)) {
        (void)dep; // unused

        global_ser << Barrier::NO_BARRIER;
        size_t barrier_offset = global_ser.bytes_used() - sizeof(Barrier);

        SubgraphDefinition::ArrivalDesc arrival;
        arrival.barrier = Barrier::NO_BARRIER; // to be interpolated
        arrival.count = 1;
        arrival.reduce_value = ByteArray();

        size_t arrival_precondition = definition.arrivals.size();
        definition.arrivals.push_back(arrival);

        SubgraphDefinition::Interpolation interp;
        interp.offset = barrier_offset;
        interp.bytes = sizeof(Barrier);
        interp.target_kind = SubgraphDefinition::Interpolation::TargetKind::TARGET_ARRIVAL_BARRIER;
        interp.target_index = arrival_precondition;
        interp.target_offset = 0;
        interp.redop_id = 0;

        definition.interpolations.push_back(interp);

        // No dependency, it's an unconditional arrival
      }

      // WAR dependencies
      for (auto interval : graph.dependencies(dset, point)) {
        for (long dep = interval.first; dep <= interval.second; ++dep) {
          global_ser << Barrier::NO_BARRIER;
          size_t complete_offset = global_ser.bytes_used() - sizeof(Barrier);

          SubgraphDefinition::ArrivalDesc arrival;
          arrival.barrier = Barrier::NO_BARRIER, // to be interpolated
          arrival.count = 1;
          arrival.reduce_value = ByteArray();

          size_t arrival_precondition = definition.arrivals.size();
          definition.arrivals.push_back(arrival);

          SubgraphDefinition::Interpolation interp;
          interp.offset = complete_offset;
          interp.bytes = sizeof(Barrier);
          interp.target_kind = SubgraphDefinition::Interpolation::TargetKind::TARGET_ARRIVAL_BARRIER;
          interp.target_index = arrival_precondition;
          interp.target_offset = 0;
          interp.redop_id = 0;

          definition.interpolations.push_back(interp);

          if (task_postcondition != SIZE_MAX) {
            SubgraphDefinition::Dependency arrival_dep;
            arrival_dep.src_op_kind = SubgraphDefinition::OpKind::OPKIND_TASK;
            arrival_dep.src_op_index = task_postcondition;
            arrival_dep.src_op_port = 0;
            arrival_dep.tgt_op_kind = SubgraphDefinition::OpKind::OPKIND_ARRIVAL;
            arrival_dep.tgt_op_index = arrival_precondition;
            arrival_dep.tgt_op_port = 0;

            definition.dependencies.push_back(arrival_dep);
          }
        }
      }
      // Also need to arrive at any points not included in this
      // dset, otherwise we'll deadlock.
      for (long dep : raw_points_not_in_dset.at(graph_index).at(point - first_point).at(dset)) {
        (void)dep; // unused

        global_ser << Barrier::NO_BARRIER;
        size_t barrier_offset = global_ser.bytes_used() - sizeof(Barrier);

        SubgraphDefinition::ArrivalDesc arrival;
        arrival.barrier = Barrier::NO_BARRIER, // to be interpolated
        arrival.count = 1;
        arrival.reduce_value = ByteArray();

        size_t arrival_precondition = definition.arrivals.size();
        definition.arrivals.push_back(arrival);

        SubgraphDefinition::Interpolation interp;
        interp.offset = barrier_offset;
        interp.bytes = sizeof(Barrier);
        interp.target_kind = SubgraphDefinition::Interpolation::TargetKind::TARGET_ARRIVAL_BARRIER;
        interp.target_index = arrival_precondition;
        interp.target_offset = 0;
        interp.redop_id = 0;

        definition.interpolations.push_back(interp);

        // No dependency, it's an unconditional arrival
      }
    }
  }

  if (replayable) {
    definition.concurrency_mode = SubgraphDefinition::ConcurrencyMode::INSTANTIATION_ORDER;
  } else {
    definition.concurrency_mode = SubgraphDefinition::ConcurrencyMode::ONE_SHOT;
  }

  return Subgraph::create_subgraph(subgraph, definition, ProfilingRequestSet());
}

static Event instantiate_subgraph(Subgraph &subgraph,
                                  const Event &subgraph_ready,
                                  const TaskGraph &graph, size_t graph_index,
                                  long start_timestep, long stop_timestep,
                                  long first_point, long last_point,
                                  long num_fields,
                                  std::vector<std::vector<std::vector<std::map<long, Barrier> > > > &raw_in,
                                  std::vector<std::vector<std::vector<std::map<long, Barrier> > > > &war_in,
                                  std::vector<std::vector<std::vector<std::map<long, Barrier> > > > &raw_out,
                                  std::vector<std::vector<std::vector<std::map<long, Barrier> > > > &war_out,
                                  const std::vector<std::vector<std::vector<std::vector<long> > > > &raw_points_not_in_dset,
                                  const std::vector<std::vector<std::vector<std::vector<long> > > > &war_points_not_in_dset)
{
  DynamicBufferSerializer global_ser(4096); // FIXME: dynamic allocation

  for (long timestep = start_timestep; timestep < stop_timestep; ++timestep) {
    global_ser << timestep;
  }

  std::vector<Event> preconditions;

  for (long timestep = start_timestep; timestep < stop_timestep; ++timestep) {
    long dset = graph.dependence_set_at_timestep(timestep);
    long next_dset = graph.dependence_set_at_timestep(timestep + 1);
    long last_field_dset = graph.dependence_set_at_timestep(std::max(timestep - num_fields + 1, 0L));

    // long offset = graph.offset_at_timestep(timestep);
    // long width = graph.width_at_timestep(timestep);

    // long last_offset = graph.offset_at_timestep(timestep-1);
    // long last_width = graph.width_at_timestep(timestep-1);

    long next_offset = graph.offset_at_timestep(timestep+1);
    long next_width = graph.width_at_timestep(timestep+1);

    long fid = FID_FIRST + timestep % num_fields;
    long last_fid = FID_FIRST + (timestep + num_fields - 1) % num_fields;

    for (long point = first_point; point <= last_point; ++point) {
      // Gather inputs
      for (auto interval : graph.dependencies(dset, point)) {
        for (long dep = interval.first; dep <= interval.second; ++dep) {
          Barrier &ready = raw_in.at(graph_index).at(point - first_point).at(last_fid - FID_FIRST).at(dep);
          preconditions.push_back(ready.get_previous_phase());
        }
      }

      // Dependencies can occur in one of two ways:
      //  1. The dependent task is local, so copy is not necessary.
      //     (In this case the dependency catches on the task itself.)
      //  2. The dependent task is non-local, so copy is necessary.
      //     (In this case the dependency catches on the copy.)

      // WAR dependencies (part 1)
      for (auto interval : graph.reverse_dependencies(last_field_dset, point)) {
        for (long dep = interval.first; dep <= interval.second; ++dep) {
          Barrier &ready = war_in.at(graph_index).at(point - first_point).at(fid - FID_FIRST).at(dep);
          if (dep >= next_offset && dep < next_offset + next_width) {
            // FIXME: This dependency is being generated too aggressively,
            // it's technically only supposed to apply when a copy
            // *wasn't* issued (i.e. the dependency is local), but doing
            // so somehow messed up the dependencies with the last use of
            // the same field.

            // Only copy when the dependent task doesn't live in the same address space.
            // if (first_point <= dep && dep <= last_point) {
              preconditions.push_back(ready.get_previous_phase());
            // }
          }
        }
      }

      // Launch task

      // Nothing to do, already completely described by subgraph and interpolations

      // WAR dependencies (part 2)
      // RAW dependencies
      for (auto interval : graph.reverse_dependencies(next_dset, point)) {
        for (long dep = interval.first; dep <= interval.second; ++dep) {
          // FIXME: This is currently handled at the task, see note above.
          // Barrier &ready = war_in.at(graph_index).at(point - first_point).at(fid - FID_FIRST).at(dep);
          // global_ser << ready;
          Barrier &complete = raw_out.at(graph_index).at(point - first_point).at(fid - FID_FIRST).at(dep);
          global_ser << complete;

          // Nothing to do, already completely described by subgraph and interpolations
        }
      }
      // Also need to arrive at any points not included in this
      // dset, otherwise we'll deadlock.
      for (long dep : war_points_not_in_dset.at(graph_index).at(point - first_point).at(next_dset)) {
        Barrier &barrier = raw_out.at(graph_index).at(point - first_point).at(fid - FID_FIRST).at(dep);
        global_ser << barrier;
      }

      // WAR dependencies
      for (auto interval : graph.dependencies(dset, point)) {
        for (long dep = interval.first; dep <= interval.second; ++dep) {
          Barrier &complete = war_out.at(graph_index).at(point - first_point).at(last_fid - FID_FIRST).at(dep);
          global_ser << complete;
        }
      }
      // Also need to arrive at any points not included in this
      // dset, otherwise we'll deadlock.
      for (long dep : raw_points_not_in_dset.at(graph_index).at(point - first_point).at(dset)) {
        Barrier &barrier = war_out.at(graph_index).at(point - first_point).at(last_fid - FID_FIRST).at(dep);
        global_ser << barrier;
      }

      for (auto &bar : raw_in.at(graph_index).at(point - first_point).at(fid - FID_FIRST)) {
        bar.second = bar.second.advance_barrier();
      }

      for (auto &bar : raw_out.at(graph_index).at(point - first_point).at(fid - FID_FIRST)) {
        bar.second = bar.second.advance_barrier();
      }

      for (auto &bar : war_in.at(graph_index).at(point - first_point).at(last_fid - FID_FIRST)) {
        bar.second = bar.second.advance_barrier();
      }

      for (auto &bar : war_out.at(graph_index).at(point - first_point).at(last_fid - FID_FIRST)) {
        bar.second = bar.second.advance_barrier();
      }
    }
  }

  std::vector<Event> postconditions;
  return subgraph.instantiate(global_ser.get_buffer(), global_ser.bytes_used(),
                              ProfilingRequestSet(),
                              preconditions,
                              postconditions,
                              subgraph_ready);
}

void shard_task(const void *args, size_t arglen, const void *userdata,
                size_t userlen, Processor p)
{
  ShardArgs a;
  std::vector<TaskGraph> graphs;
  std::vector<std::vector<RegionInstance> > task_results;
  std::vector<std::vector<RegionInstance> > task_inputs;
  std::vector<std::vector<RegionInstance> > raw_exchange;
  std::vector<std::vector<RegionInstance> > war_exchange;
  {
    FixedBufferDeserializer ser(args, arglen);
    ser >> a;
    ser >> graphs;
    ser >> task_results;
    ser >> task_inputs;
    ser >> raw_exchange;
    ser >> war_exchange;

    assert(ser.bytes_left() == 0);
  }

  long proc_index = a.proc_index;
  long num_procs = a.num_procs;
  long num_fields = a.num_fields;
  Memory sysmem = a.sysmem;
  Memory regmem = a.regmem;
  Barrier sync = a.sync;
  Barrier first_start = a.first_start;
  Barrier last_start = a.last_start;
  Barrier first_stop = a.first_stop;
  Barrier last_stop = a.last_stop;

  // Figure out who we're going to be communicating with.

  // graph -> point -> [remote point]
  std::vector<std::vector<std::set<long> > > raw_exchange_points(graphs.size());
  std::vector<std::vector<std::set<long> > > war_exchange_points(graphs.size());

  // graph -> [remote point]
  std::vector<std::set<long> > raw_all_points(graphs.size());
  std::vector<std::set<long> > war_all_points(graphs.size());
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    auto graph = graphs.at(graph_index);

    long first_point = proc_index * graph.max_width / num_procs;
    long last_point = (proc_index + 1) * graph.max_width / num_procs - 1;

    raw_exchange_points.at(graph_index).resize(last_point - first_point + 1);
    war_exchange_points.at(graph_index).resize(last_point - first_point + 1);

    for (long point = first_point; point <= last_point; ++point) {
      long max_dset = graph.max_dependence_sets();
      for (long dset = 0; dset < max_dset; ++dset) {
        for (auto interval : graph.dependencies(dset, point)) {
          for (long dep = interval.first; dep <= interval.second; ++dep) {
            raw_exchange_points.at(graph_index).at(point - first_point).insert(dep);
            raw_all_points.at(graph_index).insert(dep);
          }
        }
        for (auto interval : graph.reverse_dependencies(dset, point)) {
          for (long dep = interval.first; dep <= interval.second; ++dep) {
            war_exchange_points.at(graph_index).at(point - first_point).insert(dep);
            war_all_points.at(graph_index).insert(dep);
          }
        }
      }
    }
  }

  // graph -> point -> dset -> [remote point]
  std::vector<std::vector<std::vector<std::vector<long> > > > raw_points_not_in_dset(graphs.size());
  std::vector<std::vector<std::vector<std::vector<long> > > > war_points_not_in_dset(graphs.size());
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    auto graph = graphs.at(graph_index);

    long first_point = proc_index * graph.max_width / num_procs;
    long last_point = (proc_index + 1) * graph.max_width / num_procs - 1;

    raw_points_not_in_dset.at(graph_index).resize(last_point - first_point + 1);
    war_points_not_in_dset.at(graph_index).resize(last_point - first_point + 1);

    for (long point = first_point; point <= last_point; ++point) {
      long max_dset = graph.max_dependence_sets();

      raw_points_not_in_dset.at(graph_index).at(point - first_point).resize(max_dset);
      war_points_not_in_dset.at(graph_index).at(point - first_point).resize(max_dset);

      for (long dset = 0; dset < max_dset; ++dset) {
        std::set<long> raw_points = raw_exchange_points.at(graph_index).at(point - first_point);
        std::set<long> war_points = war_exchange_points.at(graph_index).at(point - first_point);

        for (auto interval : graph.dependencies(dset, point)) {
          for (long dep = interval.first; dep <= interval.second; ++dep) {
            raw_points.erase(dep);
          }
        }
        for (auto interval : graph.reverse_dependencies(dset, point)) {
          for (long dep = interval.first; dep <= interval.second; ++dep) {
            war_points.erase(dep);
          }
        }

        raw_points_not_in_dset.at(graph_index).at(point - first_point).at(dset).assign(raw_points.begin(), raw_points.end());
        war_points_not_in_dset.at(graph_index).at(point - first_point).at(dset).assign(war_points.begin(), war_points.end());
      }
    }
  }

  // Create local input regions.

  // graph -> point -> max deps
  std::vector<std::vector<long> > max_deps(graphs.size());
  long all_max_deps = 0;
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    auto graph = graphs.at(graph_index);

    max_deps.at(graph_index).resize(graph.max_width, 0);

    for (long point = 0; point < graph.max_width; ++point) {
      long max_dset = graph.max_dependence_sets();
      for (long dset = 0; dset < max_dset; ++dset) {
        long deps = 0;
        for (auto interval : graph.dependencies(dset, point)) {
          deps += interval.second - interval.first + 1;
        }
        max_deps.at(graph_index).at(point) = std::max(max_deps.at(graph_index).at(point), deps);
        all_max_deps = std::max(all_max_deps, deps);
      }
    }
  }

  // graph -> point -> dep -> instance
  std::vector<std::vector<std::vector<RegionInstance> > > inputs(graphs.size());
  // graph -> point -> dep -> field -> base pointer
  std::vector<std::vector<std::vector<std::vector<char *> > > > input_base(graphs.size());
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    auto graph = graphs.at(graph_index);

    Rect1 bounds(Point1(0), Point1(graph.output_bytes_per_task - 1));

    std::map<FieldID, size_t> field_sizes;
    for (unsigned fid = FID_FIRST; fid < FID_FIRST + num_fields; ++fid) {
      field_sizes[fid] = sizeof(char);
    }

    long first_point = proc_index * graph.max_width / num_procs;
    long last_point = (proc_index + 1) * graph.max_width / num_procs - 1;

    inputs.at(graph_index).resize(last_point - first_point + 1);
    input_base.at(graph_index).resize(last_point - first_point + 1);

    for (long point = first_point; point <= last_point; ++point) {
      long deps = max_deps.at(graph_index).at(point);

      inputs.at(graph_index).at(point - first_point).resize(deps);
      input_base.at(graph_index).at(point - first_point).resize(deps);

      AffineAccessor<RegionInstance, 1, coord_t> task_input =
        AffineAccessor<RegionInstance, 1, coord_t>(task_inputs.at(graph_index).at(point), FID_FIRST);

      for (long dep = 0; dep < deps; ++dep) {
        RegionInstance &inst = inputs.at(graph_index).at(point - first_point).at(dep);
        RegionInstance::create_instance(inst, regmem, bounds, field_sizes,
                                        0 /*SOA*/, ProfilingRequestSet())
          .wait();

        input_base.at(graph_index).at(point - first_point).at(dep).resize(num_fields);
        for (long fid = FID_FIRST; fid < FID_FIRST + num_fields; ++fid) {
          input_base.at(graph_index).at(point - first_point).at(dep).at(fid - FID_FIRST) =
            get_base(inst, fid);
        }

        task_input[dep] = inst;
      }
      for (long dep = deps; dep < all_max_deps; ++dep) {
        task_input[dep] = RegionInstance::NO_INST;
      }
    }
  }

  // Create barriers.

  // graph -> point -> field -> remote point -> barrier
  std::vector<std::vector<std::vector<std::map<long, Barrier> > > > raw_in(graphs.size());
  std::vector<std::vector<std::vector<std::map<long, Barrier> > > > war_in(graphs.size());
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    auto graph = graphs.at(graph_index);

    long first_point = proc_index * graph.max_width / num_procs;
    long last_point = (proc_index + 1) * graph.max_width / num_procs - 1;

    raw_in.at(graph_index).resize(last_point - first_point + 1);
    war_in.at(graph_index).resize(last_point - first_point + 1);

    for (long point = first_point; point <= last_point; ++point) {
      auto &raw_points = raw_exchange_points.at(graph_index).at(point - first_point);
      auto &war_points = war_exchange_points.at(graph_index).at(point - first_point);

      raw_in.at(graph_index).at(point - first_point).resize(num_fields);
      war_in.at(graph_index).at(point - first_point).resize(num_fields);

      for (long fid = FID_FIRST; fid < FID_FIRST + num_fields; ++fid) {
        const Barrier no_barrier = Barrier::NO_BARRIER;
        fill(raw_exchange.at(graph_index).at(point), fid,
             &no_barrier, sizeof(no_barrier), Event::NO_EVENT)
          .wait();
        fill(war_exchange.at(graph_index).at(point), fid,
             &no_barrier, sizeof(no_barrier), Event::NO_EVENT)
          .wait();

        AffineAccessor<Barrier, 1, coord_t> raw =
          AffineAccessor<Barrier, 1, coord_t>(raw_exchange.at(graph_index).at(point), fid);
        AffineAccessor<Barrier, 1, coord_t> war =
          AffineAccessor<Barrier, 1, coord_t>(war_exchange.at(graph_index).at(point), fid);

        for (auto dep : raw_points) {
          Barrier bar = Barrier::create_barrier(1);
          raw_in.at(graph_index).at(point - first_point).at(fid - FID_FIRST)[dep] = bar;
          raw[dep] = bar;
        }
        for (auto dep : war_points) {
          Barrier bar = Barrier::create_barrier(1);
          war_in.at(graph_index).at(point - first_point).at(fid - FID_FIRST)[dep] = bar;
          war[dep] = bar;
        }
      }
    }
  }

  // Perform input region/barrier exchange.
  sync.arrive(1);
  sync.wait();
  sync = sync.advance_barrier();

  // graph -> remote point -> instance
  std::vector<std::map<long, RegionInstance> > raw_local_out(graphs.size());
  std::vector<std::map<long, RegionInstance> > war_local_out(graphs.size());
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    auto graph = graphs.at(graph_index);

    Rect1 bounds(Point1(0), Point1(graph.max_width - 1));

    std::map<FieldID, size_t> field_sizes;
    for (unsigned fid = FID_FIRST; fid < FID_FIRST + num_fields; ++fid) {
      field_sizes[fid] = sizeof(Barrier);
    }

    for (auto &dep : war_all_points.at(graph_index)) {
      RegionInstance inst;
      RegionInstance::create_instance(inst, sysmem, bounds, field_sizes,
                                      0 /*SOA*/, ProfilingRequestSet())
        .wait();
      raw_local_out.at(graph_index)[dep] = inst;
    }

    for (auto &dep : raw_all_points.at(graph_index)) {
      RegionInstance inst;
      RegionInstance::create_instance(inst, sysmem, bounds, field_sizes,
                                      0 /*SOA*/, ProfilingRequestSet())
        .wait();
      war_local_out.at(graph_index)[dep] = inst;
    }
  }

  std::vector<Event> events;
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    for (auto &dep : war_all_points.at(graph_index)) {
      for (long fid = FID_FIRST; fid < FID_FIRST + num_fields; ++fid) {
        events.push_back(
          copy(raw_exchange.at(graph_index).at(dep),
               raw_local_out.at(graph_index).at(dep),
               fid, sizeof(Barrier), Event::NO_EVENT));
      }
    }

    for (auto &dep : raw_all_points.at(graph_index)) {
      for (long fid = FID_FIRST; fid < FID_FIRST + num_fields; ++fid) {
        events.push_back(
          copy(war_exchange.at(graph_index).at(dep),
               war_local_out.at(graph_index).at(dep),
               fid, sizeof(Barrier), Event::NO_EVENT));
      }
    }
  }
  Event::merge_events(events).wait();
  events.clear();

  // graph -> point -> field -> remote point -> barrier
  std::vector<std::vector<std::vector<std::map<long, Barrier> > > > raw_out(graphs.size());
  std::vector<std::vector<std::vector<std::map<long, Barrier> > > > war_out(graphs.size());
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    auto graph = graphs.at(graph_index);

    long first_point = proc_index * graph.max_width / num_procs;
    long last_point = (proc_index + 1) * graph.max_width / num_procs - 1;

    raw_out.at(graph_index).resize(last_point - first_point + 1);
    war_out.at(graph_index).resize(last_point - first_point + 1);

    for (long point = first_point; point <= last_point; ++point) {
      auto &raw_points = raw_exchange_points.at(graph_index).at(point - first_point);
      auto &war_points = war_exchange_points.at(graph_index).at(point - first_point);

      raw_out.at(graph_index).at(point - first_point).resize(num_fields);
      war_out.at(graph_index).at(point - first_point).resize(num_fields);

      for (long fid = FID_FIRST; fid < FID_FIRST + num_fields; ++fid) {
        for (auto dep : war_points) {
          AffineAccessor<Barrier, 1, coord_t> raw =
            AffineAccessor<Barrier, 1, coord_t>(raw_local_out.at(graph_index).at(dep), fid);
          Barrier bar = raw[point];
          assert(bar != Barrier::NO_BARRIER);
          raw_out.at(graph_index).at(point - first_point).at(fid - FID_FIRST)[dep] = bar;
        }
        for (auto dep : raw_points) {
          AffineAccessor<Barrier, 1, coord_t> war =
            AffineAccessor<Barrier, 1, coord_t>(war_local_out.at(graph_index).at(dep), fid);
          Barrier bar = war[point];
          assert(bar != Barrier::NO_BARRIER);
          war_out.at(graph_index).at(point - first_point).at(fid - FID_FIRST)[dep] = bar;
        }
      }
    }
  }

  // graph -> remote point -> instance
  std::vector<std::map<long, RegionInstance> > remote_task_inputs(graphs.size());
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    Rect1 bounds(Point1(0), Point1(all_max_deps - 1));

    std::map<FieldID, size_t> field_sizes;
    field_sizes[FID_FIRST] = sizeof(RegionInstance);

    for (auto &dep : war_all_points.at(graph_index)) {
      RegionInstance inst;
      RegionInstance::create_instance(inst, sysmem, bounds, field_sizes,
                                      0 /*SOA*/, ProfilingRequestSet())
        .wait();
      remote_task_inputs.at(graph_index)[dep] = inst;
    }
  }

  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    for (auto &dep : war_all_points.at(graph_index)) {
      events.push_back(
        copy(task_inputs.at(graph_index).at(dep),
             remote_task_inputs.at(graph_index).at(dep),
             FID_FIRST, sizeof(RegionInstance), Event::NO_EVENT));
    }
  }
  Event::merge_events(events).wait();
  events.clear();

  // graph -> point -> remote point -> dep -> instance
  std::vector<std::vector<std::map<long, std::vector<RegionInstance> > > > remote_inputs(graphs.size());
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    auto graph = graphs.at(graph_index);

    long first_point = proc_index * graph.max_width / num_procs;
    long last_point = (proc_index + 1) * graph.max_width / num_procs - 1;

    remote_inputs.at(graph_index).resize(last_point - first_point + 1);

    for (long point = first_point; point <= last_point; ++point) {
      auto &war_points = war_exchange_points.at(graph_index).at(point - first_point);

      for (auto dep : war_points) {
        remote_inputs.at(graph_index).at(point - first_point)[dep].resize(all_max_deps);

        AffineAccessor<RegionInstance, 1, coord_t> remote_task_input =
          AffineAccessor<RegionInstance, 1, coord_t>(remote_task_inputs.at(graph_index).at(dep), FID_FIRST);

        for (long remote_dep = 0; remote_dep < all_max_deps; ++remote_dep) {
          RegionInstance inst = remote_task_input[remote_dep];
          remote_inputs.at(graph_index).at(point - first_point)[dep].at(remote_dep) = inst;
        }
      }
    }
  }

  // graph -> point -> dset -> remote point -> slot
  std::vector<std::vector<std::vector<std::map<long, long> > > > remote_input_slot(graphs.size());
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    auto graph = graphs.at(graph_index);

    long first_point = proc_index * graph.max_width / num_procs;
    long last_point = (proc_index + 1) * graph.max_width / num_procs - 1;

    remote_input_slot.at(graph_index).resize(last_point - first_point + 1);

    for (long point = first_point; point <= last_point; ++point) {
      long max_dset = graph.max_dependence_sets();

      remote_input_slot.at(graph_index).at(point - first_point).resize(max_dset);

      for (long dset = 0; dset < max_dset; ++dset) {
        for (auto interval : graph.reverse_dependencies(dset, point)) {
          for (long dep = interval.first; dep <= interval.second; ++dep) {
            long slot = 0;
            bool found = false;
            for (auto interval : graph.dependencies(dset, dep)) {
              for (long dep = interval.first; dep <= interval.second; ++dep) {
                if (point == dep) {
                  found = true;
                  break;
                }
                slot++;
              }
              if (found) break;
            }
            assert(found);
            remote_input_slot.at(graph_index).at(point - first_point).at(dset)[dep] = slot;
          }
        }
      }
    }
  }

  // graph -> point -> field -> base pointer
  std::vector<std::vector<std::vector<char *> > > result_base(graphs.size());
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    auto graph = graphs.at(graph_index);

    result_base.at(graph_index).resize(graph.max_width);

    for (long point = 0; point < graph.max_width; ++point) {

      result_base.at(graph_index).at(point).resize(num_fields, NULL);

      auto &inst = task_results.at(graph_index).at(point);
      if (inst.get_location() == sysmem || inst.get_location() == regmem) {
        for (long fid = FID_FIRST; fid < FID_FIRST + num_fields; ++fid) {
          result_base.at(graph_index).at(point).at(fid - FID_FIRST) =
            get_base(inst, fid);
        }
      }
    }
  }

  std::vector<uintptr_t> input_ptr(all_max_deps, 0);
  std::vector<size_t> input_bytes(all_max_deps, 0);

  size_t max_scratch_bytes = 0;
  for (auto graph : graphs) {
    max_scratch_bytes = std::max(max_scratch_bytes, graph.scratch_bytes_per_task);
  }

  // It's ok to use only a single scratch buffer because the tasks
  // will be effectively serialized on this processor.
  char *scratch_ptr = reinterpret_cast<char *>(malloc(max_scratch_bytes));
  assert(scratch_ptr);

  // Statically allocate buffer to use for task input
  size_t leaf_bufsize = 0;
  {
    LeafArgs leaf_args;
    ByteCountSerializer ser;
    ser << leaf_args;
    ser << input_ptr;
    ser << input_bytes;
    leaf_bufsize = ser.bytes_used();
  }
  void *leaf_buffer = malloc(leaf_bufsize);
  assert(leaf_buffer);

  // Sync again to avoid staggered start
  sync.arrive(1);
  sync.wait();
  sync = sync.advance_barrier();

  // Main loop
  unsigned long long start_time = 0, stop_time = 0;
  for (long rep = 0; rep < 1; ++rep) {
    start_time = Clock::current_time_in_nanoseconds();
    for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
      auto graph = graphs.at(graph_index);

      std::fill(input_bytes.begin(), input_bytes.end(), graph.output_bytes_per_task);

      long first_point = proc_index * graph.max_width / num_procs;
      long last_point = (proc_index + 1) * graph.max_width / num_procs - 1;

      // Currently we only generate a single subgraph per task graph,
      // and calculate a period such that we know it can be reused
      // (assuming the graph does not change offset/width over time).
      Subgraph subgraph = Subgraph::NO_SUBGRAPH;
      Event ready = Event::NO_EVENT;
      Event postcondition = Event::NO_EVENT;

      long period = lcm(num_fields, graph.timestep_period());

      for (long start_timestep = 0; start_timestep < graph.timesteps; start_timestep += period) {
        long stop_timestep = start_timestep + period;

        bool replay = stop_timestep <= graph.timesteps;

        // Currently we only generate subgraphs for full-width task graphs.
        if (replay) {
          for (long timestep = start_timestep - 1; timestep < stop_timestep + 1; ++timestep) {
            long offset = graph.offset_at_timestep(timestep);
            long width = graph.width_at_timestep(timestep);
            if (offset != 0 || width != graph.max_width) {
              replay = false;
              break;
            }
          }
        }

        stop_timestep = std::min(stop_timestep, graph.timesteps);

        Subgraph temp_subgraph = Subgraph::NO_SUBGRAPH;
        Event temp_ready = Event::NO_EVENT;

        Subgraph &current_subgraph = replay ? subgraph : temp_subgraph;
        Event &current_ready = replay ? ready : temp_ready;

        // Define the subgraph.
        if (!current_subgraph.exists()) {
          // FIXME: Am I actually required to track the ready event of this subgraph??
          current_ready = define_subgraph(current_subgraph,
                                          replay,
                                          p,
                                          graph, graph_index,
                                          start_timestep, stop_timestep,
                                          first_point, last_point,
                                          num_fields,
                                          task_results,
                                          remote_inputs,
                                          remote_input_slot,
                                          raw_points_not_in_dset,
                                          war_points_not_in_dset,
                                          result_base,
                                          input_base,
                                          input_ptr,
                                          input_bytes,
                                          scratch_ptr,
                                          leaf_buffer,
                                          leaf_bufsize);
        }

        // Replay the subgraph.
        postcondition = instantiate_subgraph(current_subgraph,
                                             current_ready,
                                             graph, graph_index,
                                             start_timestep, stop_timestep,
                                             first_point, last_point,
                                             num_fields,
                                             raw_in,
                                             war_in,
                                             raw_out,
                                             war_out,
                                             raw_points_not_in_dset,
                                             war_points_not_in_dset);
        events.push_back(postcondition);

        if (!replay) {
          current_subgraph.destroy(postcondition);
        }
      }

      if (!subgraph.exists()) {
        subgraph.destroy(postcondition);
      }
    }

    Event::merge_events(events).wait();
    events.clear();

    stop_time = Clock::current_time_in_nanoseconds();
  }

  first_start.arrive(1, Event::NO_EVENT, &start_time, sizeof(start_time));
  last_start.arrive(1, Event::NO_EVENT, &start_time, sizeof(start_time));
  first_stop.arrive(1, Event::NO_EVENT, &stop_time, sizeof(stop_time));
  last_stop.arrive(1, Event::NO_EVENT, &stop_time, sizeof(stop_time));

  free(leaf_buffer);
  free(scratch_ptr);
}

void top_level_task(const void *args, size_t arglen, const void *userdata,
                    size_t userlen, Processor p)
{
  assert(global_argv != NULL);
  App app(global_argc, global_argv);
  auto &graphs = app.graphs;

  const long num_fields = 5;

  app.display();

  Machine machine = Machine::get_machine();

  std::vector<Processor> procs;
  {
    Machine::ProcessorQuery query(machine);
    query.only_kind(Processor::LOC_PROC);
    procs.insert(procs.end(), query.begin(), query.end());
  }
  long num_procs = procs.size();

  std::map<Processor, Memory> proc_sysmems;
  std::map<Processor, Memory> proc_regmems;
  {
    std::vector<Machine::ProcessorMemoryAffinity> proc_mem_affinities;
    machine.get_proc_mem_affinity(proc_mem_affinities);

    for (size_t i = 0; i < proc_mem_affinities.size(); ++i) {
      Machine::ProcessorMemoryAffinity &affinity = proc_mem_affinities[i];
      if (affinity.p.kind() == Processor::LOC_PROC) {
        if (affinity.m.kind() == Memory::SYSTEM_MEM) {
          proc_sysmems[affinity.p] = affinity.m;
          if (proc_regmems.find(affinity.p) == proc_regmems.end())
            proc_regmems[affinity.p] = affinity.m;
        } else if (affinity.m.kind() == Memory::REGDMA_MEM)
          proc_regmems[affinity.p] = affinity.m;
      }
    }
  }

  long all_max_deps = 0;
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    auto graph = graphs.at(graph_index);

    for (long point = 0; point <= graph.max_width; ++point) {
      long max_dset = graph.max_dependence_sets();
      for (long dset = 0; dset < max_dset; ++dset) {
        long deps = 0;
        for (auto interval : graph.dependencies(dset, point)) {
          deps += interval.second - interval.first + 1;
        }
        all_max_deps = std::max(all_max_deps, deps);
      }
    }
  }

  std::vector<Event> events;
  std::vector<std::vector<RegionInstance> > task_results(graphs.size());
  {
    std::map<FieldID, size_t> field_sizes;
    for (unsigned fid = FID_FIRST; fid < FID_FIRST + num_fields; ++fid) {
      field_sizes[fid] = sizeof(char);
    }

    for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
      auto graph = graphs.at(graph_index);

      task_results.at(graph_index).resize(graph.max_width);

      Rect1 bounds(Point1(0), Point1(graph.output_bytes_per_task - 1));

      for (long proc_index = 0; proc_index < num_procs; ++proc_index) {
        auto proc = procs.at(proc_index);
        auto memory = proc_regmems.at(proc);

        long first_point = proc_index * graph.max_width / num_procs;
        long last_point = (proc_index + 1) * graph.max_width / num_procs - 1;
        for (long point = first_point; point <= last_point; ++point) {
          events.push_back(
            RegionInstance::create_instance(task_results.at(graph_index).at(point), memory, bounds, field_sizes,
                                            0 /*SOA*/, ProfilingRequestSet()));
        }
      }
    }
  }

  std::vector<std::vector<RegionInstance> > task_inputs(graphs.size());
  {
    std::map<FieldID, size_t> field_sizes;
    field_sizes[FID_FIRST] = sizeof(RegionInstance);

    for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
      auto graph = graphs.at(graph_index);

      task_inputs.at(graph_index).resize(graph.max_width);

      Rect1 bounds(Point1(0), Point1(all_max_deps - 1));

      for (long proc_index = 0; proc_index < num_procs; ++proc_index) {
        auto proc = procs.at(proc_index);
        auto memory = proc_regmems.at(proc);

        long first_point = proc_index * graph.max_width / num_procs;
        long last_point = (proc_index + 1) * graph.max_width / num_procs - 1;
        for (long point = first_point; point <= last_point; ++point) {
          events.push_back(
            RegionInstance::create_instance(task_inputs.at(graph_index).at(point), memory, bounds, field_sizes,
                                            0 /*SOA*/, ProfilingRequestSet()));
        }
      }
    }
  }

  std::vector<std::vector<RegionInstance> > raw_exchange(graphs.size());
  std::vector<std::vector<RegionInstance> > war_exchange(graphs.size());
  {
    std::map<FieldID, size_t> field_sizes;
    for (unsigned fid = FID_FIRST; fid < FID_FIRST + num_fields; ++fid) {
      field_sizes[fid] = sizeof(Barrier);
    }

    for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
      auto graph = graphs.at(graph_index);

      raw_exchange.at(graph_index).resize(graph.max_width);
      war_exchange.at(graph_index).resize(graph.max_width);

      Rect1 bounds(Point1(0), Point1(graph.max_width - 1));

      for (long proc_index = 0; proc_index < num_procs; ++proc_index) {
        auto proc = procs.at(proc_index);
        auto memory = proc_sysmems.at(proc);

        long first_point = proc_index * graph.max_width / num_procs;
        long last_point = (proc_index + 1) * graph.max_width / num_procs - 1;
        for (long point = first_point; point <= last_point; ++point) {
          events.push_back(
            RegionInstance::create_instance(raw_exchange.at(graph_index).at(point), memory, bounds, field_sizes,
                                            0 /*SOA*/, ProfilingRequestSet()));
          events.push_back(
            RegionInstance::create_instance(war_exchange.at(graph_index).at(point), memory, bounds, field_sizes,
                                            0 /*SOA*/, ProfilingRequestSet()));
        }
      }
    }
  }

  Event::merge_events(events).wait();
  events.clear();

  Barrier sync_bar = Barrier::create_barrier(num_procs);

  Barrier first_start_bar =
      Barrier::create_barrier(num_procs, REDOP_MIN, &RedopMin::identity,
                              sizeof(RedopMin::identity));
  Barrier last_start_bar =
      Barrier::create_barrier(num_procs, REDOP_MAX, &RedopMax::identity,
                              sizeof(RedopMax::identity));
  Barrier first_stop_bar =
      Barrier::create_barrier(num_procs, REDOP_MIN, &RedopMin::identity,
                              sizeof(RedopMin::identity));
  Barrier last_stop_bar =
      Barrier::create_barrier(num_procs, REDOP_MAX, &RedopMax::identity,
                              sizeof(RedopMax::identity));

  for (long proc_index = 0; proc_index < num_procs; ++proc_index) {
    auto proc = procs.at(proc_index);

    ShardArgs args;
    args.proc_index = proc_index;
    args.num_procs = num_procs;
    args.num_fields = num_fields;
    args.sysmem = proc_sysmems[proc];
    args.regmem = proc_regmems[proc];
    args.sync = sync_bar;
    args.first_start = first_start_bar;
    args.last_start = last_start_bar;
    args.first_stop = first_stop_bar;
    args.last_stop = last_stop_bar;

    DynamicBufferSerializer ser(4096);
    ser << args;
    ser << graphs;
    ser << task_results;
    ser << task_inputs;
    ser << raw_exchange;
    ser << war_exchange;
    events.push_back(
      proc.spawn(SHARD_TASK, ser.get_buffer(), ser.bytes_used()));
  }

  Event::merge_events(events).wait();
  events.clear();

  unsigned long long first_start;
  {
    first_start_bar.wait();
#ifndef NDEBUG
    bool ok =
#endif
      first_start_bar.get_result(&first_start, sizeof(first_start));
    assert(ok);
  }

  unsigned long long last_start;
  {
    last_start_bar.wait();
#ifndef NDEBUG
    bool ok =
#endif
      last_start_bar.get_result(&last_start, sizeof(last_start));
    assert(ok);
  }

  unsigned long long first_stop;
  {
    first_stop_bar.wait();
#ifndef NDEBUG
    bool ok =
#endif
      first_stop_bar.get_result(&first_stop, sizeof(first_stop));
    assert(ok);
  }

  unsigned long long last_stop;
  {
    last_stop_bar.wait();
#ifndef NDEBUG
    bool ok =
#endif
      last_stop_bar.get_result(&last_stop, sizeof(last_stop));
    assert(ok);
  }

  app.report_timing((last_stop - first_start)/1e9);
}

int main(int argc, char **argv)
{
  Runtime rt;

  rt.init(&argc, &argv);

  rt.register_task(TOP_LEVEL_TASK, top_level_task);
  rt.register_task(SHARD_TASK, shard_task);
  rt.register_task(LEAF_TASK, leaf_task);
  rt.register_reduction<RedopMin>(REDOP_MIN);
  rt.register_reduction<RedopMax>(REDOP_MAX);

  // select a processor to run the top level task on
  Processor p = Processor::NO_PROC;
  {
    Machine::ProcessorQuery query(Machine::get_machine());
    query.only_kind(Processor::LOC_PROC);
    p = query.first();
  }
  assert(p.exists());

  global_argc = argc;
  global_argv = argv;

  // collective launch of a single task - everybody gets the same finish event
  Event e = rt.collective_spawn(p, TOP_LEVEL_TASK, NULL, 0);
  // request shutdown once that task is complete
  rt.shutdown(e);

  // now sleep this thread until that shutdown actually happens
  rt.wait_for_shutdown();

  return 0;
}
