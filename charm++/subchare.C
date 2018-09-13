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

#include <cassert>

#include "subchare.decl.h"
#include "subchare.h"
#include "main.decl.h"

/*readonly*/ extern CProxy_Main mainProxy;

const static bool SENDING = false;
const static bool RECEIVING = true;

Subchare::Subchare(VectorWrapper wrapper, int gi)
  : app(wrapper.vec.size(), wrapper.toArgv()), graphIndex(gi), firstTime(true)
{}

/**
 * Initializes the graph and necessary data structures to minimize computation
 * during the timing for Charm++.
 */
void Subchare::initGraph(MulticastMsg* msg) {
  // First time here, save the CkSectionInfo for use in reduction contributions
  if (firstTime) {
    sid = msg->_cookie;
    firstTime = false;
  }
  graph = app.graphs[graphIndex];
  currentTimestep = 0;

  // Init receiving and sending vectors.
  inputs.resize(graph.timesteps);
  input_ptrs.resize(graph.timesteps);
  input_bytes.resize(graph.timesteps);
  for (long timestep = 0; timestep < graph.timesteps; timestep++) {
    long offset = graph.offset_at_timestep(timestep);
    long width = graph.width_at_timestep(timestep);
    long last_offset = timestep == 0 ? 0 : graph.offset_at_timestep(timestep - 1);
    long last_width = timestep == 0 ? 0 : graph.width_at_timestep(timestep - 1);
    long next_offset = graph.offset_at_timestep(timestep + 1);
    long next_width = graph.width_at_timestep(timestep + 1);

    auto deps = graph.dependencies(graph.dependence_set_at_timestep(timestep), thisIndex);
    if (timestep == 0 || thisIndex < offset || thisIndex >= width + offset)
      deps.clear();
    notReceived.push_back(std::set<long>());
    for (auto interval : deps) {
      for (long dep = interval.first; dep <= interval.second; dep++) {
        if (dep >= last_offset && dep < last_width + last_offset) {
          notReceived[timestep].insert(dep);
        }
      }
    }

    auto revDeps = graph.reverse_dependencies(graph.dependence_set_at_timestep(timestep + 1), thisIndex);
    if (timestep == graph.timesteps - 1 || thisIndex < offset || thisIndex >= width + offset)
      revDeps.clear();
    whereToSend.push_back(std::set<long>());
    for (auto interval : revDeps) {
      for (long target = interval.first; target <= interval.second; target++) {
        if (target >= next_offset && target < next_width + next_offset) {
          whereToSend[timestep].insert(target);
        }
      }
    }

    size_t idx = 0;
    deps = graph.dependencies(graph.dependence_set_at_timestep(timestep), thisIndex);
    for (auto interval : deps) {
      for (long dep = interval.first; dep <= interval.second; dep++) {
        if (dep >= last_offset && dep < last_width + last_offset) {
          receivingMap[std::pair<long, long>(timestep, dep)] = idx;
          size_t input_bytes_per_task = graph.output_bytes_per_task;
          inputs[timestep].emplace_back(input_bytes_per_task);
          input_ptrs[timestep].push_back(const_cast<char *>(inputs[timestep].back().data()));
          input_bytes[timestep].push_back(input_bytes_per_task);
          idx++;
        }
      }
    }
  }

  output.resize(graph.output_bytes_per_task);
  scratch.resize(graph.scratch_bytes_per_task);

  CProxySection_Subchare::contribute(sid, CkCallback(CkReductionTarget(Main, workerReady), mainProxy));
}

/**
 * Executes a single timestep of the task graph for this particular chare.
 */
void Subchare::runTimestep(MulticastMsg* msg) {
  long offset = graph.offset_at_timestep(currentTimestep);
  long width = graph.width_at_timestep(currentTimestep);
  if (offset <= thisIndex && thisIndex < offset + width) 
    graph.execute_point(currentTimestep, thisIndex, output.data(), output.size(),
              (const char **)input_ptrs[currentTimestep].data(),
              (const size_t *)input_bytes[currentTimestep].data(),
              inputs[currentTimestep].size(),
              scratch.data(), scratch.size());

  for (long target : whereToSend[currentTimestep]) {
    thisProxy[target].receive(output);
  }
  sent = true;

  checkAndRun(SENDING);
}

/**
 * Entry method that acts according to the message sent from another chare.
 */
void Subchare::receive(const std::vector<char> &input) {
  std::pair<long, long> point = *reinterpret_cast<const std::pair<long, long> *>(input.data());
  notReceived[point.first + 1].erase(point.second);
  size_t idx = receivingMap[std::pair<long, long>(point.first + 1, point.second)];
  assert(inputs[point.first + 1][idx].size() == input.size());
  std::copy(input.begin(), input.end(), inputs[point.first + 1][idx].begin());

  checkAndRun(RECEIVING);
}

/**
 * Checks to see if all messages have been received for the current timestep, then schedules the
 * next timestep if they have. If this was the last timestep, then indicates to the main proxy
 * that this chare has finished.
 */
void Subchare::checkAndRun(bool receiving) {
  if (notReceived[currentTimestep + 1].empty()) {
    if (currentTimestep + 1 == graph.timesteps - 1) {
      CProxySection_Subchare::contribute(sid, CkCallback(CkReductionTarget(Main, finishedGraph), mainProxy));
    } else if (!receiving || sent) {
      sent = false;
      currentTimestep++;
      runTimestep(NULL);
    }
  }
}

/**
 * Resets the data structures within the subchare for another run of the graphs.
 */
void Subchare::reset(MulticastMsg* msg) {
  notReceived.clear();
  whereToSend.clear();
  receivingMap.clear();
  input_ptrs.clear();
  inputs.clear();
  input_bytes.clear();
  sent = false;
  initGraph(NULL);
}

#include "subchare.def.h"
