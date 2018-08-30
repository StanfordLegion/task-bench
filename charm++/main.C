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
Main::Main(CkArgMsg* msg) : totalTimeElapsed(0.0), numRuns(1), numRunsDone(0),
                            app(msg->argc, msg->argv) {
  app.display();
  VectorWrapper wrapper(msg);
  mainProxy = thisProxy;

  // Create a multicast manager group
  CkGroupID mcastMgrGID = CProxy_CkMulticastMgr::ckNew();
  CkMulticastMgr *mcastMgr = CProxy_CkMulticastMgr(mcastMgrGID).ckLocalBranch();

  // Create a list of array section members spanning all arrays
  int numArrays = app.graphs.size();
  std::vector<CkArrayID> arrID(numArrays);
  std::vector<std::vector<CkArrayIndex> > elems(numArrays);

  for (int i=0; i < numArrays; i++) {
    int sectionSize = app.graphs[i].max_width;
    // Create the array
    CProxy_Subchare array = CProxy_Subchare::ckNew(wrapper, i, mcastMgrGID, sectionSize);
    // Store the AID
    arrID[i] = array.ckGetArrayID();
    // Create a list of section member indices in this array
    elems[i].resize(sectionSize);
    for (int j = 0; j < sectionSize; j++) {
      elems[i][j] = CkArrayIndex1D(j);
    }
  }

  // Create the cross-array section
  sectionProxy = CProxySection_Subchare(arrID, elems);

  // Delegate the section communication to CkMulticast
  sectionProxy.ckSectionDelegate(mcastMgr);

  // Invoke initialization on each subchare.
  sectionProxy.initGraph(new MulticastMsg());
}

/**
 * Invoked by a subchare to indicate that they are ready to start executing
 * the task graph.
 */
void Main::workerReady() {
  // TIMER ON!
  start = timer.get_cur_time();
  sectionProxy.runTimestep(new MulticastMsg());
}

/**
 * Invoked by a subchare to indicate that they have finished their part of
 * the task graph.
 */
void Main::finishedGraph() {
  // TIMER OFF!
  end = timer.get_cur_time();
  numRunsDone++;
  CkPrintf("Time for last run: %e\n", end - start);
  if (numRunsDone > 1) totalTimeElapsed += (end - start);
  if (numRunsDone == numRuns + 1) {
    app.report_timing(totalTimeElapsed / numRuns);
    CkExit();
  } else {
    sectionProxy.reset(new MulticastMsg());
  }
}

#include "main.def.h"
