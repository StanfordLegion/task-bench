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

#ifndef CORE_H
#define CORE_H

#include "core_c.h"

#include <string>
#include <vector>

typedef dependence_type_t DependenceType;

typedef kernel_type_t KernelType;

struct Kernel : public kernel_t {
  Kernel(kernel_t k) {
    type = k.type;
    iterations = k.iterations;
  }

  void execute() const;
};

struct TaskGraph : public task_graph_t {
  TaskGraph() {}
  TaskGraph(task_graph_t t) {
    timesteps = t.timesteps;
    max_width = t.max_width;
    dependence = t.dependence;
    kernel = t.kernel;
  }

  long offset_at_timestep(long timestep) const;
  long width_at_timestep(long timestep) const;

  long max_dependence_sets() const;
  long dependence_set_at_timestep(long timestep) const;
  // std::pair(a, b) represents the INCLUSIVE interval from a to b
  std::vector<std::pair<long, long> > reverse_dependencies(long dset, long point) const;
  std::vector<std::pair<long, long> > dependencies(long dset, long point) const;
};

struct App {
  std::vector<TaskGraph> graphs;
  bool verbose;

  App(int argc, char **argv);
  void check() const;
  void display() const;
};

#endif
