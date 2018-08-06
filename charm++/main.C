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

#include "main.decl.h"

#include "main.h"
#include "subchare.decl.h"

#include <stdlib.h>

CProxy_Main mainProxy;

/**
 * Instantiates all of the child chares and invokes methods on them to initialize their
 * internal structures.
 */
Main::Main(CkArgMsg* msg) : numFinished(0), numChareArrays(0), numReady(0), totalTimeElapsed(0.0),
                            numRuns(1), numRunsDone(0), app(msg->argc, msg->argv) {
  app.display();

  std::vector<std::string> msgVec;
  VectorWrapper wrapper(msgVec);
  for (int i = 0; i < msg->argc; i++)
    wrapper.vec.push_back(std::string(msg->argv[i]));

  mainProxy = thisProxy;
  delete msg;

  // Add a subchare proxy for each graph.
  for (TaskGraph graph : app.graphs) {
    numChareArrays++;
    graphSubchareVec.push_back(CProxy_Subchare::ckNew(wrapper, graph.max_width));
  }
  // Invoke initialization on each subchare.
  for (size_t i = 0; i < graphSubchareVec.size(); i++) {
    CProxy_Subchare subchares = graphSubchareVec[i];
    subchares.initGraph(i);
  }
}

Main::Main(CkMigrateMessage* msg) : app(0, (char **)NULL) { }

/**
 * Invoked by a subchare to indicate that they are ready to start executing
 * the task graph.
 */
void Main::workerReady() {
  numReady++;
  // If all subchares are ready, execute the task graph.
  if (numReady == numChareArrays) {
    // TIMER ON!
    start = timer.get_cur_time();
    for (size_t i = 0; i < graphSubchareVec.size(); i++) {
      CProxy_Subchare subchares = graphSubchareVec[i];
      subchares.runTimestep();
    }
  }
}

/**
 * Invoked by a subchare to indicate that they have finished their part of
 * the task graph.
 */
void Main::finishedGraph() {
  numFinished++;
  // If all subchares have finished, exit.
  if (numFinished == numChareArrays) {
    // TIMER OFF!
    end = timer.get_cur_time();
    numRunsDone++;
    CkPrintf("Time for last run: %e\n", end - start);
    if (numRunsDone > 1) totalTimeElapsed += (end - start);
    if (numRunsDone == numRuns + 1) {
      app.report_timing(totalTimeElapsed / numRuns);
      CkExit();
    } else {
      numFinished = 0;
      numReady = 0;
      for (size_t i = 0; i < graphSubchareVec.size(); i++) {
        graphSubchareVec[i].reset();
      }
    }
  }
}

#include "main.def.h"
