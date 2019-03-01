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
#include "timer.h"

#define OUT_INDEX 0
#define IN_INDEX 1
#define NUM_OUTPUT_REGIONS 5
#define NUM_INPUT_REGIONS 5

using namespace Realm;

// Hack: Track argc/argv in globals to avoid needing to serialize arguments to top_level task.
static int global_argc = 0;
static char **global_argv = NULL;

enum {
  TOP_LEVEL_TASK           = Processor::TASK_ID_FIRST_AVAILABLE + 0,
  CREATE_REGION_TASK       = Processor::TASK_ID_FIRST_AVAILABLE + 1,
  CREATE_REGION_DONE_TASK  = Processor::TASK_ID_FIRST_AVAILABLE + 2,
  CREATE_BARRIER_TASK      = Processor::TASK_ID_FIRST_AVAILABLE + 3,
  CREATE_BARRIER_DONE_TASK = Processor::TASK_ID_FIRST_AVAILABLE + 4,
  SHARD_TASK               = Processor::TASK_ID_FIRST_AVAILABLE + 5,
  COMM_TASK                = Processor::TASK_ID_FIRST_AVAILABLE + 6,
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

long num_dependencies(TaskGraph &graph, long dset, long taskid)
{
  long num_deps = 0;
  auto deps = graph.dependencies(dset, taskid);
  for (auto interval : deps) {
    for (long i = interval.first; i <= interval.second; i++) num_deps++;
  }
  return num_deps;
}

long num_rev_dependencies(TaskGraph &graph, long dset, long taskid)
{
  long num_deps = 0;
  auto deps = graph.reverse_dependencies(dset, taskid);
  for (auto interval : deps) {
    for (long i = interval.first; i <= interval.second; i++) num_deps++;
  }
  return num_deps;
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

void get_base(RegionInstance inst, char *&base)
{
  AffineAccessor<char, 1, coord_t> acc =
      AffineAccessor<char, 1, coord_t>(inst, FID_INPUT);
  base = reinterpret_cast<char *>(
      acc.ptr(inst.get_indexspace<1, coord_t>().bounds.lo));
}

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

void deserialize_byte_array(
    ShardArgs &args,
    std::vector<std::vector<std::vector<std::vector<std::vector<Barrier> > > > >
        &graph_recv_bars,
    std::vector<std::vector<std::vector<std::vector<RegionInstance> > > >
        &tasks_for_each_graph,
    std::vector<TaskGraph> &graphs, const void *byte_array, long &num_tasks)
{
  void *walking_pointer = (void *)byte_array;
  /* Get the ShardArgs */
  args = *(ShardArgs *)walking_pointer;
  walking_pointer = (ShardArgs *)walking_pointer + 1;
  num_tasks = *(long *)walking_pointer;
  walking_pointer = (long *)walking_pointer + 1;

  /* Graphs */
  long num_graphs = *(long *)walking_pointer;
  walking_pointer = (long *)walking_pointer + 1;
  for (long i = 0; i < num_graphs; i++) {
    TaskGraph graph = *(TaskGraph *)walking_pointer;
    walking_pointer = (TaskGraph *)walking_pointer + 1;
    graphs.push_back(graph);
  }
  /* Region Instances */
  std::vector<std::vector<std::vector<std::vector<RegionInstance> > > >
      tasks_for_each_graph_copy;
  for (int graph_num = 0; graph_num < num_graphs; graph_num++) {
    TaskGraph graph = graphs[graph_num];
    std::vector<std::vector<std::vector<RegionInstance> > > regions_per_task;
    long graph_num_tasks = graph.max_width;
    for (long taskid = 0; taskid < graph_num_tasks; taskid++) {
      std::vector<std::vector<RegionInstance> > regions_per_dset;
      for (long dset = 0; dset < graph.max_dependence_sets(); dset++) {
        std::vector<RegionInstance> regions;
        long num_deps = num_dependencies(graph, dset, taskid);
        for (long dep = 0;
             dep < (num_deps * NUM_INPUT_REGIONS) + NUM_OUTPUT_REGIONS;
             dep++)  // extra for output
        {
          RegionInstance reg = *(RegionInstance *)walking_pointer;
          walking_pointer = (RegionInstance *)walking_pointer + 1;
          regions.push_back(reg);
        }
        regions_per_dset.push_back(regions);
      }
      regions_per_task.push_back(regions_per_dset);
    }
    tasks_for_each_graph_copy.push_back(regions_per_task);
  }
  tasks_for_each_graph = tasks_for_each_graph_copy;

  /* Recv Barriers */
  std::vector<std::vector<std::vector<std::vector<std::vector<Barrier> > > > >
      graph_recv_bars_copy;
  for (long graph_num = 0; graph_num < num_graphs; graph_num++) {
    TaskGraph graph = graphs[graph_num];
    std::vector<std::vector<std::vector<std::vector<Barrier> > > >
        barriers_per_task;
    for (long taskid = 0; taskid < num_tasks; taskid++) {
      std::vector<std::vector<std::vector<Barrier> > > barriers_per_dset;
      for (long dset = 0; dset < graph.max_dependence_sets(); dset++) {
        std::vector<std::vector<Barrier> > in_out_bars;
        for (long index = OUT_INDEX; index <= IN_INDEX; index++) {
          std::vector<Barrier> barriers;
          long num_deps = num_dependencies(graph, dset, taskid);
          long num_rev_deps = num_rev_dependencies(graph, dset, taskid);
          if (index == IN_INDEX) {
            for (long dep_num = 0; dep_num < num_deps * NUM_INPUT_REGIONS;
                 dep_num++) {
              Barrier bar = *(Barrier *)walking_pointer;
              walking_pointer = (Barrier *)walking_pointer + 1;
              barriers.push_back(bar);
            }
          } else {
            for (long dep_num = 0; dep_num < num_rev_deps * NUM_INPUT_REGIONS;
                 dep_num++) {
              Barrier bar = *(Barrier *)walking_pointer;
              walking_pointer = (Barrier *)walking_pointer + 1;
              barriers.push_back(bar);
            }
          }

          in_out_bars.push_back(barriers);
        }
        barriers_per_dset.push_back(in_out_bars);
      }
      barriers_per_task.push_back(barriers_per_dset);
    }
    graph_recv_bars_copy.push_back(barriers_per_task);
  }
  graph_recv_bars = graph_recv_bars_copy;
}

/* Get the size of the byte array for the comm_task function */
size_t get_byte_array_size(long num_deps)
{
  size_t size = sizeof(char *) * num_deps;  // input_ptrs
  size += sizeof(size_t) * num_deps;        // input_bytes
  return size;
}

/* Find the index of taskid in inter's reverse_dependencies */
long alt_find_index(long inter, TaskGraph &graph, long taskid, long dset)
{
  long index = 0;
  auto rev_deps = graph.reverse_dependencies(dset, inter);
  for (auto interval : rev_deps) {
    for (long rev = interval.first; rev <= interval.second; rev++) {
      if (rev == taskid) return index;
      index++;
    }
  }
  return -1;
}

/* Find the index of taskid in inter's dependencies */
long find_index(long inter, TaskGraph &graph, long taskid, long dset)
{
  long index = 0;
  auto deps = graph.dependencies(dset, inter);
  for (auto interval : deps) {
    for (long dep = interval.first; dep <= interval.second; dep++) {
      if (dep == taskid) return index;
      index++;
    }
  }
  return -1;
}

/* Create the byte array that will be passed into the comm_task */
void *serialize_comm_array(CommArgs &args, TaskGraph &graph,
                           std::vector<char *> &input_ptrs,
                           std::vector<size_t> &input_bytes,
                           size_t size_of_byte_array)
{
  void *resulting_array =
      malloc(size_of_byte_array + sizeof(CommArgs) + sizeof(TaskGraph));
  void *walking_pointer = resulting_array;

  /* CommArgs */
  *(CommArgs *)walking_pointer = args;
  walking_pointer = (CommArgs *)walking_pointer + 1;

  /* Graph */
  *(TaskGraph *)walking_pointer = graph;
  walking_pointer = (TaskGraph *)walking_pointer + 1;

  /* Input Ptrs */
  for (auto data : input_ptrs) {
    *(char **)walking_pointer = data;
    walking_pointer = (char **)walking_pointer + 1;
  }

  /* Input Bytes */
  for (auto input : input_bytes) {
    *(size_t *)walking_pointer = input;
    walking_pointer = (size_t *)walking_pointer + 1;
  }
  return resulting_array;
}

/* Find the output locations for taskid, at dset, in k_input */
void get_output_locations(
    std::vector<RegionInstance> &output_locations,
    std::vector<std::vector<std::vector<RegionInstance> > >
        &tasks_for_each_graph,
    std::vector<std::pair<long, long> > &rev_deps, TaskGraph &graph, long taskid,
    long dset, long k_input)
{
  for (auto interval : rev_deps) {
    for (long inter = interval.first; inter <= interval.second; inter++) {
      long index = find_index(inter, graph, taskid, dset);
      long num_deps = num_dependencies(graph, dset, inter);
      assert(index != -1);
      output_locations.push_back(
          tasks_for_each_graph[inter][dset][index + (k_input * num_deps)]);
    }
  }
}

/* Determine what the task must wait on before executing point. Will include
 * barriers that mark the data being received and the output_barrier. */
std::vector<Event> create_recv_barriers(std::vector<Barrier> &recv_barriers,
                                        TaskGraph &graph, long timestep,
                                        Barrier output_bar, long k_input,
                                        long num_deps, long taskid)
{
  std::vector<long> deps;
  for (auto interval :
       graph.dependencies(graph.dependence_set_at_timestep(timestep), taskid)) {
    for (long inter = interval.first; inter <= interval.second; inter++)
      deps.push_back(inter);
  }

  std::vector<Event> result_vec;

  for (long bar_num = 0; bar_num < num_deps; bar_num++) {
    if (deps[bar_num] < graph.width_at_timestep(timestep - 1) +
                            graph.offset_at_timestep(timestep - 1) &&
        deps[bar_num] >= graph.offset_at_timestep(timestep - 1)) {
      Barrier bar = recv_barriers[bar_num + (k_input * num_deps)];
      result_vec.push_back((Event)bar.get_previous_phase());
    }
  }
  if (timestep >= NUM_OUTPUT_REGIONS) result_vec.push_back((Event)output_bar);
  return result_vec;
}

/* Creates the char ** pointer that is needed for execute_point */
void create_input_array(std::vector<RegionInstance> &input_ptrs,
                        std::vector<char *> &input_array, long k_input,
                        long num_deps)
{
  for (long region = 0; region < num_deps; region++) {
    RegionInstance new_region = input_ptrs[region + (k_input * num_deps)];
    char *input_data;
    get_base(new_region, input_data);
    input_array.push_back(input_data);
  }
}

/* This will launch a comm_task for each time_step */
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

    start_time = Timer::get_cur_time();
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
    Event::merge_events(events).wait();
    time_elapsed = Timer::get_cur_time();
  }
  // printf("taskid: %d, total_time: %f\n", taskid, time_elapsed - start_time);
  a.first_start.arrive(1, Event::NO_EVENT, &start_time, sizeof(start_time));
  a.last_start.arrive(1, Event::NO_EVENT, &start_time, sizeof(start_time));
  a.first_stop.arrive(1, Event::NO_EVENT, &time_elapsed, sizeof(time_elapsed));
  a.last_stop.arrive(1, Event::NO_EVENT, &time_elapsed, sizeof(time_elapsed));
}

void create_region_done_task(const void *args, size_t arglen,
                             const void *userdata, size_t userlen, Processor p)
{
  assert(arglen == sizeof(CreateRegionDoneArgs));
  const CreateRegionDoneArgs &a =
      *reinterpret_cast<const CreateRegionDoneArgs *>(args);

  // We had better be on the destination proc, otherwise these
  // pointer won't be valid.
  assert(a.dest_proc == p);
  *a.dest_inst = a.inst;
}

void create_region_task(const void *args, size_t arglen, const void *userdata,
                        size_t userlen, Processor p)
{
  assert(arglen == sizeof(CreateRegionArgs));
  const CreateRegionArgs &a = *reinterpret_cast<const CreateRegionArgs *>(args);

  std::map<FieldID, size_t> field_sizes;
  field_sizes[FID_INPUT] = sizeof(char);
  field_sizes[FID_OUTPUT] = sizeof(char);
  RegionInstance inst = RegionInstance::NO_INST;
  RegionInstance::create_instance(inst, a.memory, a.bounds, field_sizes,
                                  0 /*SOA*/, ProfilingRequestSet())
      .wait();
  // Send the instance back to the requesting node
  // Important: Don't return until this is complete
  CreateRegionDoneArgs done;
  done.inst = inst;
  done.dest_proc = a.dest_proc;
  done.dest_inst = a.dest_inst;
  a.dest_proc.spawn(CREATE_REGION_DONE_TASK, &done, sizeof(done)).wait();
}

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

void *serialized_array(
    ShardArgs &args,
    std::vector<std::vector<std::vector<std::vector<std::vector<Barrier> > > > >
        &graph_recv_bars,
    std::vector<std::vector<std::vector<std::vector<RegionInstance> > > >
        &tasks_for_each_graph,
    size_t size_of_byte_array, std::vector<TaskGraph> &graphs, int num_tasks)
{
  void *resulting_array = malloc(sizeof(ShardArgs) + size_of_byte_array);
  void *walking_pointer = resulting_array;
  /* Shard Args */
  *(ShardArgs *)walking_pointer = args;
  walking_pointer = (ShardArgs *)walking_pointer + 1;

  *(long *)walking_pointer = num_tasks;
  walking_pointer = (long *)walking_pointer + 1;

  *(long *)walking_pointer = graphs.size();
  walking_pointer = (long *)walking_pointer + 1;

  /* Graphs */
  for (auto graph : graphs) {
    *(TaskGraph *)walking_pointer = graph;
    walking_pointer = (TaskGraph *)walking_pointer + 1;
  }

  /* Region Instances */
  for (auto per_task : tasks_for_each_graph) {
    for (auto per_dset : per_task) {
      for (auto all_inputs : per_dset) {
        for (auto region : all_inputs) {
          *(RegionInstance *)walking_pointer = region;
          walking_pointer = (RegionInstance *)walking_pointer + 1;
        }
      }
    }
  }

  /* Barriers */
  for (auto task_barriers : graph_recv_bars) {
    for (auto per_dset : task_barriers) {
      for (auto out_in : per_dset) {
        for (auto barriers : out_in) {
          for (auto bar : barriers) {
            *(Barrier *)walking_pointer = bar;
            walking_pointer = (Barrier *)walking_pointer + 1;
          }
        }
      }
    }
  }
  return resulting_array;
}

void deserialize_top_array(const void *args, std::vector<TaskGraph> &graphs)
{
  long num_graphs = *(long *)args;
  args = (long *)args + 1;

  for (long graph_num = 0; graph_num < num_graphs; graph_num++) {
    TaskGraph graph = *(TaskGraph *)args;
    args = (TaskGraph *)args + 1;
    graphs.push_back(graph);
  }
}

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

void *create_byte_array_main(App &config, size_t size_of_byte_array,
                             long num_graphs)
{
  void *resulting_array = malloc(size_of_byte_array);
  void *walking_pointer = resulting_array;

  *(long *)walking_pointer = num_graphs;
  walking_pointer = (long *)walking_pointer + 1;

  for (auto graph : config.graphs) {
    *(TaskGraph *)walking_pointer = graph;
    walking_pointer = (TaskGraph *)walking_pointer + 1;
  }
  return resulting_array;
}

int main(int argc, char **argv)
{
  Runtime rt;

  rt.init(&argc, &argv);

  rt.register_task(TOP_LEVEL_TASK, top_level_task);
  rt.register_task(CREATE_REGION_TASK, create_region_task);
  rt.register_task(CREATE_REGION_DONE_TASK, create_region_done_task);
  rt.register_task(CREATE_BARRIER_TASK, create_barrier_task);
  rt.register_task(CREATE_BARRIER_DONE_TASK, create_barrier_done_task);
  rt.register_task(SHARD_TASK, shard_task);
  rt.register_task(COMM_TASK, comm_task);
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
