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

#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <tuple>
#include <vector>

#include "core.h"
#include "timer.h"

#include "multi_dimensional_array.h"

#include "gasnetex.h"

#define CHECK_OK(x) assert((x) == GASNET_OK);

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
  long complete;
  std::vector<TaskGraph> graphs;
  std::vector<std::tuple<long, long, long> > task_ready_queue;
  Array<2, long> timestep;
  Array<5, char> inputs;
  Array<3, int> input_ready;
  Array<3, int> input_consumed;
  Array<3, int> remote_input_empty;
  Array<4, const char *> input_ptr;
  Array<4, size_t> input_bytes;
  Array<4, char> outputs;
  Array<3, int> output_empty;
  Array<3, int> n_raw_in;
  Array<3, int> n_raw_out;
  Array<3, int> n_war_in;
  Array<3, int> n_war_out;
  Array<3, char> scratch;
  Array<3, std::vector<std::pair<long, long> > > dependencies;
  Array<3, std::vector<std::pair<long, long> > > reverse_dependencies;
};

RankState state;

template<typename T>
T clamp(T value, T low, T high) {
  return std::min(std::max(value, low), high);
}

// IMPORTANT: must be called with state lock held
static bool check_task_ready(long graph_index, long point_index, long timestep) {
  auto &graph = state.graphs[graph_index];

  long last_field = (timestep + state.num_fields - 1) % state.num_fields;
  long field = timestep % state.num_fields;

  const auto point_input_ready = state.input_ready(graph_index, point_index, last_field);
  const auto point_input_consumed = state.input_consumed(graph_index, point_index, last_field);
  const auto point_remote_input_empty = state.remote_input_empty(graph_index, point_index, field);
  const auto point_output_empty = state.output_empty(graph_index, point_index, field);
  const auto point_n_raw_in = state.n_raw_in(graph_index, point_index, timestep);
  const auto point_n_war_in = state.n_war_in(graph_index, point_index, timestep);

  return timestep < graph.timesteps && point_input_ready == point_n_raw_in && point_remote_input_empty == point_n_war_in && point_output_empty == 1 && point_input_consumed == 0;
}

// IMPORTANT: must be called with state lock held
static void advance_timestep(long graph_index, long point, long point_index) {
  auto &graph = state.graphs[graph_index];

  auto &point_timestep = state.timestep(graph_index, point_index);

  for (; point_timestep < graph.timesteps; ++point_timestep) {
    long offset = graph.offset_at_timestep(point_timestep);
    long width = graph.width_at_timestep(point_timestep);

    if (point >= offset && point < offset + width)
      break;
  }
}

// IMPORTANT: must be called with state lock held
static std::pair<long, long> run_task_body(long graph_index, long point, long timestep) {
  auto rank = state.rank;
  auto n_ranks = state.n_ranks;

  auto &graph = state.graphs[graph_index];
  long first_point = rank * graph.max_width / n_ranks;
  long last_point = (rank + 1) * graph.max_width / n_ranks - 1;

  long point_index = point - first_point;

  auto &point_timestep = state.timestep(graph_index, point_index);
  assert(point_timestep == timestep);

  long last_field = (point_timestep + state.num_fields - 1) % state.num_fields;
  long field = point_timestep % state.num_fields;

  auto &point_input_ready = state.input_ready(graph_index, point_index, last_field);
  auto &point_input_consumed = state.input_consumed(graph_index, point_index, last_field);
  auto &point_remote_input_empty = state.remote_input_empty(graph_index, point_index, field);
  auto point_input_ptr = state.input_ptr.empty() ? nullptr : &state.input_ptr(graph_index, point_index, last_field, 0);
  auto point_input_bytes = state.input_bytes.empty() ? nullptr : &state.input_bytes(graph_index, point_index, last_field, 0);
  auto &point_output = state.outputs(graph_index, point_index, field, 0);
  auto &point_output_empty = state.output_empty(graph_index, point_index, field);
  auto point_scratch = state.scratch.empty() ? nullptr : &state.scratch(graph_index, point_index, 0);
  const auto point_n_raw_in = state.n_raw_in(graph_index, point_index, timestep);
  const auto point_n_raw_out = state.n_raw_out(graph_index, point_index, timestep);
  const auto point_n_war_out = state.n_war_out(graph_index, point_index, timestep);

  graph.execute_point(point_timestep, point,
                      &point_output, graph.output_bytes_per_task,
                      point_input_ptr, point_input_bytes, point_n_raw_in,
                      point_scratch, graph.scratch_bytes_per_task);

  point_input_ready = 0;
  point_remote_input_empty = 0;
  point_input_consumed = point_n_war_out != 0;
  point_output_empty = point_n_raw_out == 0;

  ++point_timestep;
  advance_timestep(graph_index, point, point_index);
  if (point_timestep >= graph.timesteps) {
    ++state.complete;
  } else if (check_task_ready(graph_index, point_index, point_timestep)) {
    state.task_ready_queue.push_back(
      std::tuple<long, long, long>(graph_index, point, point_timestep));
  }

  long send_raw = point_output_empty == 0 && timestep < graph.timesteps-1 ? timestep : -1;
  long send_war = point_input_consumed == 1 && timestep < graph.timesteps-1 ? timestep : -1;

  return std::pair<long, long>(send_raw, send_war);
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

  long dset = graph.dependence_set_at_timestep(timestep+1);

  auto &point_input_ready = state.input_ready(graph_index, point_index, field);
  auto &point_deps = state.dependencies(graph_index, dset, point_index);

  long input_idx = 0;
  for (auto interval : point_deps) {
    long first_dep = clamp(interval.first,      offset, offset + width);
    long last_dep  = clamp(interval.second + 1, offset, offset + width);
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

  std::copy(
    (char *)buffer, ((char *)buffer) + size,
    &state.inputs(graph_index, point_index, field, input_idx, 0));

  point_input_ready++;

  auto &point_timestep = state.timestep(graph_index, point_index);
  if (timestep + 1 == point_timestep && point_timestep < graph.timesteps && check_task_ready(graph_index, point_index, point_timestep)) {
    state.task_ready_queue.push_back(
      std::tuple<long, long, long>(graph_index, point, point_timestep));
  }
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

  auto &point_remote_input_empty = state.remote_input_empty(graph_index, point_index, last_field);
  point_remote_input_empty++;

  auto &point_timestep = state.timestep(graph_index, point_index);
  if (timestep + state.num_fields - 1 == point_timestep && point_timestep < graph.timesteps && check_task_ready(graph_index, point_index, point_timestep)) {
    state.task_ready_queue.push_back(
      std::tuple<long, long, long>(graph_index, point, point_timestep));
  }
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

  // uintptr_t max_size = 0; // gasnet_getMaxLocalSegmentSize(); // don't need this with AM Medium
  // gex_Segment_t segment;
  // CHECK_OK(gex_Segment_Attach(&segment, tm, max_size));

  CHECK_OK(gex_EP_RegisterHandlers(ep, handlers, N_HANDLERS));

  App app(argc, argv);
  if (rank == 0) app.display();

  gex_HSL_Init(&state.lock);

  state.num_fields = 5;

  state.graphs = app.graphs;

  long max_timesteps = 0;
  long max_points = 0;
  long max_dsets = 0;
  long max_deps = 0;
  size_t max_output_bytes = 0;
  size_t max_scratch_bytes = 0;
  long expected_tasks = 0;
  for (auto graph : app.graphs) {
    long first_point = rank * graph.max_width / n_ranks;
    long last_point = (rank + 1) * graph.max_width / n_ranks - 1;
    long n_points = last_point - first_point + 1;

    max_timesteps = std::max(max_timesteps, graph.timesteps);

    max_points = std::max(max_points, n_points);

    max_output_bytes = std::max(max_output_bytes, graph.output_bytes_per_task);
    max_scratch_bytes = std::max(max_scratch_bytes, graph.scratch_bytes_per_task);

    max_dsets = std::max(max_dsets, graph.max_dependence_sets());

    for (long dset = 0; dset < graph.max_dependence_sets(); ++dset) {
      for (long point = first_point; point <= last_point; ++point) {
        long deps = 0;
        for (auto interval : graph.dependencies(dset, point)) {
          deps += interval.second - interval.first + 1;
        }
        max_deps = std::max(max_deps, deps);
      }
    }

    expected_tasks += n_points;
  }

  size_t n_graphs = app.graphs.size();

  state.timestep.resize(            {n_graphs, (size_t)max_points});
  state.inputs.resize(              {n_graphs, (size_t)max_points, (size_t)state.num_fields, (size_t)max_deps, max_output_bytes});
  state.input_ready.resize(         {n_graphs, (size_t)max_points, (size_t)state.num_fields});
  state.input_consumed.resize(      {n_graphs, (size_t)max_points, (size_t)state.num_fields});
  state.remote_input_empty.resize(  {n_graphs, (size_t)max_points, (size_t)state.num_fields});
  state.input_ptr.resize(           {n_graphs, (size_t)max_points, (size_t)state.num_fields, (size_t)max_deps});
  state.input_bytes.resize(         {n_graphs, (size_t)max_points, (size_t)state.num_fields, (size_t)max_deps});
  state.outputs.resize(             {n_graphs, (size_t)max_points, (size_t)state.num_fields, max_output_bytes});
  state.output_empty.resize(        {n_graphs, (size_t)max_points, (size_t)state.num_fields});
  state.n_raw_in.resize(            {n_graphs, (size_t)max_points, (size_t)max_timesteps});
  state.n_raw_out.resize(           {n_graphs, (size_t)max_points, (size_t)max_timesteps});
  state.n_war_in.resize(            {n_graphs, (size_t)max_points, (size_t)max_timesteps});
  state.n_war_out.resize(           {n_graphs, (size_t)max_points, (size_t)max_timesteps});
  state.scratch.resize(             {n_graphs, (size_t)max_points, max_scratch_bytes});
  state.dependencies.resize(        {n_graphs, (size_t)max_dsets, (size_t)max_points});
  state.reverse_dependencies.resize({n_graphs, (size_t)max_dsets, (size_t)max_points});

  std::vector<std::vector<gex_Rank_t> > rank_by_point(app.graphs.size());

  for (auto graph : app.graphs) {
    long first_point = rank * graph.max_width / n_ranks;
    long last_point = (rank + 1) * graph.max_width / n_ranks - 1;
    long n_points = last_point - first_point + 1;

    for (long point = first_point; point <= last_point; ++point) {
      long point_index = point - first_point;

      for (long field = 0; field < state.num_fields; ++field) {
        for (long dep = 0; dep < max_deps; ++dep) {
          state.input_ptr(graph.graph_index, point_index, field, dep) = &state.inputs(graph.graph_index, point_index, field, dep, 0);
          state.input_bytes(graph.graph_index, point_index, field, dep) = graph.output_bytes_per_task;
        }
      }

      for (long timestep = 0; timestep < graph.timesteps; ++timestep) {
        long last_offset = graph.offset_at_timestep(timestep-1);
        long last_width = graph.width_at_timestep(timestep-1);

        long next_offset = graph.offset_at_timestep(timestep+1);
        long next_width = graph.width_at_timestep(timestep+1);

        long last_field_offset = graph.offset_at_timestep(timestep - state.num_fields + 1);
        long last_field_width = graph.width_at_timestep(timestep - state.num_fields + 1);

        long next_field_offset = graph.offset_at_timestep(timestep + state.num_fields - 1);
        long next_field_width = graph.width_at_timestep(timestep + state.num_fields - 1);

        long dset = graph.dependence_set_at_timestep(timestep);
        long next_dset = graph.dependence_set_at_timestep(timestep+1);
        long last_field_dset = graph.dependence_set_at_timestep(timestep - state.num_fields + 1);
        long next_field_dset = graph.dependence_set_at_timestep(timestep + state.num_fields - 1);

        long raw_in = 0;
        for (auto interval : graph.dependencies(dset, point)) {
          long first_dep = clamp(interval.first,      last_offset, last_offset + last_width);
          long last_dep  = clamp(interval.second + 1, last_offset, last_offset + last_width);
          assert(first_dep <= last_dep);
          raw_in += last_dep - first_dep;
        }
        state.n_raw_in(graph.graph_index, point_index, timestep) = raw_in;

        long raw_out = 0;
        for (auto interval : graph.reverse_dependencies(next_dset, point)) {
          long first_dep = clamp(interval.first,      next_offset, next_offset + next_width);
          long last_dep  = clamp(interval.second + 1, next_offset, next_offset + next_width);
          assert(first_dep <= last_dep);
          raw_out += last_dep - first_dep;
        }
        state.n_raw_out(graph.graph_index, point_index, timestep) = raw_out;

        long war_in = 0;
        for (auto interval : graph.reverse_dependencies(last_field_dset, point)) {
          long first_dep = clamp(interval.first,      last_field_offset, last_field_offset + last_field_width);
          long last_dep  = clamp(interval.second + 1, last_field_offset, last_field_offset + last_field_width);
          assert(first_dep <= last_dep);
          war_in += last_dep - first_dep;
        }
        state.n_war_in(graph.graph_index, point_index, timestep) = war_in;

        long war_out = 0;
        for (auto interval : graph.dependencies(dset, point)) {
          long first_dep = clamp(interval.first,      next_field_offset, next_field_offset + next_field_width);
          long last_dep  = clamp(interval.second + 1, next_field_offset, next_field_offset + next_field_width);
          assert(first_dep <= last_dep);
          war_out += last_dep - first_dep;
        }
        state.n_war_out(graph.graph_index, point_index, timestep) = war_out;
      }

      for (long dset = 0; dset < graph.max_dependence_sets(); ++dset) {
        auto deps = graph.dependencies(dset, point);
        auto rev_deps = graph.reverse_dependencies(dset, point);

        state.dependencies(graph.graph_index, dset, point_index) = deps;
        state.reverse_dependencies(graph.graph_index, dset, point_index) = rev_deps;
      }

      if (!state.scratch.empty())
        TaskGraph::prepare_scratch(&state.scratch(graph.graph_index, point_index, 0), graph.scratch_bytes_per_task);
    }

    rank_by_point[graph.graph_index].resize(graph.max_width);
    for (gex_Rank_t r = 0; r < n_ranks; ++r) {
      long r_first_point = r * graph.max_width / n_ranks;
      long r_last_point = (r + 1) * graph.max_width / n_ranks - 1;
      for (long p = r_first_point; p <= r_last_point; ++p) {
        rank_by_point[graph.graph_index][p] = r;
      }
    }
  }

  std::vector<std::tuple<long, long, long, long> > send_queue;

  std::vector<std::tuple<long, long, long> > sends_raw;
  std::vector<std::tuple<long, long, long> > sends_war;

  std::vector<std::tuple<long, long, long> > task_ready_queue_local;

  double elapsed_time = 0.0;
  // FIXME: This can't be set to 2 because it seems to result in a low
  // probability (< 1%) hang
  for (int iter = 0; iter < 1; ++iter) {
    state.complete = 0;
    std::fill(state.timestep.begin(), state.timestep.end(), 0);
    std::fill(state.input_ready.begin(), state.input_ready.end(), 0);
    std::fill(state.input_consumed.begin(), state.input_consumed.end(), 0);
    std::fill(state.remote_input_empty.begin(), state.remote_input_empty.end(), 0);
    std::fill(state.output_empty.begin(), state.output_empty.end(), 1);

    gex_Event_Wait(gex_Coll_BarrierNB(tm, 0));

    double start_time = Timer::get_cur_time();

    // Advance and queue initial tasks.
    for (auto graph : app.graphs) {
      long first_point = rank * graph.max_width / n_ranks;
      long last_point = (rank + 1) * graph.max_width / n_ranks - 1;
      long n_points = last_point - first_point + 1;

      for (long point = first_point; point <= last_point; ++point) {
        long point_index = point - first_point;

        advance_timestep(graph.graph_index, point, point_index);

        auto &point_timestep = state.timestep(graph.graph_index, point_index);

        if (point_timestep >= graph.timesteps) {
          ++state.complete;
        } else if (check_task_ready(graph.graph_index, point_index, point_timestep)) {
          state.task_ready_queue.push_back(
            std::tuple<long, long, long>(graph.graph_index, point, point_timestep));
        }
      }
    }

    while (true) {
      {
        AutoLock guard(state.lock);

        // Check for completion.
        if (state.complete == expected_tasks)
          break;

        // Run any ready tasks.
        task_ready_queue_local.swap(state.task_ready_queue);
        for (auto entry : task_ready_queue_local) {
          long graph_index, point, timestep;
          std::tie(graph_index, point, timestep) = entry;

          auto send = run_task_body(graph_index, point, timestep);
          if (send.first >= 0 || send.second >= 0) {
            send_queue.push_back(std::tuple<long, long, long, long>(graph_index, point, send.first, send.second));
          }
        }

        // Clear the task queue.
        task_ready_queue_local.clear();
      }

      // Issue queued sends.
      for (auto entry : send_queue) {
        long graph_index, point, raw_timestep, war_timestep;
        std::tie(graph_index, point, raw_timestep, war_timestep) = entry;

        auto &graph = app.graphs[graph_index];

        long first_point = rank * graph.max_width / n_ranks;
        long last_point = (rank + 1) * graph.max_width / n_ranks - 1;

        long point_index = point - first_point;

        // RAW dependencies:
        if (raw_timestep >= 0) {
          long offset = graph.offset_at_timestep(raw_timestep);
          long width = graph.width_at_timestep(raw_timestep);

          long next_offset = graph.offset_at_timestep(raw_timestep+1);
          long next_width = graph.width_at_timestep(raw_timestep+1);

          long field = raw_timestep % state.num_fields;

          long dset = graph.dependence_set_at_timestep(raw_timestep + 1);

          auto &point_output = state.outputs(graph_index, point_index, field, 0);
          auto &point_rev_deps = state.reverse_dependencies(graph_index, dset, point_index);

          if (point >= offset && point < offset + width) {
            bool sent = false;
            for (auto interval : point_rev_deps) {
              for (long dep = interval.first; dep <= interval.second; dep++) {
                if (dep < next_offset || dep >= next_offset + next_width) {
                  continue;
                }

                CHECK_OK(gex_AM_RequestMedium(tm, rank_by_point[graph_index][dep], handlers[0].gex_index,
                                              &point_output, graph.output_bytes_per_task,
                                              GEX_EVENT_GROUP, 0,
                                              (gex_AM_Arg_t)graph.graph_index, (gex_AM_Arg_t)raw_timestep,
                                              (gex_AM_Arg_t)point, (gex_AM_Arg_t)dep));
                sent = true;
              }
            }
            if (sent)
              sends_raw.push_back(std::tuple<long, long, long>(graph.graph_index, raw_timestep, point));
          }
        }

        // WAR dependencies:
        if (war_timestep >= 0) {
          long offset = graph.offset_at_timestep(war_timestep);
          long width = graph.width_at_timestep(war_timestep);

          long next_field_offset = graph.offset_at_timestep(war_timestep + state.num_fields - 1);
          long next_field_width = graph.width_at_timestep(war_timestep + state.num_fields - 1);

          long dset = graph.dependence_set_at_timestep(war_timestep);

          auto &point_deps = state.dependencies(graph_index, dset, point_index);

          if (point >= offset && point < offset + width) {
            bool sent = false;
            for (auto interval : point_deps) {
              for (long dep = interval.first; dep <= interval.second; dep++) {
                if (dep < next_field_offset || dep >= next_field_offset + next_field_width) {
                  continue;
                }

                CHECK_OK(gex_AM_RequestShort(tm, rank_by_point[graph_index][dep], handlers[1].gex_index, 0,
                                             (gex_AM_Arg_t)graph.graph_index, (gex_AM_Arg_t)war_timestep, (gex_AM_Arg_t)dep));
                sent = true;
              }
            }
            if (sent)
              sends_war.push_back(std::tuple<long, long, long>(graph.graph_index, war_timestep, point));
          }
        }
      }
      send_queue.clear();

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

          auto &point_output_empty = state.output_empty(graph_index, point_index, field);
          point_output_empty = 1;
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

          auto &point_input_consumed = state.input_consumed(graph_index, point_index, last_field);
          point_input_consumed = 0;
        }
      }
      sends_raw.clear();
      sends_war.clear();

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

  // Barrier to make sure report gets flushed before nodes exit.
  gex_Event_Wait(gex_Coll_BarrierNB(tm, 0));

  return 0;
}
