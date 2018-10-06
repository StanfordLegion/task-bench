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
  CREATE_BARRIER_TASK,
  CREATE_BARRIER_DONE_TASK,
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
        long last_field_dset = graph.dependence_set_at_timestep(timestep - num_fields);

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
              printf("t %ld g %ld p %ld fid %ld slot %ld dep %ld precondition " IDFMT "\n",
                     timestep, graph_index, point, last_fid, n_inputs, dep,
                     ready.get_previous_phase().id);
              Event postcondition = Event::NO_EVENT;

              if (dep >= last_offset && dep < last_offset + last_width) {
                char *data = result_base.at(graph_index).at(dep).at(last_fid - FID_FIRST);
                if (data) {
                  // Data available locally
                } else if (point >= offset && point < offset + width) {
                  printf("copy\n");
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
              printf("WAR_OUT t %ld g %ld p %ld fid %ld dep %ld POSTCONDITION " IDFMT "\n",
                     timestep, graph_index, point, last_fid, dep,
                     war_out.at(graph_index).at(point - first_point).at(last_fid - FID_FIRST).at(dep).id);
              postconditions.push_back(
                std::pair<Event, Barrier *>(
                  postcondition,
                  &war_out.at(graph_index).at(point - first_point).at(last_fid - FID_FIRST).at(dep)));
            }
          }
          printf("t %ld g %ld p %ld n_inputs %ld\n",
                 timestep, graph_index, point, n_inputs);

          // WAR dependencies
          for (auto interval : graph.reverse_dependencies(last_field_dset, point)) {
            for (long dep = interval.first; dep <= interval.second; ++dep) {
              Barrier &ready = war_in.at(graph_index).at(point - first_point).at(fid - FID_FIRST).at(dep);
              printf("WAR_IN  t %ld g %ld p %ld fid %ld dep %ld precondition " IDFMT "\n",
                     timestep, graph_index, point, fid, dep, ready.get_previous_phase().id);
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
              printf("t %ld g %ld p %ld dep %ld complete " IDFMT "\n",
                     timestep, graph_index, point, dep, complete.id);
            }
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
            leaf_args.scratch_ptr = NULL;
            leaf_args.scratch_bytes = 0;
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

#if 0
void comm_task(const void *args, size_t arglen, const void *userdata,
               size_t userlen, Processor p)
{
  CommArgs a = *(CommArgs *)args;
  args = (CommArgs *)args + 1;
  TaskGraph graph = *(TaskGraph *)args;
  args = (TaskGraph *)args + 1;
  char **input_ptrs = (char **)(args);
  size_t *input_bytes = (size_t *)(input_ptrs + a.num_deps);

  /* Execute Kernel */
  graph.execute_point(a.timestep, a.taskid, a.output_ptr, a.output_bytes,
                      (const char **)input_ptrs, input_bytes, a.num_deps,
                      a.scratch_ptr, a.scratch_bytes);
}

void shard_task(const void *args, size_t arglen, const void *userdata,
                size_t userlen, Processor p)
{
  std::vector<std::vector<std::vector<std::vector<std::vector<Barrier> > > > >
      graph_recv_bars;
  std::vector<std::vector<std::vector<std::vector<RegionInstance> > > >
      tasks_for_each_graph;
  std::vector<TaskGraph> graphs;
  std::vector<std::vector<std::vector<std::pair<long, long> > > >
      graph_dependencies;
  std::vector<std::vector<std::vector<std::pair<long, long> > > >
      graph_rev_deps;
  std::vector<std::vector<std::vector<size_t> > > graph_input_bytes;
  std::vector<std::vector<long> > num_deps_per_graph;
  std::vector<std::vector<long> > num_rev_deps_per_graph;
  ShardArgs a;
  long num_tasks;
  deserialize_byte_array(a, graph_recv_bars, tasks_for_each_graph, graphs, args,
                         num_tasks);
  long taskid = a.taskid;
  for (size_t i = 0; i < graphs.size(); i++) {
    TaskGraph graph = graphs[i];
    size_t output_bytes = graph.output_bytes_per_task;
    std::vector<long> num_deps_total;
    std::vector<long> num_rev_deps_total;
    std::vector<std::vector<std::pair<long, long> > > all_dependencies;
    std::vector<std::vector<std::pair<long, long> > > all_rev_dependencies;
    std::vector<std::vector<size_t> > all_input_bytes;

    for (long dset = 0; dset < graph.max_dependence_sets(); dset++) {
      all_dependencies.push_back(graph.dependencies(dset, taskid));
      all_rev_dependencies.push_back(graph.reverse_dependencies(dset, taskid));

      long num_deps = num_dependencies(graph, dset, taskid);
      long num_rev_deps = num_rev_dependencies(graph, dset, taskid);
      std::vector<size_t> input_bytes;
      for (long count = 0; count < num_deps; count++)
        input_bytes.push_back(output_bytes);
      all_input_bytes.push_back(input_bytes);
      num_deps_total.push_back(num_deps);
      num_rev_deps_total.push_back(num_rev_deps);
    }

    graph_dependencies.push_back(all_dependencies);
    graph_rev_deps.push_back(all_rev_dependencies);
    graph_input_bytes.push_back(all_input_bytes);
    num_deps_per_graph.push_back(num_deps_total);
    num_rev_deps_per_graph.push_back(num_rev_deps_total);
  }

  std::vector<std::vector<char> > scratch_ptrs;
  for (size_t i = 0; i < graphs.size(); i++) {
    size_t scratch_bytes = graphs[i].scratch_bytes_per_task;
    scratch_ptrs.emplace_back(scratch_bytes);
  }

  Barrier share_barrier = Barrier::NO_BARRIER;
  Barrier sync = a.sync;
  double start_time = 0.0;
  double time_elapsed = 0.0;
  for (long iter = 0; iter < 2; iter++) {
    sync.arrive(1);
    sync.wait();
    sync = sync.advance_barrier();
    std::vector<Event> events;
    std::vector<Barrier> output_barriers(NUM_OUTPUT_REGIONS,
                                         Barrier::NO_BARRIER);

    for (size_t graph_num = 0; graph_num < graphs.size(); graph_num++) {
      TaskGraph graph = graphs[graph_num];
      size_t output_bytes = graph.output_bytes_per_task;

      for (long timestep = 0L; timestep < graph.timesteps; timestep++) {
        long dset = graph.dependence_set_at_timestep(timestep);
        long new_dset = graph.dependence_set_at_timestep(timestep + 1);
        long new_k_input = (timestep + 1) % NUM_INPUT_REGIONS;
        long k_input = timestep % NUM_INPUT_REGIONS;
        CommArgs args;
        args.num_deps = num_deps_per_graph[graph_num][dset];

        /* If not in the graph at timestep, just advance the barriers */
        if (taskid < graph.width_at_timestep(timestep) +
                         graph.offset_at_timestep(timestep) &&
            taskid >= graph.offset_at_timestep(timestep)) {
          args.taskid = taskid;
          args.timestep = timestep;
          args.output_bytes = output_bytes;
          args.scratch_bytes = scratch_ptrs[graph_num].size();
          args.scratch_ptr = scratch_ptrs[graph_num].data();
          long output_region_index = (timestep % NUM_OUTPUT_REGIONS) + 1;
          RegionInstance output_region = tasks_for_each_graph
              [graph_num][taskid][new_dset]
              [tasks_for_each_graph[graph_num][taskid][new_dset].size() -
               output_region_index];

          /* Populate the output_ptr of the CommArgs */
          get_base(output_region, args.output_ptr);

          /* Create the byte_array for comm_task - can all just return
           * byte_array*/
          size_t size_of_byte_array = get_byte_array_size(args.num_deps);
          std::vector<char *> input_ptrs_array;
          create_input_array(tasks_for_each_graph[graph_num][taskid][dset],
                             input_ptrs_array, k_input, args.num_deps);
          void *byte_array = serialize_comm_array(
              args, graph, input_ptrs_array, graph_input_bytes[graph_num][dset],
              size_of_byte_array);

          /* Start synchronized launches */
          std::vector<Event> recv_barriers = create_recv_barriers(
              graph_recv_bars[graph_num][taskid][dset][IN_INDEX], graph,
              timestep, output_barriers[output_region_index - 1], k_input,
              args.num_deps, taskid);

          /* Execute Point */
          Event executed_point =
              p.spawn(COMM_TASK, byte_array,
                      sizeof(CommArgs) + size_of_byte_array + sizeof(TaskGraph),
                      timestep != 0 ? Event::merge_events(recv_barriers)
                                    : Event::NO_EVENT);
          events.push_back(executed_point);

          /* Signal to dependencies that you are ready to recv again */

          long loop_dset =
              graph.dependence_set_at_timestep(timestep + NUM_INPUT_REGIONS);
          for (auto interval : graph_dependencies[graph_num][loop_dset]) {
            for (long inter = interval.first; inter <= interval.second;
                 inter++) {
              long index = alt_find_index(inter, graph, taskid, loop_dset);
              assert(index != -1);
              long num_rev_deps = num_rev_dependencies(graph, loop_dset, inter);

              if (timestep + NUM_INPUT_REGIONS <= graph.timesteps)
                graph_recv_bars[graph_num][inter][loop_dset][OUT_INDEX]
                               [index + (k_input * num_rev_deps)]
                                   .arrive(1, executed_point);
            }
          }
          /* Find and create output locations */
          std::vector<RegionInstance> output_locations;
          long num_outputs = num_rev_deps_per_graph[graph_num][new_dset];
          output_barriers[output_region_index - 1] =
              num_outputs != 0 ? Barrier::create_barrier(num_outputs)
                               : Barrier::NO_BARRIER;
          get_output_locations(output_locations,
                               tasks_for_each_graph[graph_num],
                               graph_rev_deps[graph_num][new_dset], graph,
                               taskid, new_dset, new_k_input);

          /* Copy to every reverse dependency */
          if (iter == 1 && timestep == graph.timesteps - 1) break;
          long index = 0;
          for (auto interval : graph_rev_deps[graph_num][new_dset]) {
            for (long inter = interval.first; inter <= interval.second;
                 inter++) {
              /* If task is out of bounds in the next timestep, do not copy to
               * it */
              if (inter < graph.width_at_timestep(timestep + 1) +
                              graph.offset_at_timestep(timestep + 1) &&
                  inter >= graph.offset_at_timestep(timestep + 1)) {
                long num_rev_deps = num_rev_deps_per_graph[graph_num][new_dset];
                long inter_num_deps = num_dependencies(graph, new_dset, inter);

                if (timestep < NUM_INPUT_REGIONS - 1)
                  graph_recv_bars[graph_num][taskid][new_dset][OUT_INDEX]
                                 [index + (new_k_input * num_rev_deps)]
                                     .arrive(1, share_barrier);
                Event copy_done = copy(
                    output_region, output_locations[index], FID_INPUT,
                    Event::merge_events(
                        graph_recv_bars[graph_num][taskid][new_dset][OUT_INDEX]
                                       [index + (new_k_input * num_rev_deps)],
                        executed_point));
                events.push_back(copy_done);
                long recv_index = find_index(inter, graph, taskid, new_dset);
                graph_recv_bars[graph_num][inter][new_dset][IN_INDEX]
                               [recv_index + (new_k_input * inter_num_deps)]
                                   .arrive(1, copy_done);
                output_barriers[output_region_index - 1].arrive(1, copy_done);
              } else {
                long recv_index = find_index(inter, graph, taskid, new_dset);
                long inter_num_deps = num_dependencies(graph, new_dset, inter);
                graph_recv_bars[graph_num][inter][new_dset][IN_INDEX]
                               [recv_index + (new_k_input * inter_num_deps)]
                                   .arrive(1, share_barrier);
                share_barrier =
                    graph_recv_bars[graph_num][inter][new_dset][IN_INDEX]
                                   [recv_index +
                                    (new_k_input * inter_num_deps)];
              }
              index++;
            }
          }
        } else {
          // this needs to be looped dset, even though fft doesn't use this
          // section
          for (auto interval : graph_dependencies[graph_num][new_dset]) {
            for (long inter = interval.first; inter <= interval.second;
                 inter++) {
              long index = alt_find_index(inter, graph, taskid, new_dset);
              long num_rev_deps = num_rev_dependencies(graph, new_dset, inter);
              if (inter < graph.width_at_timestep(timestep + NUM_INPUT_REGIONS -
                                                  1) +
                              graph.offset_at_timestep(timestep +
                                                       NUM_INPUT_REGIONS - 1) &&
                  inter >= graph.offset_at_timestep(timestep +
                                                    NUM_INPUT_REGIONS - 1) &&
                  (timestep + NUM_INPUT_REGIONS - 1 < graph.timesteps))
                graph_recv_bars[graph_num][inter][new_dset][OUT_INDEX]
                               [index + (k_input * num_rev_deps)]
                                   .arrive(1, share_barrier);
            }
          }
          long index = 0;
          for (auto interval : graph_rev_deps[graph_num][new_dset]) {
            for (long inter = interval.first; inter <= interval.second;
                 inter++) {
              long num_rev_deps = num_rev_dependencies(graph, new_dset, taskid);
              if (timestep < NUM_INPUT_REGIONS - 1 ||
                  inter >= graph.width_at_timestep(timestep + 1 -
                                                   NUM_INPUT_REGIONS) +
                               graph.offset_at_timestep(timestep + 1 -
                                                        NUM_INPUT_REGIONS) ||
                  inter < graph.offset_at_timestep(
                              timestep + 1 -
                              NUM_INPUT_REGIONS))  // if i didnt do it before,
                                                   // mark this k as arrived,
                                                   // could be taskid, not inter
              {
                // this will take processor time
                graph_recv_bars[graph_num][taskid][new_dset][OUT_INDEX]
                               [index + (new_k_input * num_rev_deps)]
                                   .arrive(
                                       1, share_barrier);  // double arrive on 0
                share_barrier =
                    graph_recv_bars[graph_num][taskid][new_dset][OUT_INDEX]
                                   [index + (new_k_input * num_rev_deps)];
                index++;
              }
            }
          }
          if (iter == 1 && timestep == graph.timesteps - 1) break;

          index = 0;
          for (auto interval : graph_rev_deps[graph_num][new_dset]) {
            for (long inter = interval.first; inter <= interval.second;
                 inter++) {
              long recv_index = find_index(inter, graph, taskid, new_dset);
              long inter_num_deps = num_dependencies(graph, new_dset, inter);
              graph_recv_bars[graph_num][inter][new_dset][IN_INDEX]
                             [recv_index + (new_k_input * inter_num_deps)]
                                 .arrive(1, share_barrier);
              // share_barrier =
              // graph_recv_bars[graph_num][inter][new_dset][IN_INDEX][recv_index
              // + (new_k_input * inter_num_deps)];
              index++;
            }
          }
        }
        /* Advance local copy of every barrier */
        for (long task_num = 0; task_num < graph.max_width; task_num++) {
          for (long cur_dset = 0; cur_dset < graph.max_dependence_sets();
               cur_dset++) {
            for (long in_out = OUT_INDEX; in_out <= IN_INDEX; in_out++) {
              if (in_out == IN_INDEX) {
                long cur_num_deps = num_dependencies(graph, cur_dset, task_num);
                for (long dep_num = 0; dep_num < cur_num_deps; dep_num++) {
                  if (task_num == taskid && cur_dset != new_dset)
                    graph_recv_bars[graph_num][task_num][cur_dset][IN_INDEX]
                                   [dep_num + (new_k_input * cur_num_deps)]
                                       .arrive(1, share_barrier);
                  // this will actually take processor time

                  graph_recv_bars[graph_num][task_num][cur_dset][IN_INDEX]
                                 [dep_num + (new_k_input * cur_num_deps)] =
                                     graph_recv_bars[graph_num][task_num]
                                                    [cur_dset][IN_INDEX]
                                                    [dep_num + (new_k_input *
                                                                cur_num_deps)]
                                                        .advance_barrier();
                }
              } else {
                long cur_num_rev_deps =
                    num_rev_dependencies(graph, cur_dset, task_num);
                for (long dep_num = 0; dep_num < cur_num_rev_deps; dep_num++) {
                  if (task_num == taskid && cur_dset != new_dset)
                    graph_recv_bars[graph_num][task_num][cur_dset][OUT_INDEX]
                                   [dep_num + (new_k_input * cur_num_rev_deps)]
                                       .arrive(1, share_barrier);

                  graph_recv_bars[graph_num][task_num][cur_dset][OUT_INDEX]
                                 [dep_num + (new_k_input * cur_num_rev_deps)] =
                                     graph_recv_bars[graph_num][task_num]
                                                    [cur_dset][OUT_INDEX]
                                                    [dep_num +
                                                     (new_k_input *
                                                      cur_num_rev_deps)]
                                                        .advance_barrier();
                }
              }
            }
          }
        }
      }
    }
    start_time = Timer::get_cur_time();
    Event::merge_events(events).wait();
    time_elapsed = Timer::get_cur_time();
  }
  // printf("taskid: %d, total_time: %f\n", taskid, time_elapsed - start_time);
  a.first_start.arrive(1, Event::NO_EVENT, &start_time, sizeof(start_time));
  a.last_start.arrive(1, Event::NO_EVENT, &start_time, sizeof(start_time));
  a.first_stop.arrive(1, Event::NO_EVENT, &time_elapsed, sizeof(time_elapsed));
  a.last_stop.arrive(1, Event::NO_EVENT, &time_elapsed, sizeof(time_elapsed));
}
#endif

void create_barrier_done_task(const void *args, size_t arglen,
                             const void *userdata, size_t userlen, Processor p)
{
  assert(arglen == sizeof(CreateBarrierDoneArgs));
  const CreateBarrierDoneArgs &a =
      *reinterpret_cast<const CreateBarrierDoneArgs *>(args);

  // We had better be on the destination proc, otherwise these
  // pointer won't be valid.
  assert(a.dest_proc == p);
  *a.dest_barrier = a.barrier;
}

void create_barrier_task(const void *args, size_t arglen, const void *userdata,
                        size_t userlen, Processor p)
{
  assert(arglen == sizeof(CreateBarrierArgs));
  const CreateBarrierArgs &a = *reinterpret_cast<const CreateBarrierArgs *>(args);

  Barrier barrier = Barrier::create_barrier(a.expected_arrivals);

  // Send the instance back to the requesting node
  // Important: Don't return until this is complete
  CreateBarrierDoneArgs done;
  done.barrier = barrier;
  done.dest_proc = a.dest_proc;
  done.dest_barrier = a.dest_barrier;
  a.dest_proc.spawn(CREATE_BARRIER_DONE_TASK, &done, sizeof(done)).wait();
}

#if 0
void top_level_task(const void *args, size_t arglen, const void *userdata,
                    size_t userlen, Processor p)
{
  assert(global_argc > 0 && global_argv != NULL);
  App app(global_argc, global_argv);
  app.display();

  auto graphs = app.graphs;

  Machine machine = Machine::get_machine();

  std::vector<Processor> procs;
  {
    Machine::ProcessorQuery query(machine);
    query.only_kind(Processor::LOC_PROC);
    procs.insert(procs.end(), query.begin(), query.end());
  }

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

  long graph_max_width = procs.size();

  std::map<FieldID, size_t> field_sizes;
  field_sizes[FID_INPUT] = sizeof(char);
  field_sizes[FID_OUTPUT] = sizeof(char);

  // can wrap this whole thing in a k-loop
  std::vector<Event> events;
  /* Vector has one location for every dependency for each dset + one for output
   * at end */
  size_t size_of_byte_array = 0;
  std::vector<std::vector<std::vector<std::vector<std::vector<Barrier> > > > >
      graph_recv_bars;
  std::vector<std::vector<std::vector<std::vector<RegionInstance> > > >
      tasks_for_each_graph;
  for (auto graph : graphs) {
    graph_max_width = graph.max_width;  // won't work for multiple graphs
    std::vector<std::vector<std::vector<std::vector<Barrier> > > >
        task_recv_bars(graph.max_width);
    std::vector<std::vector<std::vector<RegionInstance> > > tasks_for_each_task(
        graph.max_width);
    size_t output_bytes = graph.output_bytes_per_task;
    for (long taskid = 0; taskid < graph.max_width; taskid++) {
      long num_dsets = graph.max_dependence_sets();
      std::vector<std::vector<std::vector<Barrier> > > recv_bars(num_dsets);
      std::vector<std::vector<RegionInstance> > tasks_for_each_dset(num_dsets);
      for (long dset = 0; dset < num_dsets; dset++) {
        Processor shard_proc(procs[(taskid * procs.size()) / graph_max_width]);
        Memory memory(proc_regmems[shard_proc]);

        long num_deps = num_dependencies(graph, dset, taskid);
        long num_rev_deps = num_rev_dependencies(graph, dset, taskid);
        std::vector<RegionInstance> task_instances(
            (num_deps * NUM_INPUT_REGIONS) + NUM_OUTPUT_REGIONS,
            RegionInstance::NO_INST);
        std::vector<std::vector<Barrier> > out_in_barriers;
        for (long index = OUT_INDEX; index <= IN_INDEX; index++) {
          long num_bars = (index == IN_INDEX ? num_deps : num_rev_deps) * NUM_INPUT_REGIONS;
          std::vector<Barrier> barriers(num_bars);
          for (long bar_num = 0; bar_num < num_bars; bar_num++) {
            CreateBarrierArgs args;
            args.expected_arrivals = 1;
            args.dest_proc = p;
            args.dest_barrier = &barriers[bar_num];
            events.push_back(
              shard_proc.spawn(CREATE_BARRIER_TASK, &args, sizeof(args)));
            size_of_byte_array += sizeof(Barrier);
          }
          out_in_barriers.emplace_back();
          out_in_barriers.back().swap(barriers);
        }
        recv_bars[dset].swap(out_in_barriers);

        Rect1 input_bounds(Point1(0), Point1(output_bytes - 1));

        // create instance for each dependency (num_deps *
        // output_bytes_per_task)
        for (long count = 0;
             count < (num_deps * NUM_INPUT_REGIONS) + NUM_OUTPUT_REGIONS;
             count++)  // add one for output
        {
          CreateRegionArgs args;
          args.bounds = input_bounds;
          args.memory = memory;
          args.dest_proc = p;
          args.dest_inst = &task_instances[count];
          events.push_back(
              shard_proc.spawn(CREATE_REGION_TASK, &args, sizeof(args)));
          size_of_byte_array += sizeof(RegionInstance);
        }

        tasks_for_each_dset[dset].swap(task_instances);
      }
      task_recv_bars[taskid].swap(recv_bars);
      tasks_for_each_task[taskid].swap(tasks_for_each_dset);
    }
    graph_recv_bars.emplace_back();
    graph_recv_bars.back().swap(task_recv_bars);

    tasks_for_each_graph.emplace_back();
    tasks_for_each_graph.back().swap(tasks_for_each_task);
  }
  Event::merge_events(events).wait();

  Barrier sync_bar = Barrier::create_barrier(graph_max_width);

  Barrier first_start_bar =
      Barrier::create_barrier(graph_max_width, REDOP_MIN, &RedopMin::identity,
                              sizeof(RedopMin::identity));
  Barrier last_start_bar =
      Barrier::create_barrier(graph_max_width, REDOP_MAX, &RedopMax::identity,
                              sizeof(RedopMax::identity));
  Barrier first_stop_bar =
      Barrier::create_barrier(graph_max_width, REDOP_MIN, &RedopMin::identity,
                              sizeof(RedopMin::identity));
  Barrier last_stop_bar =
      Barrier::create_barrier(graph_max_width, REDOP_MAX, &RedopMax::identity,
                              sizeof(RedopMax::identity));

  size_of_byte_array += (graphs.size() * sizeof(TaskGraph));
  size_of_byte_array += (2 * sizeof(long));
  std::vector<Event> spawn_events;

  for (long taskid = 0; taskid < graph_max_width; taskid++) {
    ShardArgs args;
    args.taskid = taskid;
    args.sync = sync_bar;
    args.first_start = first_start_bar;
    args.last_start = last_start_bar;
    args.first_stop = first_stop_bar;
    args.last_stop = last_stop_bar;
    void *byte_array =
        serialized_array(args, graph_recv_bars, tasks_for_each_graph,
                         size_of_byte_array, graphs, graph_max_width);
    Processor shard_proc(procs[(taskid * procs.size()) / graph_max_width]);
    spawn_events.push_back(shard_proc.spawn(
        SHARD_TASK, byte_array, sizeof(ShardArgs) + size_of_byte_array));
    // free byte array
  }
  Event::merge_events(spawn_events).wait();
  // or free all byte arrays here

  double first_start;
  {
    first_start_bar.wait();
#ifndef NDEBUG
    bool ok =
#endif
      first_start_bar.get_result(&first_start, sizeof(first_start));
    assert(ok);
  }

  double last_start;
  {
    last_start_bar.wait();
#ifndef NDEBUG
    bool ok =
#endif
      last_start_bar.get_result(&last_start, sizeof(last_start));
    assert(ok);
  }

  double first_stop;
  {
    first_stop_bar.wait();
#ifndef NDEBUG
    bool ok =
#endif
      first_stop_bar.get_result(&first_stop, sizeof(first_stop));
    assert(ok);
  }

  double last_stop;
  {
    last_stop_bar.wait();
#ifndef NDEBUG
    bool ok =
#endif
      last_stop_bar.get_result(&last_stop, sizeof(last_stop));
    assert(ok);
  }

  app.report_timing(last_stop - first_start);
}
#endif

int main(int argc, char **argv)
{
  Runtime rt;

  rt.init(&argc, &argv);

  rt.register_task(TOP_LEVEL_TASK, top_level_task);
  rt.register_task(CREATE_BARRIER_TASK, create_barrier_task);
  rt.register_task(CREATE_BARRIER_DONE_TASK, create_barrier_done_task);
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
