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
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <map>
#include <string>

#include "core.h"

void execute_kernel_empty(const Kernel &kernel)
{
  // Do nothing...
}

void Kernel::execute() const
{
  switch(type) {
  case KernelType::EMPTY:
    execute_kernel_empty(*this);
    break;
  default:
    assert(false && "unimplemented kernel type");
  };
}

static const std::map<std::string, KernelType> &ktype_by_name()
{
  static std::map<std::string, KernelType> types;

  if (types.empty()) {
    types["empty"] = KernelType::EMPTY;
    types["memory_bound"] = KernelType::MEMORY_BOUND;
    types["compute_bound"] = KernelType::COMPUTE_BOUND;
  }

  return types;
}

static const std::map<KernelType, std::string> &name_by_ktype()
{
  static std::map<KernelType, std::string> names;

  if (names.empty()) {
    auto types = ktype_by_name();
    for (auto pair : types) {
      names[pair.second] = pair.first;
    }
  }

  return names;
}

static const std::map<std::string, DependenceType> &dtype_by_name()
{
  static std::map<std::string, DependenceType> types;

  if (types.empty()) {
    types["trivial"] = DependenceType::TRIVIAL;
    types["no_comm"] = DependenceType::NO_COMM;
    types["stencil_1d"] = DependenceType::STENCIL_1D;
    types["dom"] = DependenceType::DOM;
    types["fft"] = DependenceType::FFT;
    types["all_to_all"] = DependenceType::ALL_TO_ALL;
  }

  return types;
}

static const std::map<DependenceType, std::string> &name_by_dtype()
{
  static std::map<DependenceType, std::string> names;

  if (names.empty()) {
    auto types = dtype_by_name();
    for (auto pair : types) {
      names[pair.second] = pair.first;
    }
  }

  return names;
}

long TaskGraph::width_at_timestep(long timestep) const
{
  switch (dependence) {
  case DependenceType::TRIVIAL:
  case DependenceType::NO_COMM:
  case DependenceType::STENCIL_1D:
    return max_width;
  case DependenceType::DOM:
    return std::min(max_width,
                    std::min(timestep, timesteps - timestep));
  case DependenceType::FFT:
  case DependenceType::ALL_TO_ALL:
    return max_width;
  default:
    assert(false && "unexpected dependence type");
  };
}

long TaskGraph::max_dependence_sets() const
{
  switch (dependence) {
  case DependenceType::TRIVIAL:
    return 0;
  case DependenceType::NO_COMM:
  case DependenceType::STENCIL_1D:
  case DependenceType::DOM:
    return 1;
  case DependenceType::FFT:
    return (long)ceil(log2(max_width));
  case DependenceType::ALL_TO_ALL:
    return 1;
  default:
    assert(false && "unexpected dependence type");
  };
}

long TaskGraph::dependence_set_at_timestep(long timestep) const
{
  switch (dependence) {
  case DependenceType::TRIVIAL:
  case DependenceType::NO_COMM:
  case DependenceType::STENCIL_1D:
  case DependenceType::DOM:
    return 0;
  case DependenceType::FFT:
    return (timestep+max_dependence_sets()-1) % max_dependence_sets();
  case DependenceType::ALL_TO_ALL:
    return 0;
  default:
    assert(false && "unexpected dependence type");
  };
}

std::vector<std::pair<long, long> > TaskGraph::dependencies(long dset, long point) const
{
  std::vector<std::pair<long, long> > deps;

  switch (dependence) {
  case DependenceType::TRIVIAL:
    break;
  case DependenceType::NO_COMM:
    deps.push_back(std::pair<long, long>(point, point));
    break;
  case DependenceType::STENCIL_1D:
    deps.push_back(std::pair<long, long>(std::max(0L, point-1), std::min(point+1, max_width-1)));
    break;
  case DependenceType::DOM:
    deps.push_back(std::pair<long, long>(std::max(0L, point-1), point));
    break;
  case DependenceType::FFT:
    {
      long d1 = point - (1 << dset);
      long d2 = point + (1 << dset);
      if (d1 >= 0) {
        deps.push_back(std::pair<long, long>(d1, d1));
      }
      if (d2 < max_width) {
        deps.push_back(std::pair<long, long>(d2, d2));
      }
    }
    break;
  case DependenceType::ALL_TO_ALL:
    deps.push_back(std::pair<long, long>(0, max_width-1));
    break;
  default:
    assert(false && "unexpected dependence type");
  };

  return deps;
}

App::App(int argc, char **argv)
{
  // For now, just create one task graph
  TaskGraph graph;

  // Default values
  graph.timesteps = 4;
  graph.max_width = 4;
  graph.dependence = DependenceType::TRIVIAL;
  graph.kernel = {KernelType::EMPTY, 0};

  // Parse command line
  for (int i = 1; i < argc; i++) {
    if (!strcmp(argv[i], "-steps")) {
      graph.timesteps = atol(argv[++i]);
    }

    if (!strcmp(argv[i], "-width")) {
      graph.max_width = atol(argv[++i]);
    }

    if (!strcmp(argv[i], "-type")) {
      auto types = dtype_by_name();
      graph.dependence = types.at(argv[++i]);
    }

    if (!strcmp(argv[i], "-kernel")) {
      auto types = ktype_by_name();
      graph.kernel.type = types.at(argv[++i]);
    }

    if (!strcmp(argv[i], "-iter")) {
      graph.kernel.iterations = atol(argv[++i]);
    }
  }

  graphs.push_back(graph);
}

void App::display() const
{
  printf("Running Task Benchmark\n");
  printf("  Configuration:\n");
  int i = 0;
  for (auto g : graphs) {
    ++i;

    auto knames = name_by_ktype();
    auto dnames = name_by_dtype();

    printf("    Task Graph %d:\n", i);
    printf("      Time Steps: %ld\n", g.timesteps);
    printf("      Max Width: %ld\n", g.max_width);
    printf("      Dependence: %s\n", dnames.at(g.dependence).c_str());
    printf("      Kernel:\n");
    printf("        Type: %s\n", knames.at(g.kernel.type).c_str());
    printf("        Iterations: %ld\n", g.kernel.iterations);
  }
}
