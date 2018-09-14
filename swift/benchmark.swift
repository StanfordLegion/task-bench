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

import io;
import sys;
import location;

type pair {
  int timestep;
  int point;
}

@dispatch=WORKER
(string appStr) initApp (string args) "turbine" "0.0" [
  "load ./interop.so interop; addArg dummy; addArgs <<args>>; set <<appStr>> [app_create [getArgc] [getArgv]]; clearAll;"
];

@dispatch=WORKER
() displayApp (string appStr) "turbine" "0.0" [
  "app_display <<appStr>>"
];

@dispatch=WORKER
() reportTiming(string appStr, float elapsedTime) "turbine" "0.0" [
  "app_report_timing <<appStr>> <<elapsedTime>>"
];

@dispatch=WORKER
(string list) getTaskGraphList (string appStr) "turbine" "0.0" [
  "set <<list>> [app_task_graphs <<appStr>>]"
];

@dispatch=WORKER
(int num) numGraphsInList (string list) "turbine" "0.0" [
  "set <<num>> [task_graph_list_num_task_graphs <<list>>]"
];

@dispatch=WORKER
(string g) getGraph (string list, int index) "turbine" "0.0" [
  "set <<g>> [task_graph_list_task_graph <<list>> <<index>>]"
];

@dispatch=WORKER
(int w) getMaxWidth (string graph) "turbine" "0.0" [
  "set <<w>> [task_graph_t_max_width_get <<graph>>]"
];

@dispatch=WORKER
(int t) getTimesteps (string graph) "turbine" "0.0" [
  "set <<t>> [task_graph_t_timesteps_get <<graph>>]"
];

@dispatch=WORKER
(int o) getOffset (string graph, int timestep) "turbine" "0.0" [
  "set <<o>> [expr <<timestep>> < 0 ? 0 : [task_graph_offset_at_timestep <<graph>> <<timestep>>]]"
];

@dispatch=WORKER
(int w) getWidth (string graph, int timestep) "turbine" "0.0" [
  "set <<w>> [expr <<timestep>> < 0 ? 0 : [task_graph_width_at_timestep <<graph>> <<timestep>>]]"
];

@dispatch=WORKER
(int d) getDependenceSet (string graph, int timestep) "turbine" "0.0" [
  "set <<d>> [task_graph_dependence_set_at_timestep <<graph>> <<timestep>>]"
];

@dispatch=WORKER
(string intervalList) getDependencies (string graph, int dset, int point) "turbine" "0.0" [
  "set <<intervalList>> [task_graph_dependencies <<graph>> <<dset>> <<point>>]"
];

@dispatch=WORKER
(string intervalList) getReverseDependencies (string graph, int dset, int point) "turbine" "0.0" [
  "set <<intervalList>> [task_graph_reverse_dependencies <<graph>> <<dset>> <<point>>]"
];

@dispatch=WORKER
(int n) getNumIntervals (string list) "turbine" "0.0" [
  "set <<n>> [interval_list_num_intervals <<list>>]"
];

@dispatch=WORKER
(string i) getInterval (string list, int index) "turbine" "0.0" [
  "set <<i>> [interval_list_interval <<list>> <<index>>]"
];

@dispatch=WORKER
(int s) getStart (string interval) "turbine" "0.0" [
  "set <<s>> [interval_t_start_get <<interval>>]"
];

@dispatch=WORKER
(int e) getEnd (string interval) "turbine" "0.0" [
  "set <<e>> [interval_t_end_get <<interval>>]"
];

@dispatch=WORKER
(string a) getInputArray (string list, int offset, int width) "turbine" "0.0" [
  "set <<a>> [getInputArray <<list>> <<offset>> <<width>>]"
];

@dispatch=WORKER
(int n) getNumInputs (string list, int offset, int width) "turbine" "0.0" [
  "set <<n>> [getNumInputs <<list>> <<offset>> <<width>>]"
];

@dispatch=WORKER
(string b) getInputBytes (int numInputs) "turbine" "0.0" [
  "set <<b>> [getInputBytes <<numInputs>>]"
];

@dispatch=WORKER
(void v) placeInput (string loc, int timestep, int point, int idx) "turbine" "0.0" [
  "placeInput <<loc>> <<timestep>> <<point>> <<idx>>"
];

@dispatch=WORKER
(void v) coreExecutePoint (string graph, int timestep, int point, string inputPointer, string inputBytes, int numInputs) "turbine" "0.0" [
  "executePoint <<graph>> <<timestep>> <<point>> <<inputPointer>> <<inputBytes>> <<numInputs>>"
];

(string deps[][][], string revDeps[][][], string inputMem[][][], string inputBytes[], int nInputs[][][]) getNeededArrays (string list, int rank) {
  location L = locationFromRank(rank);
  int numGraphs = @location=L numGraphsInList(list);
  foreach graphIndex in [0 : numGraphs - 1] {
    string graph = @location=L getGraph(list, graphIndex);
    int maxWidth = @location=L getMaxWidth(graph);
    int timesteps = @location=L getTimesteps(graph);
    inputBytes[graphIndex] = @location=L getInputBytes(maxWidth);
    foreach taskIndex in [rank : maxWidth - 1 : turbine_workers()] {
      for (int timestep = 0; timestep < timesteps; timestep = timestep + 1) {
        // Gather all necessary information from graph.
        int lastOffset = @location=L getOffset(graph, timestep - 1);
        int lastWidth = @location=L getWidth(graph, timestep - 1);
        int dset = @location=L getDependenceSet(graph, timestep);
        int nextDset = @location=L getDependenceSet(graph, timestep + 1);
        string currDeps = @location=L getDependencies(graph, dset, taskIndex);
        string currRevDeps = @location=L getReverseDependencies(graph, nextDset, taskIndex);
        string currInputMem = @location=L getInputArray(currDeps, lastOffset, lastWidth);
        int currNumInputs = @location=L getNumInputs(currDeps, lastOffset, lastWidth);
        deps[graphIndex][taskIndex][timestep] = currDeps;
        revDeps[graphIndex][taskIndex][timestep] = currRevDeps;
        inputMem[graphIndex][taskIndex][timestep] = currInputMem;
        nInputs[graphIndex][taskIndex][timestep] = currNumInputs;
      }
    }
  }
}

(int maxWidths[], int numTimesteps[]) getGraphInfo (string list) {
  location L = locationFromRank(0);
  int numGraphs = @location=L numGraphsInList(list);
  foreach graphIndex in [0 : numGraphs - 1] {
    string graph = @location=L getGraph(list, graphIndex);
    maxWidths[graphIndex] = @location=L getMaxWidth(graph);
    numTimesteps[graphIndex] = @location=L getTimesteps(graph);
  }
}

(pair outputPair) executePoint (string graph, int timestep, int taskIndex, pair inputs[][], string inputSpace, string inputBytes, int numInputs) {
  location L = locationFromRank(taskIndex %% turbine_workers());
  int offset = @location=L getOffset(graph, timestep);
  int width = @location=L getWidth(graph, timestep);
  // Only execute point if this point is in the current timestep.
  if (offset <= taskIndex && taskIndex < offset + width) {
    int waitFor[];
    // Place all inputs in the correct places.
    foreach inputPair, idx in inputs[timestep] {
      @location=L placeInput(inputSpace, inputPair.timestep, inputPair.point, idx) =>
      waitFor[idx] = 0;
    }
    wait deep (waitFor) {
      // Execute point once inputs are in correct place.
      @location=L coreExecutePoint(graph, timestep, taskIndex, inputSpace, inputBytes, numInputs) =>
      outputPair = pair(timestep, taskIndex);
    }
  } else {
    outputPair = pair(timestep, taskIndex);
  }
}

(boolean finished[]) runBenchmark (string lists[], location locs[], string deps[][][][], string revDeps[][][][], string inputMem[][][][], string inputBytes[][], int nInputs[][][][], int maxWidths[], int numTimesteps[]) {
  pair data[][][][];
  int numRanks = turbine_workers();
  location first = locs[0];
  int numGraphs = @location=first numGraphsInList(lists[0]);
  foreach graphIndex in [0 : numGraphs - 1] {
    int maxWidth = maxWidths[graphIndex];
    int timesteps = numTimesteps[graphIndex];
    foreach taskIndex in [0 : maxWidth - 1] {
      int rank = taskIndex %% numRanks;
      location L = locationFromRank(rank);
      pair inputs[][];
      pair empty[];
      pair outputs[];
      for (int timestep = 0; timestep < timesteps; timestep = timestep + 1) {
        // Get initial data that is necessary for current timestep.
        string graph = @location=L getGraph(lists[rank], graphIndex);
        int offset = @location=L getOffset(graph, timestep);
        int width = @location=L getWidth(graph, timestep);
        int lastOffset = @location=L getOffset(graph, timestep - 1);
        int lastWidth = @location=L getWidth(graph, timestep - 1);
        int nextOffset = @location=L getOffset(graph, timestep + 1);
        int nextWidth = @location=L getWidth(graph, timestep + 1);

        // RECEIVING
        if (timestep != 0 && taskIndex >= offset && taskIndex < offset + width) {
          string receivingIntervals = deps[rank][graphIndex][taskIndex][timestep];
          int numReceivingIntervals = @location=L getNumIntervals(receivingIntervals);
          int greaterIdx;
          for (int i = 0, greaterIdx = 0; i < numReceivingIntervals; i = i + 1, greaterIdx = greaterIdx + lesserIdx) {
            string interval = @location=L getInterval(receivingIntervals, i);
            int start = @location=L getStart(interval);
            int end = @location=L getEnd(interval);
            int lesserIdx;
            for (int sender = start, lesserIdx = 0; sender <= end; sender = sender + 1, lesserIdx = lesserIdx + received) {
              int received;
              if (sender >= lastOffset && sender < lastWidth + lastOffset) {
                int idx = greaterIdx + lesserIdx;
                // Will wait until data is available from the sending.
                inputs[timestep][idx] = data[graphIndex][taskIndex][timestep][sender];
                received = 1;
              } else {
                received = 0;
              }
            }
          }
          // If greaterIdx is still zero, then we never received anything.
          if (greaterIdx == 0) {
            inputs[timestep] = empty;
          }
        } else {
          inputs[timestep] = empty;
        }
        // EXECUTE POINT
        outputs[timestep] = executePoint(graph, timestep, taskIndex, inputs, inputMem[rank][graphIndex][taskIndex][timestep], inputBytes[rank][graphIndex], nInputs[rank][graphIndex][taskIndex][timestep]);
        // SENDING
        if (timestep != timesteps - 1 && taskIndex >= offset && taskIndex < offset + width) {
          string sendingIntervals = revDeps[rank][graphIndex][taskIndex][timestep];
          int numSendingIntervals = @location=L getNumIntervals(sendingIntervals);
          for (int i = 0; i < numSendingIntervals; i = i + 1) {
            string interval = @location=L getInterval(sendingIntervals, i);
            int start = @location=L getStart(interval);
            int end = @location=L getEnd(interval);
            for (int target = start; target <= end; target = target + 1) {
              if (target >= nextOffset && target < nextWidth + nextOffset) {
                // Place the correct data in the correct place so the right task can access it.
                data[graphIndex][target][timestep + 1][taskIndex] = outputs[timestep];
              }
            }
          }
        } else {
          if (timestep == timesteps - 1) {
            wait deep (outputs) {
              finished[taskIndex] = true;
            }
          }
        }
      }
    }
  }
}

() main () {
  // Initialize arrays.
  string dependencies[][][][], reverseDependencies[][][][], inputMemory[][][][], inputBytes[][], lists[], apps[];
  int numInputs[][][][], maxWidths[], numTimesteps[];
  location locations[];

  // Get data set up in proper locations.
  foreach i in [0 : turbine_workers() - 1] {
    location L = locationFromRank(i);
    locations[i] = L;
    apps[i] = @location=L initApp(args());
    if (i == 0) {
      @location=L displayApp(apps[i]);
    }
    lists[i] = @location=L getTaskGraphList(apps[i]);
    (dependencies[i], reverseDependencies[i], inputMemory[i], inputBytes[i], numInputs[i]) = getNeededArrays(lists[i], i);
  }

  (maxWidths, numTimesteps) = getGraphInfo(lists[0]);

  // Run the benchmark.
  wait deep (lists, locations, dependencies, reverseDependencies, inputMemory, inputBytes, numInputs, maxWidths, numTimesteps) {
    float start = clock() =>
    boolean finished[] = runBenchmark(lists, locations, dependencies, reverseDependencies, inputMemory, inputBytes, numInputs, maxWidths, numTimesteps);
    wait deep (finished) {
      float end = clock();
      location L = locationFromRank(0);
      @location=L reportTiming(apps[0], end - start);
    }
  }
}





