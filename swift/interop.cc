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

#include "../core/core_c.h"
#include <vector>
#include <string>
#include <utility>
#include <cstring>

std::vector<char *> argv;

// Add a single argument.
void addArg(char *arg) {
  char *saved = (char *) malloc(strlen(arg) + 1);
  memcpy(saved, arg, strlen(arg) + 1);
  argv.push_back(saved);
}

// Add a set of space separated arguments.
void addArgs(char *args) {
  std::string arg = "";
  char *saved;
  while (*args != '\0') {
    if (*args == ' ') {
      saved = (char *) malloc(arg.size() + 1);
      memcpy(saved, arg.c_str(), arg.size() + 1);
      argv.push_back(saved);
      arg = "";
    } else {
      arg += *args;
    }
    args++;
  }
  if (arg != "") {
    saved = (char *) malloc(arg.size() + 1);
    memcpy(saved, arg.c_str(), arg.size() + 1);
    argv.push_back(saved);
  }
}

// Retrieve the argument vector.
char **getArgv() {
  return argv.data();
}

// Retrieve the number of arguments.
int getArgc() {
  return argv.size();
}

// Retrieve an argument.
char *getArg(int index) {
  return argv[index];
}

// Clear the arguments.
void clearAll() {
  for (size_t i = 0; i < argv.size(); i++) {
    free(argv[i]);
  }
  argv.clear();
}

// Get an allocated array that has room for all inputs.
std::pair<long,long> **getInputArray(interval_list_t list, long offset, long width) {
  long numIntervals = interval_list_num_intervals(list);
  long numInputs = 0;
  for (long i = 0; i < numIntervals; i++) {
    interval_t interval = interval_list_interval(list, i);
    for (long input = interval.start; input <= interval.end; input++) {
      if (input >= offset && input < offset + width) {
        numInputs++;
      }
    }
  }
  std::pair<long,long> **result = new std::pair<long,long>*[numInputs];
  return result;
}

// Gather the number of inputs for a given timestep and point.
long getNumInputs(interval_list_t list, long offset, long width) {
  long numIntervals = interval_list_num_intervals(list);
  long numInputs = 0;
  for (long i = 0; i < numIntervals; i++) {
    interval_t interval = interval_list_interval(list, i);
    for (long input = interval.start; input <= interval.end; input++) {
      if (input >= offset && input < offset + width) {
        numInputs++;
      }
    }
  }
  return numInputs;
}

// Gather an array of input bytes information.
size_t *getInputBytes(long numInputs) {
  size_t *result = new size_t[numInputs];
  for (long i = 0; i < numInputs; i++) {
    result[i] = sizeof(std::pair<long, long>);
  }
  return result;
}

// Place the given information in the correct array.
void placeInput(std::pair<long,long> **inputArray, long timestep, long point, long idx) {
  std::pair<long,long> *inputPointer = new std::pair<long,long>(timestep, point);
  inputArray[idx] = inputPointer;
}

// Execute the current point.
void executePoint(task_graph_t graph, long timestep, long point, std::pair<long,long> **inputPointer, size_t *inputBytes, size_t numInputs) {
  std::pair<long,long> *outputPointer = new std::pair<long, long>;
  size_t outputBytes = sizeof(std::pair<long, long>);
  task_graph_execute_point(graph, timestep, point, (char *)outputPointer, outputBytes, (const char **)inputPointer, inputBytes, numInputs);
  delete outputPointer;
}
