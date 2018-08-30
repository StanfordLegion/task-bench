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

#include "subchare.decl.h"
#include "subchare.h"
#include "main.decl.h"

extern CProxy_Main mainProxy;

const static bool SENDING = false;
const static bool RECEIVING = true;

Subchare::Subchare(VectorWrapper wrapper, int gi, CkGroupID mcastMgrGID)
  : app(wrapper.vec.size(), wrapper.toArgv()), graphIndex(gi), firstTime(true)
{
  mcastMgr = CProxy_CkMulticastMgr(mcastMgrGID).ckLocalBranch();
}

/**
 * Initializes the graph and necessary data structures to minimize computation
 * during the timing for Charm++.
 */
void Subchare::initGraph(MulticastMsg* msg) {
  if (firstTime) {
    sid = msg->_cookie;
    firstTime = false;
  }
  graph = app.graphs[graphIndex];
  currentTimestep = 0;

  // Init receiving and sending vectors.
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

    inputs.push_back(std::vector<std::pair<long, long>*>());
    input_bytes.push_back(std::vector<size_t>());
    size_t idx = 0;
    deps = graph.dependencies(graph.dependence_set_at_timestep(timestep), thisIndex);
    for (auto interval : deps) {
      for (long dep = interval.first; dep <= interval.second; dep++) {
        if (dep >= last_offset && dep < last_width + last_offset) {
          receivingMap[std::pair<long, long>(timestep, dep)] = idx;
          inputs[timestep].push_back(new std::pair<long, long>());
          input_bytes[timestep].push_back(sizeof(std::pair<long, long>));
          idx++;
        }
      }
    }
  }

  output_bytes = sizeof(output);
  mcastMgr->contribute(sid, CkCallback(CkReductionTarget(Main, workerReady), mainProxy));
}

/**
 * Executes a single timestep of the task graph for this particular chare.
 */
void Subchare::runTimestep(MulticastMsg* msg) {
  long offset = graph.offset_at_timestep(currentTimestep);
  long width = graph.width_at_timestep(currentTimestep);
  if (offset <= thisIndex && thisIndex < offset + width) 
    graph.execute_point(currentTimestep, thisIndex, (char *)&output, output_bytes,
              (const char**)inputs[currentTimestep].data(), (const size_t*)input_bytes[currentTimestep].data(),
              inputs[currentTimestep].size());

  for (long target : whereToSend[currentTimestep]) {
    thisProxy[target].receive(output);
  }
  sent = true;

  checkAndRun(SENDING);
}

/**
 * Entry method that acts according to the message sent from another chare.
 */
void Subchare::receive(const std::pair<long, long>& input) {
  notReceived[input.first + 1].erase(input.second);
  size_t idx = receivingMap[std::pair<long, long>(input.first + 1, input.second)];
  inputs[input.first + 1][idx]->first = input.first;
  inputs[input.first + 1][idx]->second = input.second;
  input_bytes[input.first + 1][idx] = sizeof(input);

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
      mcastMgr->contribute(sid, CkCallback(CkReductionTarget(Main, finishedGraph), mainProxy));
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
  for (auto inputSet : inputs)
    for (auto input : inputSet)
      delete input;
  inputs.clear();
  input_bytes.clear();
  sent = false;
  initGraph(NULL);
}

#include "subchare.def.h"
