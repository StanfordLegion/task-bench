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

#include <string>
#include <vector>

#include "serialize_helper.h"

enum class DependenceType {
  TRIVIAL,
  NO_COMM,
  STENCIL_1D,
  DOM,
  FFT,
  ALL_TO_ALL,
};

enum class KernelType {
  EMPTY,
  MEMORY_BOUND,
  COMPUTE_BOUND,
};

struct TaskGraph;

struct Kernel {
  // IMPORTANT: Keep serializer up to date with struct definition
  // See same comment in core.inl
  KernelType type;
  long iterations;
  // TODO: Add parameters for load imbalance, etc.

  // If subgraphs is non-empty then the parameters above are ignored
  // and the subgraphs are executed instead
  std::vector<TaskGraph> subgraphs;

  void execute() const;
};

struct TaskGraph {
  // IMPORTANT: Keep serializer up to date with struct definition
  // See same comment in core.inl
  long timesteps;
  long max_width;
  long region_size;
  DependenceType dependence;
  Kernel kernel;

  long width_at_timestep(long timestep) const;

  long max_dependence_sets() const;
  long dependence_set_at_timestep(long timestep) const;
  // std::pair(a, b) represents the INCLUSIVE interval from a to b
  std::vector<std::pair<long, long> > dependencies(long dset, long point) const;
};

struct App {
  std::vector<TaskGraph> graphs;

  App(int argc, char **argv);
  App(const Kernel &kernel);
  void display() const;
};

#include "core.inl"

#endif
