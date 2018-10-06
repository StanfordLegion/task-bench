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

void shard_task(const void *args, size_t arglen, const void *userdata,
               size_t userlen, Processor p)
{
  ShardArgs a;
  std::vector<TaskGraph> graphs;
  std::vector<std::vector<RegionInstance> > task_results;
  std::vector<std::vector<RegionInstance> > raw_exchange;
  std::vector<std::vector<RegionInstance> > war_exchange;
  {
    FixedBufferDeserializer ser(args, arglen);
    ser >> a;
    ser >> graphs;
    ser >> task_results;
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

  // Perform barrier exchange.
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

  // Create local input regions

  // graph -> point -> max deps
  std::vector<std::vector<long> > max_deps(graphs.size());
  long all_max_deps = 0;
  for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
    auto graph = graphs.at(graph_index);

    long first_point = proc_index * graph.max_width / num_procs;
    long last_point = (proc_index + 1) * graph.max_width / num_procs - 1;

    max_deps.at(graph_index).resize(last_point - first_point + 1, 0);

    for (long point = first_point; point <= last_point; ++point) {
      long max_dset = graph.max_dependence_sets();
      for (long dset = 0; dset < max_dset; ++dset) {
        long deps = 0;
        for (auto interval : graph.dependencies(dset, point)) {
          deps += interval.second - interval.first + 1;
        }
        max_deps.at(graph_index).at(point - first_point) = std::max(
          max_deps.at(graph_index).at(point - first_point),
          deps);
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
      long deps = max_deps.at(graph_index).at(point - first_point);

      inputs.at(graph_index).at(point - first_point).resize(deps);
      input_base.at(graph_index).at(point - first_point).resize(deps);

      for (long dep = 0; dep < deps; ++dep) {
        RegionInstance &inst = inputs.at(graph_index).at(point - first_point).at(dep);
        RegionInstance::create_instance(inst, sysmem, bounds, field_sizes,
                                        0 /*SOA*/, ProfilingRequestSet())
          .wait();

        input_base.at(graph_index).at(point - first_point).at(dep).resize(num_fields);
        for (long fid = FID_FIRST; fid < FID_FIRST + num_fields; ++fid) {
          input_base.at(graph_index).at(point - first_point).at(dep).at(fid - FID_FIRST) =
            get_base(inst, fid);
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
  std::vector<Event> preconditions;
  std::vector<std::pair<Event, Barrier *> > postconditions;
  for (long rep = 0; rep < 1; ++rep) {
    start_time = Clock::current_time_in_nanoseconds();
    for (size_t graph_index = 0; graph_index < graphs.size(); ++graph_index) {
      auto graph = graphs.at(graph_index);

      std::fill(input_bytes.begin(), input_bytes.end(), graph.output_bytes_per_task);

      long first_point = proc_index * graph.max_width / num_procs;
      long last_point = (proc_index + 1) * graph.max_width / num_procs - 1;

      for (long timestep = 0; timestep < graph.timesteps; ++timestep) {
        long dset = graph.dependence_set_at_timestep(timestep);
        long next_dset = graph.dependence_set_at_timestep(timestep + 1);
        long last_field_dset = graph.dependence_set_at_timestep(std::max(timestep - num_fields + 1, 0L));

        long offset = graph.offset_at_timestep(timestep);
        long width = graph.width_at_timestep(timestep);

        long last_offset = graph.offset_at_timestep(timestep-1);
        long last_width = graph.width_at_timestep(timestep-1);

        long fid = FID_FIRST + timestep % num_fields;
        long last_fid = FID_FIRST + (timestep + num_fields - 1) % num_fields;

        for (long point = first_point; point <= last_point; ++point) {
          // Copy inputs
          long n_inputs = 0;
          preconditions.clear();
          postconditions.clear();
          for (auto interval : graph.dependencies(dset, point)) {
            for (long dep = interval.first; dep <= interval.second; ++dep) {
              Barrier &ready = raw_in.at(graph_index).at(point - first_point).at(last_fid - FID_FIRST).at(dep);
              Event precondition = ready.get_previous_phase();
              Event postcondition = Event::NO_EVENT;

              if (dep >= last_offset && dep < last_offset + last_width) {
                char *data = result_base.at(graph_index).at(dep).at(last_fid - FID_FIRST);
                if (data) {
                  // Data available locally
                } else if (point >= offset && point < offset + width) {
                  // Only copy if data is remote and needed for task execution
                  precondition = postcondition = copy(
                    task_results.at(graph_index).at(dep),
                    inputs.at(graph_index).at(point - first_point).at(n_inputs),
                    last_fid, graph.output_bytes_per_task,
                    precondition);
                  data = input_base.at(graph_index).at(point - first_point).at(n_inputs).at(last_fid - FID_FIRST);
                }
                input_ptr.at(n_inputs) = reinterpret_cast<uintptr_t>(data);
                n_inputs++;
              }

              preconditions.push_back(precondition);
              postconditions.push_back(
                std::pair<Event, Barrier *>(
                  postcondition,
                  &war_out.at(graph_index).at(point - first_point).at(last_fid - FID_FIRST).at(dep)));
            }
          }
          // Also need to arrive at any points not included in this
          // dset, otherwise we'll deadlock.
          for (long dep : raw_points_not_in_dset.at(graph_index).at(point - first_point).at(dset)) {
            war_out.at(graph_index).at(point - first_point).at(last_fid - FID_FIRST).at(dep).arrive(1);
          }

          // WAR dependencies
          for (auto interval : graph.reverse_dependencies(last_field_dset, point)) {
            for (long dep = interval.first; dep <= interval.second; ++dep) {
              Barrier &ready = war_in.at(graph_index).at(point - first_point).at(fid - FID_FIRST).at(dep);
              preconditions.push_back(ready.get_previous_phase());
            }
          }

          // RAW dependencies
          for (auto interval : graph.reverse_dependencies(next_dset, point)) {
            for (long dep = interval.first; dep <= interval.second; ++dep) {
              Barrier &complete = raw_out.at(graph_index).at(point - first_point).at(fid - FID_FIRST).at(dep);
              postconditions.push_back(
                std::pair<Event, Barrier *>(
                  Event::NO_EVENT,
                  &complete));
            }
          }
          // Also need to arrive at any points not included in this
          // dset, otherwise we'll deadlock.
          for (long dep : war_points_not_in_dset.at(graph_index).at(point - first_point).at(next_dset)) {
            raw_out.at(graph_index).at(point - first_point).at(fid - FID_FIRST).at(dep).arrive(1);
          }

          // Launch task
          Event task_postcondition = Event::NO_EVENT;
          if (point >= offset && point < offset + width) {
            LeafArgs leaf_args;
            leaf_args.point = point;
            leaf_args.timestep = timestep;
            leaf_args.graph = graph;
            leaf_args.output_ptr = result_base.at(graph_index).at(point).at(fid - FID_FIRST);
            leaf_args.output_bytes = graph.output_bytes_per_task;
            leaf_args.scratch_ptr = scratch_ptr;
            leaf_args.scratch_bytes = graph.scratch_bytes_per_task;
            leaf_args.n_inputs = n_inputs;

            FixedBufferSerializer ser(leaf_buffer, leaf_bufsize);
            ser << leaf_args;
            ser << input_ptr;
            ser << input_bytes;
            assert(ser.bytes_left() == 0);

            task_postcondition =
              p.spawn(LEAF_TASK, leaf_buffer, leaf_bufsize,
                      Event::merge_events(preconditions));

            // FIXME: Figure out which tasks we actually need to wait on
            events.push_back(task_postcondition);
          }

          for (auto trigger : postconditions) {
            Event src = trigger.first;
            if (src == Event::NO_EVENT) {
              src = task_postcondition;
            }
            Barrier *dst = trigger.second;
            dst->arrive(1, src);
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
