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

using namespace Realm;

// Hack: Track argc/argv in globals to avoid needing to serialize arguments to top_level task.
static int global_argc = 0;
static char **global_argv = NULL;

enum {
  TOP_LEVEL_TASK           = Processor::TASK_ID_FIRST_AVAILABLE + 0,
  SHARD_TASK               = Processor::TASK_ID_FIRST_AVAILABLE + 1,
  DUMMY_TASK               = Processor::TASK_ID_FIRST_AVAILABLE + 2,
};

enum {
  REDOP_MIN = 11,
  REDOP_MAX = 12,
};

enum {
  FID_INPUT = 101,
  FID_OUTPUT = 102,
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

DECLARE_REDUCTION(RedopMin, double, int, std::min, std::min, DBL_MAX)
DECLARE_REDUCTION(RedopMax, double, int, std::max, std::max, DBL_MIN)

#undef DECLARE_REDUCTION

RegionInstance create_instance(Processor p)
{
  RegionInstance inst = RegionInstance::NO_INST;
  Realm::Machine::MemoryQuery mq(Machine::get_machine());
  mq.has_affinity_to(p);
  mq.only_kind(Realm::Memory::Kind::SYSTEM_MEM);
  Realm::Memory memory = mq.first();
  Rect1 bounds(0, 16-1);
  std::map<FieldID, size_t> field_sizes;
  field_sizes[FID_INPUT] = sizeof(char);
  field_sizes[FID_OUTPUT] = sizeof(char);
  RegionInstance::create_instance(inst, memory, bounds, field_sizes,
                                  0 /*SOA*/, ProfilingRequestSet())
    .wait();
  return inst;
}


Event copy(RegionInstance src_inst, RegionInstance dst_inst, FieldID fid,
           Event wait_for)
{
  CopySrcDstField src_field;
  src_field.inst = src_inst;
  src_field.field_id = fid;
  src_field.size = sizeof(char);

  std::vector<CopySrcDstField> src_fields;
  src_fields.push_back(src_field);

  CopySrcDstField dst_field;
  dst_field.inst = dst_inst;
  dst_field.field_id = fid;
  dst_field.size = sizeof(char);

  std::vector<CopySrcDstField> dst_fields;
  dst_fields.push_back(dst_field);
  return dst_inst.get_indexspace<1, coord_t>().copy(
      src_fields, dst_fields, ProfilingRequestSet(), wait_for);
}

void dummy_task(const void *args, size_t arglen, const void *userdata,
                size_t userlen, Processor p)
{
}

void shard_task(const void *args, size_t arglen, const void *userdata,
                size_t userlen, Processor p)
{
  assert(arglen == sizeof(ShardArgs));
  const ShardArgs &a =
      *reinterpret_cast<const ShardArgs *>(args);

  Barrier sync = a.sync;
  double start_time = 0.0;
  double stop_time = 0.0;
  for (long iter = 0; iter < 2; iter++) {
    sync.arrive(1);
    sync.wait();
    sync = sync.advance_barrier();

    std::vector<Event> events;

    Event last_task = Event::NO_EVENT;
#define CHAIN_COPIES_EVENTS
#if defined(CHAIN_BARRIERS)
    Barrier last_barrier = Barrier::create_barrier(1);
#endif
#if defined(CHAIN_COPIES_EVENTS)
    RegionInstance src_inst = create_instance(p);
    RegionInstance dst_inst = create_instance(p);
#endif
    for (long timestep = 0L; timestep < a.timesteps; timestep++) {
#if defined(CHAIN_NONE)
      events.push_back(p.spawn(DUMMY_TASK, NULL, 0, last_task));
#elif defined(CHAIN_EVENTS)
      last_task = p.spawn(DUMMY_TASK, NULL, 0, last_task);
#elif defined(CHAIN_BARRIERS)
      last_task = p.spawn(DUMMY_TASK, NULL, 0, last_barrier.get_previous_phase());
      last_barrier.arrive(1, last_task);
      last_barrier = last_barrier.advance_barrier();
#elif defined(CHAIN_COPIES_EVENTS)
      Event last_copy = copy(src_inst, dst_inst, FID_INPUT, last_task);
      last_task = p.spawn(DUMMY_TASK, NULL, 0, last_copy);
#else
#error no case defined
#endif
    }

    events.push_back(last_task);

    start_time = Realm::Clock::current_time_in_nanoseconds()/1e9;
    Event::merge_events(events).wait();
    stop_time = Realm::Clock::current_time_in_nanoseconds()/1e9;
  }

  a.first_start.arrive(1, Event::NO_EVENT, &start_time, sizeof(start_time));
  a.last_start.arrive(1, Event::NO_EVENT, &start_time, sizeof(start_time));
  a.first_stop.arrive(1, Event::NO_EVENT, &stop_time, sizeof(stop_time));
  a.last_stop.arrive(1, Event::NO_EVENT, &stop_time, sizeof(stop_time));
}

void needs_argument(int i, int argc, const char *flag) {
  if (i+1 >= argc) {
    fprintf(stderr, "error: Flag \"%s\" requires an argument\n", flag);
    abort();
  }
}

void top_level_task(const void *args, size_t arglen, const void *userdata,
                    size_t userlen, Processor p)
{
  assert(global_argc > 0 && global_argv != NULL);

  long timesteps = 4;
  for (int i = 1; i < global_argc; i++) {
    if (!strcmp(global_argv[i], "-steps")) {
      needs_argument(i, global_argc, "-steps");
      long value = atol(global_argv[++i]);
      if (value <= 0) {
        fprintf(stderr, "error: Invalid flag \"-steps %ld\" must be > 0\n", value);
        abort();
      }
      timesteps = value;
    }
  }


  Machine machine = Machine::get_machine();

  std::vector<Processor> procs;
  {
    Machine::ProcessorQuery query(machine);
    query.only_kind(Processor::LOC_PROC);
    procs.insert(procs.end(), query.begin(), query.end());
  }

  Barrier sync_bar = Barrier::create_barrier(procs.size());

  Barrier first_start_bar =
      Barrier::create_barrier(procs.size(), REDOP_MIN, &RedopMin::identity,
                              sizeof(RedopMin::identity));
  Barrier last_start_bar =
      Barrier::create_barrier(procs.size(), REDOP_MAX, &RedopMax::identity,
                              sizeof(RedopMax::identity));
  Barrier first_stop_bar =
      Barrier::create_barrier(procs.size(), REDOP_MIN, &RedopMin::identity,
                              sizeof(RedopMin::identity));
  Barrier last_stop_bar =
      Barrier::create_barrier(procs.size(), REDOP_MAX, &RedopMax::identity,
                              sizeof(RedopMax::identity));

  std::vector<Event> events;
  for (auto proc : procs) {
    ShardArgs args;
    args.timesteps = timesteps;
    args.sync = sync_bar;
    args.first_start = first_start_bar;
    args.last_start = last_start_bar;
    args.first_stop = first_stop_bar;
    args.last_stop = last_stop_bar;
    events.push_back(proc.spawn(SHARD_TASK, &args, sizeof(ShardArgs)));
  }
  Event::merge_events(events).wait();

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

  long long num_tasks = procs.size() * timesteps;
  double elapsed_seconds = last_stop - first_start;


  printf("    Task Graph %d:\n", 0);
  printf("      Time Steps: %ld\n", timesteps);
  printf("      Max Width: %ld\n", procs.size());
  printf("      Dependence Type: %s\n", "trivial");
  printf("      Radix: %ld\n", 0L);
  printf("      Period: %ld\n", 0L);
  printf("      Fraction Connected: %f\n", 0.0);
  printf("      Kernel:\n");
  printf("        Type: %s\n", "empty");
  printf("        Iterations: %ld\n", 1L);
  printf("      Output Bytes: %lu\n", 0LU);
  printf("      Scratch Bytes: %lu\n", 0LU);

  printf("Total Tasks %lld\n", num_tasks);
  printf("Total Dependencies %lld\n", 0LL);
  printf("Total FLOPs %lld\n", 0LL);
  printf("Total Bytes %lld\n", 0LL);
  printf("Elapsed Time %e seconds\n", elapsed_seconds);
  printf("FLOP/s %e\n", 0.0);
  printf("B/s %e\n", 0.0);
}

int main(int argc, char **argv)
{
  Runtime rt;

  rt.init(&argc, &argv);

  rt.register_task(TOP_LEVEL_TASK, top_level_task);
  rt.register_task(SHARD_TASK, shard_task);
  rt.register_task(DUMMY_TASK, dummy_task);
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
