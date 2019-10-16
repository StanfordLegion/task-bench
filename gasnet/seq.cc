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

#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <tuple>
#include <vector>

#include "core.h"
#include "timer.h"

#include "gasnetex.h"

#define CHECK_OK(x) assert((x) == GASNET_OK);

// #define printf(...) do {} while(false)

class AutoLock {
public:
  AutoLock(gex_HSL_t &lock_) : lock(&lock_) {
    gex_HSL_Lock(lock);
  }
  ~AutoLock() {
    gex_HSL_Unlock(lock);
  }

private:
  gex_HSL_t *lock;
};

struct RankState {
  gex_HSL_t lock;
  gex_Rank_t rank;
  gex_Rank_t n_ranks;
  long num_fields;
  std::vector<TaskGraph> graphs;
  std::vector<std::vector<long> > timesteps;
  std::vector<std::vector<std::vector<std::vector<std::vector<char> > > > > inputs;
  std::vector<std::vector<std::vector<int> > > input_ready;
  std::vector<std::vector<std::vector<int> > > input_consumed;
  std::vector<std::vector<std::vector<int> > > remote_input_empty;
  std::vector<std::vector<std::vector<std::vector<const char *> > > > input_ptr;
  std::vector<std::vector<std::vector<std::vector<size_t> > > > input_bytes;
  std::vector<std::vector<std::vector<std::vector<char> > > > outputs;
  std::vector<std::vector<std::vector<int> > > output_empty;
  std::vector<std::vector<std::vector<char> > > scratch;
  std::vector<std::vector<std::vector<std::vector<std::pair<long, long> > > > > dependencies;
  std::vector<std::vector<std::vector<std::vector<std::pair<long, long> > > > > reverse_dependencies;
};

RankState state;

static bool is_complete() {
  AutoLock guard(state.lock);

  auto rank = state.rank;
  auto n_ranks = state.n_ranks;

  auto &graphs = state.graphs;

  bool complete = true;
  for (auto graph : graphs) {
    long first_point = rank * graph.max_width / n_ranks;
    long last_point = (rank + 1) * graph.max_width / n_ranks - 1;

    for (long point = first_point; point <= last_point; ++point) {
      long point_index = point - first_point;

      auto &point_timestep = state.timesteps[graph.graph_index][point_index];

      // Copy so we don't modify the global value.
      long timestep = point_timestep;

      for (; timestep < graph.timesteps; ++timestep) {
        long offset = graph.offset_at_timestep(timestep);
        long width = graph.width_at_timestep(timestep);

        if (point >= offset && point < offset + width)
          break;
      }

      complete = complete && timestep == graph.timesteps;
      if (!complete) break;
    }
    if (!complete) break;
  }
  return complete;
}

static std::pair<long, long> timestep_to_send(long graph_index, long point) {
  AutoLock guard(state.lock);

  auto rank = state.rank;
  auto n_ranks = state.n_ranks;

  auto &graph = state.graphs[graph_index];

  long first_point = rank * graph.max_width / n_ranks;
  long last_point = (rank + 1) * graph.max_width / n_ranks - 1;

  long point_index = point - first_point;

  auto &point_timestep = state.timesteps[graph_index][point_index];

  long timestep = point_timestep - 1; // gets incremented at the end of check_and_run, so decrement here

  long field = timestep % state.num_fields;
  long last_field = (timestep + state.num_fields - 1) % state.num_fields;

  auto &point_output_empty = state.output_empty[graph_index][point_index][field];
  auto &point_input_consumed = state.input_consumed[graph_index][point_index][last_field];

  long raw_timestep = -1, war_timestep = -1;
  if (timestep >= 0 && timestep < graph.timesteps - 1) {
    if (point_output_empty == 0) {
      raw_timestep = timestep;
    }
    if (point_input_consumed == 1) {
      war_timestep = timestep;
    }
  }
  printf("timestep_to_send graph %ld timestep %ld point %ld field %ld last_field %ld output_empty %d input_consumed %d raw %ld war %ld\n",
         graph_index, timestep, point, field, last_field, point_output_empty, point_input_consumed,
         raw_timestep, war_timestep);
  return std::pair<long, long>(raw_timestep, war_timestep);
}

static bool check_and_run(long graph_index, long point) {
  auto rank = state.rank;
  auto n_ranks = state.n_ranks;

  auto &graph = state.graphs[graph_index];
  long first_point = rank * graph.max_width / n_ranks;
  long last_point = (rank + 1) * graph.max_width / n_ranks - 1;

  long point_index = point - first_point;

  auto &point_timestep = state.timesteps[graph_index][point_index];

  for (; point_timestep < graph.timesteps; ++point_timestep) {
    long offset = graph.offset_at_timestep(point_timestep);
    long width = graph.width_at_timestep(point_timestep);

    if (point >= offset && point < offset + width)
      break;
  }
  // printf("check_and_run graph %ld timestep %ld point %ld\n",
  //        graph_index, point_timestep, point);
  if (point_timestep >= graph.timesteps) {
    return false;
  }

  long last_offset = graph.offset_at_timestep(point_timestep-1);
  long last_width = graph.width_at_timestep(point_timestep-1);

  long next_offset = graph.offset_at_timestep(point_timestep+1);
  long next_width = graph.width_at_timestep(point_timestep+1);

  long last_field_offset = graph.offset_at_timestep(point_timestep - state.num_fields + 1);
  long last_field_width = graph.width_at_timestep(point_timestep - state.num_fields + 1);

  long next_field_offset = graph.offset_at_timestep(point_timestep + state.num_fields - 1);
  long next_field_width = graph.width_at_timestep(point_timestep + state.num_fields - 1);

  long last_field = (point_timestep + state.num_fields - 1) % state.num_fields;
  long field = point_timestep % state.num_fields;

  long dset = graph.dependence_set_at_timestep(point_timestep);
  long next_dset = graph.dependence_set_at_timestep(point_timestep+1);
  long last_field_dset = graph.dependence_set_at_timestep(point_timestep - state.num_fields + 1);

  auto &point_inputs = state.inputs[graph_index][point_index][last_field];
  auto &point_input_ready = state.input_ready[graph_index][point_index][last_field];
  auto &point_input_consumed = state.input_consumed[graph_index][point_index][last_field];
  auto &point_remote_input_empty = state.remote_input_empty[graph_index][point_index][field];
  auto &point_input_ptr = state.input_ptr[graph_index][point_index][last_field];
  auto &point_input_bytes = state.input_bytes[graph_index][point_index][last_field];
  auto &point_output = state.outputs[graph_index][point_index][field];
  auto &point_output_empty = state.output_empty[graph_index][point_index][field];
  auto &point_scratch = state.scratch[graph_index][point_index];
  auto &point_deps = state.dependencies[graph_index][dset][point_index];
  auto &point_rev_deps = state.reverse_dependencies[graph_index][next_dset][point_index];
  auto &point_last_field_rev_deps = state.reverse_dependencies[graph_index][next_dset][point_index];

  long n_inputs = 0;
  for (auto interval : point_deps) {
    long first_dep = std::min(std::max(interval.first, last_offset), last_offset + last_width);
    long last_dep = std::min(std::max(interval.second + 1, last_offset), last_offset + last_width);
    assert(first_dep <= last_dep);
    n_inputs += last_dep - first_dep;
  }

  long n_outputs = 0;
  for (auto interval : point_rev_deps) {
    long first_dep = std::min(std::max(interval.first, next_offset), next_offset + next_width);
    long last_dep = std::min(std::max(interval.second + 1, next_offset), next_offset + next_width);
    assert(first_dep <= last_dep);
    n_outputs += last_dep - first_dep;
  }

  long n_war_in = 0;
  for (auto interval : point_last_field_rev_deps) {
    long first_dep = std::min(std::max(interval.first, last_field_offset), last_field_offset + last_field_width);
    long last_dep = std::min(std::max(interval.second + 1, last_field_offset), last_field_offset + last_field_width);
    printf("computing n_war_in interval %ld %ld last_field_offset %ld width %ld first %ld last %ld\n",
           interval.first, interval.second, last_field_offset, last_field_width,
           first_dep, last_dep);
    assert(first_dep <= last_dep);
    n_war_in += last_dep - first_dep;
  }

  long n_war_out = 0;
  for (auto interval : point_deps) {
    long first_dep = std::min(std::max(interval.first, next_field_offset), next_field_offset + next_field_width);
    long last_dep = std::min(std::max(interval.second + 1, next_field_offset), next_field_offset + next_field_width);
    assert(first_dep <= last_dep);
    n_war_out += last_dep - first_dep;
  }

  bool ready = point_timestep < graph.timesteps && point_input_ready == n_inputs && point_remote_input_empty == n_war_in && point_output_empty == 1 && point_input_consumed == 0;
  printf("before check_and_run graph %ld timestep %ld point %ld field %ld last_field %ld input_ready %d n_inputs %ld remote_input_empty %d %p n_war_in %ld output_empty %d input_consumed %d last_field_offset %ld width %ld\n",
         graph_index, point_timestep, point, field, last_field,
         point_input_ready, n_inputs,
         point_remote_input_empty, &point_remote_input_empty, n_war_in,
         point_output_empty, point_input_consumed,
         last_field_offset, last_field_width);
  // for (long input_idx = 0; input_idx < n_inputs; ++input_idx) {
  //   printf("  input %ld content %ld %ld\n", input_idx, ((long *)(point_input_ptr[input_idx]))[0], ((long *)(point_input_ptr[input_idx]))[1]);
  // }
  if (ready) {
    graph.execute_point(point_timestep, point,
                        point_output.data(), point_output.size(),
                        point_input_ptr.data(), point_input_bytes.data(), n_inputs,
                        point_scratch.data(), point_scratch.size());

    point_input_ready = 0;
    point_remote_input_empty = 0;
    point_input_consumed = n_war_out != 0;
    point_output_empty = n_outputs == 0;

  printf("after check_and_run graph %ld timestep %ld point %ld field %ld last_field %ld input_ready %d n_inputs %ld remote_input_empty %d n_war_in %ld output_empty %d input_consumed %d\n",
         graph_index, point_timestep, point, field, last_field,
         point_input_ready, n_inputs,
         point_remote_input_empty, n_war_in,
         point_output_empty, point_input_consumed);

    ++point_timestep;

    return true;
  }

  return false;
}

static void RAW_handler(gex_Token_t token, void *buffer, size_t size,
                         gex_AM_Arg_t graph_index, gex_AM_Arg_t timestep, gex_AM_Arg_t source_point, gex_AM_Arg_t dest_point)
{
  AutoLock guard(state.lock);

  auto rank = state.rank;
  auto n_ranks = state.n_ranks;

  auto &graph = state.graphs[graph_index];
  long first_point = rank * graph.max_width / n_ranks;
  long last_point = (rank + 1) * graph.max_width / n_ranks - 1;

  long point = dest_point;
  long point_index = point - first_point;

  long field = timestep % state.num_fields;

  long offset = graph.offset_at_timestep(timestep);
  long width = graph.width_at_timestep(timestep);

  long dset = graph.dependence_set_at_timestep(timestep);

  auto &point_inputs = state.inputs[graph_index][point_index][field];
  auto &point_input_ready = state.input_ready[graph_index][point_index][field];
  auto &point_deps = state.dependencies[graph_index][dset][point_index];

  printf("RAW_handler graph %d timestep %d source %d dest %d\n", graph_index, timestep, source_point, dest_point);
  long input_idx = 0;
  for (auto interval : point_deps) {
    long first_dep = std::min(std::max(interval.first, offset), offset + width);
    long last_dep = std::min(interval.second + 1, offset + width);
    assert(first_dep <= last_dep);
    if (first_dep <= source_point && source_point <= last_dep) {
      first_dep = std::min(first_dep, (long)source_point);
      last_dep = std::min(last_dep, (long)source_point);
    }
    input_idx += last_dep - first_dep;
    if (first_dep <= source_point && source_point <= last_dep) {
      break;
    }
  }

  point_inputs[input_idx].assign((char *)buffer, ((char *)buffer) + size);
  point_input_ready++;

  // FIXME: there is a bug that occurs like this:
  //
  //  * send RAW
  //    * run RAW handler (note: happens before the send returns)
  //      * run task
  //        * increments timestep
  //  * send WAR
  //    * check fails because the timestep has already been incremented
  //
  // in other words, there is (probably) a missing synchronization between the WAR send completion and the task being able to run

  // check_and_run(graph_index, dest_point);
}

static void WAR_handler(gex_Token_t token,
                        gex_AM_Arg_t graph_index, gex_AM_Arg_t timestep, gex_AM_Arg_t point)
{
  AutoLock guard(state.lock);

  auto rank = state.rank;
  auto n_ranks = state.n_ranks;

  auto &graph = state.graphs[graph_index];
  long first_point = rank * graph.max_width / n_ranks;
  long last_point = (rank + 1) * graph.max_width / n_ranks - 1;

  long point_index = point - first_point;

  long last_field = (timestep + state.num_fields - 1) % state.num_fields;

  auto &point_remote_input_empty = state.remote_input_empty[graph_index][point_index][last_field];
  point_remote_input_empty++;

  printf("WAR_handler graph %d timestep %d dest %d last_field %ld remote_input_empty %d %p\n",
         graph_index, timestep, point, last_field, point_remote_input_empty, &point_remote_input_empty);
}

const int N_HANDLERS = 2;

gex_AM_Entry_t handlers[N_HANDLERS] = {
  gex_AM_Entry_t {
    .gex_index = 0,
    .gex_fnptr = (void (*)())RAW_handler,
    .gex_flags = GEX_FLAG_AM_MEDIUM | GEX_FLAG_AM_REQUEST,
    .gex_nargs = 4,
    .gex_cdata = NULL,
    .gex_name = "RAW handler",
  },
  gex_AM_Entry_t {
    .gex_index = 0,
    .gex_fnptr = (void (*)())WAR_handler,
    .gex_flags = GEX_FLAG_AM_SHORT | GEX_FLAG_AM_REQUEST,
    .gex_nargs = 3,
    .gex_cdata = NULL,
    .gex_name = "WAR handler",
  },
};

int main(int argc, char *argv[])
{
  gex_Client_t client;
  gex_EP_t ep;
  gex_TM_t tm;
  CHECK_OK(gex_Client_Init(&client, &ep, &tm, "main", &argc, &argv, 0));

  gex_Rank_t rank = gex_TM_QueryRank(tm);
  gex_Rank_t n_ranks = gex_TM_QuerySize(tm);
  state.rank = rank;
  state.n_ranks = n_ranks;

  uintptr_t max_size = 0; // gasnet_getMaxLocalSegmentSize(); // don't need this with AM Medium
  gex_Segment_t segment;
  CHECK_OK(gex_Segment_Attach(&segment, tm, max_size));

  CHECK_OK(gex_EP_RegisterHandlers(ep, handlers, N_HANDLERS));

  App app(argc, argv);
  if (rank == 0) app.display();

  gex_HSL_Init(&state.lock);

  state.num_fields = 5;

  state.graphs = app.graphs;

  state.timesteps.resize(app.graphs.size());
  state.inputs.resize(app.graphs.size());
  state.input_ready.resize(app.graphs.size());
  state.input_consumed.resize(app.graphs.size());
  state.remote_input_empty.resize(app.graphs.size());
  state.input_ptr.resize(app.graphs.size());
  state.input_bytes.resize(app.graphs.size());
  state.outputs.resize(app.graphs.size());
  state.output_empty.resize(app.graphs.size());
  state.scratch.resize(app.graphs.size());
  state.dependencies.resize(app.graphs.size());
  state.reverse_dependencies.resize(app.graphs.size());

  std::vector<std::vector<gex_Rank_t> > graph_rank_by_point(app.graphs.size());

  std::vector<std::tuple<long, long, long> > sends_raw;
  std::vector<std::tuple<long, long, long> > sends_war;

  double elapsed_time = 0.0;
  for (int iter = 0; iter < 2; ++iter) {
    for (auto graph : app.graphs) {
      long first_point = rank * graph.max_width / n_ranks;
      long last_point = (rank + 1) * graph.max_width / n_ranks - 1;
      long n_points = last_point - first_point + 1;

      long max_deps = 0;
      for (long dset = 0; dset < graph.max_dependence_sets(); ++dset) {
        for (long point = first_point; point <= last_point; ++point) {
          long deps = 0;
          for (auto interval : graph.dependencies(dset, point)) {
            deps += interval.second - interval.first + 1;
          }
          max_deps = std::max(max_deps, deps);
        }
      }

      // Initialize data structures.
      graph_rank_by_point[graph.graph_index].resize(graph.max_width);
      for (gex_Rank_t r = 0; r < n_ranks; ++r) {
        long r_first_point = r * graph.max_width / n_ranks;
        long r_last_point = (r + 1) * graph.max_width / n_ranks - 1;
        for (long p = r_first_point; p <= r_last_point; ++p) {
          graph_rank_by_point[graph.graph_index][p] = r;
        }
      }

      auto &timesteps = state.timesteps[graph.graph_index];
      auto &inputs = state.inputs[graph.graph_index];
      auto &input_ready = state.input_ready[graph.graph_index];
      auto &input_consumed = state.input_consumed[graph.graph_index];
      auto &remote_input_empty = state.remote_input_empty[graph.graph_index];
      auto &input_ptr = state.input_ptr[graph.graph_index];
      auto &input_bytes = state.input_bytes[graph.graph_index];
      auto &outputs = state.outputs[graph.graph_index];
      auto &output_empty = state.output_empty[graph.graph_index];
      auto &scratch = state.scratch[graph.graph_index];

      timesteps.resize(n_points);
      inputs.resize(n_points);
      input_ready.resize(n_points);
      input_consumed.resize(n_points);
      remote_input_empty.resize(n_points);
      input_ptr.resize(n_points);
      input_bytes.resize(n_points);
      outputs.resize(n_points);
      output_empty.resize(n_points);
      scratch.resize(n_points);

      for (long point = first_point; point <= last_point; ++point) {
        long point_index = point - first_point;

        auto &point_timestep = timesteps[point_index];
        point_timestep = 0;

        auto &point_inputs = inputs[point_index];
        auto &point_input_ready = input_ready[point_index];
        auto &point_input_consumed = input_consumed[point_index];
        auto &point_remote_input_empty = remote_input_empty[point_index];
        auto &point_input_ptr = input_ptr[point_index];
        auto &point_input_bytes = input_bytes[point_index];
        auto &point_outputs = outputs[point_index];
        auto &point_output_empty = output_empty[point_index];

        point_inputs.resize(state.num_fields);
        point_input_ready.resize(state.num_fields);
        point_input_consumed.resize(state.num_fields);
        point_remote_input_empty.resize(state.num_fields);
        point_input_ptr.resize(state.num_fields);
        point_input_bytes.resize(state.num_fields);
        point_outputs.resize(state.num_fields);
        point_output_empty.resize(state.num_fields);

        for (long field = 0; field < state.num_fields; ++field) {
          auto &field_inputs = point_inputs[field];
          auto &field_input_ptr = point_input_ptr[field];
          auto &field_input_bytes = point_input_bytes[field];

          field_inputs.resize(max_deps);
          field_input_ptr.resize(max_deps);
          field_input_bytes.resize(max_deps);

          for (long dep = 0; dep < max_deps; ++dep) {
            field_inputs[dep].resize(graph.output_bytes_per_task);
            field_input_ptr[dep] = field_inputs[dep].data();
            field_input_bytes[dep] = field_inputs[dep].size();
          }

          auto &field_input_ready = point_input_ready[field];
          field_input_ready = 0;

          auto &field_input_consumed = point_input_consumed[field];
          field_input_consumed = 0;

          auto &field_remote_input_empty = point_remote_input_empty[field];
          field_remote_input_empty = 0;

          auto &field_outputs = point_outputs[field];
          field_outputs.resize(graph.output_bytes_per_task);

          auto &field_output_empty = point_output_empty[field];
          field_output_empty = 1;
        }

        auto &point_scratch = scratch[point_index];
        point_scratch.resize(graph.scratch_bytes_per_task);
        TaskGraph::prepare_scratch(point_scratch.data(), point_scratch.size());
      }

      // Cache dependencies.
      auto &dependencies = state.dependencies[graph.graph_index];
      auto &reverse_dependencies = state.reverse_dependencies[graph.graph_index];

      dependencies.resize(n_points);
      reverse_dependencies.resize(n_points);

      for (long dset = 0; dset < graph.max_dependence_sets(); ++dset) {
        dependencies[dset].resize(n_points);
        reverse_dependencies[dset].resize(n_points);

        for (long point = first_point; point <= last_point; ++point) {
          long point_index = point - first_point;

          dependencies[dset][point_index] = graph.dependencies(dset, point);
          reverse_dependencies[dset][point_index] = graph.reverse_dependencies(dset, point);
        }
      }
    }

    gex_Event_Wait(gex_Coll_BarrierNB(tm, 0));

    double start_time = Timer::get_cur_time();

    while (!is_complete()) {
      // Send data for RAW dependencies
      for (auto graph : app.graphs) {
        long first_point = rank * graph.max_width / n_ranks;
        long last_point = (rank + 1) * graph.max_width / n_ranks - 1;

        auto &outputs = state.outputs[graph.graph_index];

        auto &reverse_dependencies = state.reverse_dependencies[graph.graph_index];

        auto &rank_by_point = graph_rank_by_point[graph.graph_index];

        for (long point = first_point; point <= last_point; ++point) {
          long point_index = point - first_point;

          long timestep = timestep_to_send(graph.graph_index, point).first;
          if (timestep >= 0) {
            long offset = graph.offset_at_timestep(timestep);
            long width = graph.width_at_timestep(timestep);

            long next_offset = graph.offset_at_timestep(timestep+1);
            long next_width = graph.width_at_timestep(timestep+1);

            long field = timestep % state.num_fields;

            long dset = graph.dependence_set_at_timestep(timestep);

            auto &point_output = outputs[point_index][field];
            auto &point_rev_deps = reverse_dependencies[dset][point_index];

            if (point >= offset && point < offset + width) {
              for (auto interval : point_rev_deps) {
                for (long dep = interval.first; dep <= interval.second; dep++) {
                  if (dep < next_offset || dep >= next_offset + next_width) {
                    continue;
                  }

                  printf("send RAW graph %ld timestep %ld source %ld dest %ld\n", graph.graph_index, timestep, point, dep);

                  CHECK_OK(gex_AM_RequestMedium(tm, rank_by_point[dep], handlers[0].gex_index,
                                                point_output.data(), point_output.size(),
                                                GEX_EVENT_GROUP, 0,
                                                (gex_AM_Arg_t)graph.graph_index, (gex_AM_Arg_t)timestep,
                                                (gex_AM_Arg_t)point, (gex_AM_Arg_t)dep));
                  sends_raw.push_back(std::tuple<long, long, long>(graph.graph_index, timestep, point));
                }
              }
            }
          }
        }
      }

      // Send data for WAR dependencies
      for (auto graph : app.graphs) {
        long first_point = rank * graph.max_width / n_ranks;
        long last_point = (rank + 1) * graph.max_width / n_ranks - 1;

        auto &dependencies = state.dependencies[graph.graph_index];

        auto &rank_by_point = graph_rank_by_point[graph.graph_index];

        for (long point = first_point; point <= last_point; ++point) {
          long point_index = point - first_point;

          long timestep = timestep_to_send(graph.graph_index, point).second;
          if (timestep >= 0) {

            long offset = graph.offset_at_timestep(timestep);
            long width = graph.width_at_timestep(timestep);

            long next_field_offset = graph.offset_at_timestep(timestep + state.num_fields - 1);
            long next_field_width = graph.width_at_timestep(timestep + state.num_fields - 1);

            long dset = graph.dependence_set_at_timestep(timestep);

            auto &point_deps = dependencies[dset][point_index];

            if (point >= offset && point < offset + width) {
              for (auto interval : point_deps) {
                for (long dep = interval.first; dep <= interval.second; dep++) {
                  if (dep < next_field_offset || dep >= next_field_offset + next_field_width) {
                    continue;
                  }

                  printf("send WAR graph %ld timestep %ld source %ld dest %ld\n", graph.graph_index, timestep, point, dep);

                  CHECK_OK(gex_AM_RequestShort(tm, rank_by_point[dep], handlers[1].gex_index, 0,
                                               (gex_AM_Arg_t)graph.graph_index, (gex_AM_Arg_t)timestep, (gex_AM_Arg_t)dep));
                  sends_war.push_back(std::tuple<long, long, long>(graph.graph_index, timestep, point));
                }
              }
            }
          }
        }
      }

      // Wait for local completion so it's safe to override output buffers.
      gex_NBI_Wait(GEX_EC_LC, 0);

      // Mark readiness of the output buffers.
      {
        AutoLock guard(state.lock);
        for (auto &send : sends_raw) {
          long graph_index;
          long timestep;
          long point;
          std::tie<long, long, long>(graph_index, timestep, point) = send;

          auto &graph = state.graphs[graph_index];

          long first_point = rank * graph.max_width / n_ranks;
          long last_point = (rank + 1) * graph.max_width / n_ranks - 1;

          long point_index = point - first_point;

          long last_field = (timestep + state.num_fields - 1) % state.num_fields;
          long field = timestep % state.num_fields;

          auto &point_output_empty = state.output_empty[graph_index][point_index][field];
          point_output_empty = 1;

          printf("marking RAW graph %ld timestep %ld point %ld last_field %ld field %ld output_empty %d\n",
                 graph_index, timestep, point, last_field, field, point_output_empty);
        }
        for (auto &send : sends_war) {
          long graph_index;
          long timestep;
          long point;
          std::tie<long, long, long>(graph_index, timestep, point) = send;

          auto &graph = state.graphs[graph_index];

          long first_point = rank * graph.max_width / n_ranks;
          long last_point = (rank + 1) * graph.max_width / n_ranks - 1;

          long point_index = point - first_point;

          long last_field = (timestep + state.num_fields - 1) % state.num_fields;

          auto &point_input_consumed = state.input_consumed[graph_index][point_index][last_field];
          point_input_consumed = 0;

          printf("marking WAR graph %ld timestep %ld point %ld last_field %ld input_consumed %d\n", graph_index, timestep, point, last_field, point_input_consumed);
        }
      }
      sends_raw.clear();
      sends_war.clear();

      // Run any ready tasks.
      {
        AutoLock guard(state.lock);

        for (auto graph : app.graphs) {
          long first_point = rank * graph.max_width / n_ranks;
          long last_point = (rank + 1) * graph.max_width / n_ranks - 1;

          for (long point = first_point; point <= last_point; ++point) {
            long point_index = point - first_point;

            long timestep = state.timesteps[graph.graph_index][point_index];

            if (timestep >= graph.timesteps) {
              continue;
            }

            check_and_run(graph.graph_index, point);
          }
        }
      }

      // Poll the network to make sure we're making progress.
      CHECK_OK(gasnet_AMPoll());
    }

    gex_Event_Wait(gex_Coll_BarrierNB(tm, 0));

    double stop_time = Timer::get_cur_time();
    elapsed_time = stop_time - start_time;
  }

  if (rank == 0) {
    app.report_timing(elapsed_time);
  }

  gex_HSL_Destroy(&state.lock);
}
