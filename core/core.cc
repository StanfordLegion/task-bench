/* Copyright 2019 Stanford University
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
#include <atomic>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <math.h>

#include "core.h"
#include "core_kernel.h"
#include "core_random.h"

#ifdef DEBUG_CORE
typedef unsigned long long TaskGraphMask;
static std::atomic<TaskGraphMask> has_executed_graph;
#endif

static bool needs_period(DependenceType dtype) {
  return dtype == DependenceType::SPREAD || dtype == DependenceType::RANDOM_NEAREST;
}

void Kernel::execute(long graph_index, long timestep, long point,
                     char *scratch_ptr, size_t scratch_bytes) const
{
  switch(type) {
  case KernelType::EMPTY:
    execute_kernel_empty(*this);
    break;
  case KernelType::BUSY_WAIT:
    execute_kernel_busy_wait(*this);
    break;
  case KernelType::MEMORY_BOUND:
    assert(scratch_ptr != NULL);
    assert(scratch_bytes > 0);
    execute_kernel_memory(*this, scratch_ptr, scratch_bytes, timestep);
    break;
  case KernelType::COMPUTE_DGEMM:
    assert(scratch_ptr != NULL);
    assert(scratch_bytes > 0);
    execute_kernel_dgemm(*this, scratch_ptr, scratch_bytes);
    break;
  case KernelType::MEMORY_DAXPY:
    assert(scratch_ptr != NULL);
    assert(scratch_bytes > 0);
    execute_kernel_daxpy(*this, scratch_ptr, scratch_bytes, timestep);
    break;  
  case KernelType::COMPUTE_BOUND:
    execute_kernel_compute(*this);
    break;
  case KernelType::COMPUTE_BOUND2:
    execute_kernel_compute2(*this);
    break;
  case KernelType::IO_BOUND:
    execute_kernel_io(*this);
    break;
  case KernelType::LOAD_IMBALANCE:
    assert(timestep >= 0 && point >= 0);
    execute_kernel_imbalance(*this, graph_index, timestep, point);
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
    types["busy_wait"] = KernelType::BUSY_WAIT;
    types["memory_bound"] = KernelType::MEMORY_BOUND;
    types["compute_dgemm"] = KernelType::COMPUTE_DGEMM;
    types["memory_daxpy"] = KernelType::MEMORY_DAXPY;
    types["compute_bound"] = KernelType::COMPUTE_BOUND;
    types["compute_bound2"] = KernelType::COMPUTE_BOUND2;
    types["io_bound"] = KernelType::IO_BOUND;
    types["load_imbalance"] = KernelType::LOAD_IMBALANCE;
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
    types["stencil_1d_periodic"] = DependenceType::STENCIL_1D_PERIODIC;
    types["dom"] = DependenceType::DOM;
    types["tree"] = DependenceType::TREE;
    types["fft"] = DependenceType::FFT;
    types["all_to_all"] = DependenceType::ALL_TO_ALL;
    types["nearest"] = DependenceType::NEAREST;
    types["spread"] = DependenceType::SPREAD;
    types["random_nearest"] = DependenceType::RANDOM_NEAREST;
    types["random_spread"] = DependenceType::RANDOM_SPREAD;
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

long TaskGraph::offset_at_timestep(long timestep) const
{
  if (timestep < 0) {
    return 0;
  }

  switch (dependence) {
  case DependenceType::TRIVIAL:
  case DependenceType::NO_COMM:
  case DependenceType::STENCIL_1D:
  case DependenceType::STENCIL_1D_PERIODIC:
    return 0;
  case DependenceType::DOM:
    return std::max(0L, timestep + max_width - timesteps);
  case DependenceType::TREE:
  case DependenceType::FFT:
  case DependenceType::ALL_TO_ALL:
  case DependenceType::NEAREST:
  case DependenceType::SPREAD:
  case DependenceType::RANDOM_NEAREST:
  case DependenceType::RANDOM_SPREAD:
    return 0;
  default:
    assert(false && "unexpected dependence type");
  };
}

long TaskGraph::width_at_timestep(long timestep) const
{
  if (timestep < 0) {
    return 0;
  }

  switch (dependence) {
  case DependenceType::TRIVIAL:
  case DependenceType::NO_COMM:
  case DependenceType::STENCIL_1D:
  case DependenceType::STENCIL_1D_PERIODIC:
    return max_width;
  case DependenceType::DOM:
    return std::min(max_width,
                    std::min(timestep + 1, timesteps - timestep));
  case DependenceType::TREE:
    return std::min(max_width, 1L << std::min(timestep, 62L));
  case DependenceType::FFT:
  case DependenceType::ALL_TO_ALL:
  case DependenceType::NEAREST:
  case DependenceType::SPREAD:
  case DependenceType::RANDOM_NEAREST:
  case DependenceType::RANDOM_SPREAD:
    return max_width;
  default:
    assert(false && "unexpected dependence type");
  };
}

long TaskGraph::max_dependence_sets() const
{
  switch (dependence) {
  case DependenceType::TRIVIAL:
  case DependenceType::NO_COMM:
  case DependenceType::STENCIL_1D:
  case DependenceType::STENCIL_1D_PERIODIC:
  case DependenceType::DOM:
  case DependenceType::TREE:
    return 1;
  case DependenceType::FFT:
    return (long)ceil(log2(max_width));
  case DependenceType::ALL_TO_ALL:
  case DependenceType::NEAREST:
    return 1;
  case DependenceType::SPREAD:
  case DependenceType::RANDOM_NEAREST:
  case DependenceType::RANDOM_SPREAD:
    return period;
  default:
    assert(false && "unexpected dependence type");
  };
}

long TaskGraph::timestep_period() const
{
  // For all the dependence types currently defined, the pattern
  // repeats with a period equal to the number of timesteps.
  return max_dependence_sets();
}

long TaskGraph::dependence_set_at_timestep(long timestep) const
{
  switch (dependence) {
  case DependenceType::TRIVIAL:
  case DependenceType::NO_COMM:
  case DependenceType::STENCIL_1D:
  case DependenceType::STENCIL_1D_PERIODIC:
  case DependenceType::DOM:
  case DependenceType::TREE:
    return 0;
  case DependenceType::FFT:
    return (timestep + max_dependence_sets() - 1) % max_dependence_sets();
  case DependenceType::ALL_TO_ALL:
  case DependenceType::NEAREST:
    return 0;
  case DependenceType::SPREAD:
  case DependenceType::RANDOM_NEAREST:
  case DependenceType::RANDOM_SPREAD:
    return timestep % max_dependence_sets();
  default:
    assert(false && "unexpected dependence type");
  };
}

std::vector<std::pair<long, long> > TaskGraph::reverse_dependencies(long dset, long point) const
{
  std::vector<std::pair<long, long> > deps;

  switch (dependence) {
  case DependenceType::TRIVIAL:
    break;
  case DependenceType::NO_COMM:
    deps.push_back(std::pair<long, long>(point, point));
    break;
  case DependenceType::STENCIL_1D:
    deps.push_back(std::pair<long, long>(std::max(0L, point-1),
                                         std::min(point+1, max_width-1)));
    break;
  case DependenceType::STENCIL_1D_PERIODIC:
    deps.push_back(std::pair<long, long>(std::max(0L, point-1),
                                         std::min(point+1, max_width-1)));
    if (point-1 < 0) { // Wrap around negative case
      deps.push_back(std::pair<long, long>(max_width-1, max_width-1));
    }
    if (point+1 >= max_width) { // Wrap around positive case
      deps.push_back(std::pair<long, long>(0, 0));
    }
    break;
  case DependenceType::DOM:
    deps.push_back(std::pair<long, long>(point, std::min(max_width-1, point+1)));
    break;
  case DependenceType::TREE:
    {
      long child1 = point*2;
      long child2 = point*2 + 1;
      if (child1 < max_width && child2 < max_width)
        deps.push_back(std::pair<long, long>(child1, child2));
      else if (child1 < max_width)
        deps.push_back(std::pair<long, long>(child1, child1));

    }
    break;
  case DependenceType::FFT:
    {
      long d1 = point - (1 << dset);
      long d2 = point + (1 << dset);
      if (d1 >= 0) {
        deps.push_back(std::pair<long, long>(d1, d1));
      }
      deps.push_back(std::pair<long, long>(point, point));
      if (d2 < max_width) {
        deps.push_back(std::pair<long, long>(d2, d2));
      }
    }
    break;
  case DependenceType::ALL_TO_ALL:
    deps.push_back(std::pair<long, long>(0, max_width-1));
    break;
  case DependenceType::NEAREST:
    if (radix > 0) {
      deps.push_back(std::pair<long, long>(std::max(0L, point - (radix-1)/2),
                                           std::min(point + radix/2,
                                                    max_width-1)));
    }
    break;
  case DependenceType::SPREAD:
    {
      for (long i = 0; i < radix; ++i) {
        long dep = (point - i*max_width/radix - (i>0 ? dset : 0)) % max_width;
        if (dep < 0) dep += max_width;
        deps.push_back(std::pair<long, long>(dep, dep));
      }
    }
    break;
  case DependenceType::RANDOM_NEAREST:
    {
      long run_start = -1;
      long i, last_i;
      for (i = std::max(0L, point - (radix-1)/2),
             last_i = std::min(point + radix/2, max_width-1);
           i <= last_i; ++i) {
        // Figure out whether we're including this dependency or not.
        const long hash_value[5] = {graph_index, radix, dset, point, i};
        double value = random_uniform(&hash_value[0], sizeof(hash_value));
        bool include = value < fraction_connected || (radix > 0 && i == point);

        if (include) {
          if (run_start < 0) {
            run_start = i;
          }
        } else {
          if (run_start >= 0) {
            deps.push_back(std::pair<long, long>(run_start, i-1));
          }
          run_start = -1;
        }
      }
      if (run_start >= 0) {
        deps.push_back(std::pair<long, long>(run_start, i-1));
      }
    }
    break;
  default:
    assert(false && "unexpected dependence type");
  };

  return deps;
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
    deps.push_back(std::pair<long, long>(std::max(0L, point-1),
                                         std::min(point+1, max_width-1)));
    break;
  case DependenceType::STENCIL_1D_PERIODIC:
    deps.push_back(std::pair<long, long>(std::max(0L, point-1),
                                         std::min(point+1, max_width-1)));
    if (point-1 < 0) { // Wrap around negative case
      deps.push_back(std::pair<long, long>(max_width-1, max_width-1));
    }
    if (point+1 >= max_width) { // Wrap around positive case
      deps.push_back(std::pair<long, long>(0, 0));
    }
    break;
  case DependenceType::DOM:
    deps.push_back(std::pair<long, long>(std::max(0L, point-1), point));
    break;
  case DependenceType::TREE:
    {
      long parent = point/2;
      deps.push_back(std::pair<long, long>(parent, parent));
    }
    break;
  case DependenceType::FFT:
    {
      long d1 = point - (1 << dset);
      long d2 = point + (1 << dset);
      if (d1 >= 0) {
        deps.push_back(std::pair<long, long>(d1, d1));
      }
      deps.push_back(std::pair<long, long>(point, point));
      if (d2 < max_width) {
        deps.push_back(std::pair<long, long>(d2, d2));
      }
    }
    break;
  case DependenceType::ALL_TO_ALL:
    deps.push_back(std::pair<long, long>(0, max_width-1));
    break;
  case DependenceType::NEAREST:
    if (radix > 0) {
      deps.push_back(std::pair<long, long>(std::max(0L, point - radix/2),
                                           std::min(point + (radix-1)/2,
                                                    max_width-1)));
    }
    break;
  case DependenceType::SPREAD:
    {
      for (long i = 0; i < radix; ++i) {
        long dep = (point + i*max_width/radix + (i>0 ? dset : 0)) % max_width;
        deps.push_back(std::pair<long, long>(dep, dep));
      }
    }
    break;
  case DependenceType::RANDOM_NEAREST:
    {
      long run_start = -1;
      long i, last_i;
      for (i = std::max(0L, point - radix/2),
             last_i = std::min(point + (radix-1)/2, max_width-1);
           i <= last_i; ++i) {
        // Figure out whether we're including this dependency or not.
        const long hash_value[5] = {graph_index, radix, dset, i, point};
        double value = random_uniform(&hash_value[0], sizeof(hash_value));
        bool include = value < fraction_connected || (radix > 0 && i == point);

        if (include) {
          if (run_start < 0) {
            run_start = i;
          }
        } else {
          if (run_start >= 0) {
            deps.push_back(std::pair<long, long>(run_start, i-1));
          }
          run_start = -1;
        }
      }
      if (run_start >= 0) {
        deps.push_back(std::pair<long, long>(run_start, i-1));
      }
    }
    break;
  default:
    assert(false && "unexpected dependence type");
  };

  return deps;
}

void TaskGraph::execute_point(long timestep, long point,
                              char *output_ptr, size_t output_bytes,
                              const char **input_ptr, const size_t *input_bytes,
                              size_t n_inputs,
                              char *scratch_ptr, size_t scratch_bytes) const
{
#ifdef DEBUG_CORE
  // Validate graph_index
  assert(graph_index >= 0 && graph_index < sizeof(TaskGraphMask)*8);
  has_executed_graph |= 1 << graph_index;
#endif

  // Validate timestep and point
  assert(0 <= timestep && timestep < timesteps);

  long offset = offset_at_timestep(timestep);
  long width = width_at_timestep(timestep);
  assert(offset <= point && point < offset+width);

  long last_offset = offset_at_timestep(timestep-1);
  long last_width = width_at_timestep(timestep-1);

  // Validate input
  {
    size_t idx = 0;
    long dset = dependence_set_at_timestep(timestep);
    std::vector<std::pair<long, long> > deps = dependencies(dset, point);
    for (auto span : deps) {
      for (long dep = span.first; dep <= span.second; dep++) {
        if (last_offset <= dep && dep < last_offset + last_width) {
          assert(idx < n_inputs);

          assert(input_bytes[idx] == output_bytes_per_task);
          assert(input_bytes[idx] >= sizeof(std::pair<long, long>));

          const std::pair<long, long> *input = reinterpret_cast<const std::pair<long, long> *>(input_ptr[idx]);
          for (size_t i = 0; i < input_bytes[idx]/sizeof(std::pair<long, long>); ++i) {
            assert(input[i].first == timestep - 1);
            assert(input[i].second == dep);
          }
          idx++;
        }
      }
    }
    // FIXME (Elliott): Legion is currently passing in uninitialized
    // memory for dependencies outside of the last offset/width.
    // assert(idx == n_inputs);
  }

  // Validate output
  assert(output_bytes == output_bytes_per_task);
  assert(output_bytes >= sizeof(std::pair<long, long>));

  // Generate output
  std::pair<long, long> *output = reinterpret_cast<std::pair<long, long> *>(output_ptr);
  for (size_t i = 0; i < output_bytes/sizeof(std::pair<long, long>); ++i) {
    output[i].first = timestep;
    output[i].second = point;
  }

  // Validate scratch
  assert(scratch_bytes == scratch_bytes_per_task);

  // Execute kernel
  Kernel k(kernel);
  k.execute(graph_index, timestep, point, scratch_ptr, scratch_bytes);
}

static TaskGraph default_graph(long graph_index)
{
  TaskGraph graph;

  graph.graph_index = graph_index;
  graph.timesteps = 4;
  graph.max_width = 4;
  graph.dependence = DependenceType::TRIVIAL;
  graph.radix = 3;
  graph.period = -1;
  graph.fraction_connected = 0.25;
  graph.kernel = {KernelType::EMPTY, 0, 16, 0.0};
  graph.output_bytes_per_task = sizeof(std::pair<long, long>);
  graph.scratch_bytes_per_task = 0;
  graph.nb_fields = 0;
  
  return graph;
}

static void needs_argument(int i, int argc, const char *flag) {
  if (i+1 >= argc) {
    fprintf(stderr, "error: Flag \"%s\" requires an argument\n", flag);
    abort();
  }
}

#define STEPS_FLAG "-steps"
#define WIDTH_FLAG "-width"
#define TYPE_FLAG "-type"
#define RADIX_FLAG "-radix"
#define PERIOD_FLAG "-period"
#define FRACTION_FLAG "-fraction"
#define AND_FLAG "-and"

#define KERNEL_FLAG "-kernel"
#define ITER_FLAG "-iter"
#define OUTPUT_FLAG "-output"
#define SCRATCH_FLAG "-scratch"
#define SAMPLE_FLAG "-sample"
#define IMBALANCE_FLAG "-imbalance"

#define SKIP_GRAPH_VALIDATION_FLAG "-skip-graph-validation"
#define FIELD_FLAG "-field"

static void show_help_message(int argc, char **argv) {
  printf("%s: A Task Benchmark\n", argc > 0 ? argv[0] : "task_bench");

  printf("\nGeneral options:\n");
  printf("  %-18s show this help message and exit\n", "-h");
  printf("  %-18s enable verbose output\n", "-v");

  printf("\nOptions for configuring the task graph:\n");
  printf("  %-18s height of task graph\n", STEPS_FLAG " [INT]");
  printf("  %-18s width of task graph\n", WIDTH_FLAG " [INT]");
  printf("  %-18s dependency pattern (see available list below)\n", TYPE_FLAG " [DEP]");
  printf("  %-18s radix of dependency pattern (only for nearest, spread, and random)\n", RADIX_FLAG " [INT]");
  printf("  %-18s period of dependency pattern (only for spread and random)\n", PERIOD_FLAG " [INT]");
  printf("  %-18s fraction of connected dependencies (only for random)\n", FRACTION_FLAG " [FLOAT]");
  printf("  %-18s start configuring next task graph\n", AND_FLAG);

  printf("\nOptions for configuring kernels:\n");
  printf("  %-18s kernel type (see available list below)\n", KERNEL_FLAG " [KERNEL]");
  printf("  %-18s number of iterations\n", ITER_FLAG " [INT]");
  printf("  %-18s output bytes per task\n", OUTPUT_FLAG " [INT]");
  printf("  %-18s scratch bytes per task (only for memory-bound kernel)\n", SCRATCH_FLAG " [INT]");
  printf("  %-18s number of samples (only for memory-bound kernel)\n", SAMPLE_FLAG " [INT]");
  printf("  %-18s amount of load imbalance\n", IMBALANCE_FLAG " [FLOAT]");

  printf("\nSupported dependency patterns:\n");
  for (auto dtype : dtype_by_name()) {
    printf("  %s\n", dtype.first.c_str());
  }

  printf("\nSupported kernel types:\n");
  for (auto ktype : ktype_by_name()) {
    printf("  %s\n", ktype.first.c_str());
  }

  printf("\nLess frequently used options:\n");
  printf("  %-18s number of fields (optimization for certain task bench implementations)\n", FIELD_FLAG " [INT]");
  printf("  %-18s skip task graph validation\n", SKIP_GRAPH_VALIDATION_FLAG);
}

App::App(int argc, char **argv)
  : verbose(false)
  , enable_graph_validation(true)
{
  TaskGraph graph = default_graph(graphs.size());

  // Parse command line
  for (int i = 1; i < argc; i++) {
    if (!strcmp(argv[i], "-h")) {
      show_help_message(argc, argv);
      exit(0);
    }

    if (!strcmp(argv[i], "-v")) {
      verbose = true;
    }

    if (!strcmp(argv[i], SKIP_GRAPH_VALIDATION_FLAG)) {
      enable_graph_validation = false;
    }

    if (!strcmp(argv[i], STEPS_FLAG)) {
      needs_argument(i, argc, STEPS_FLAG);
      long value = atol(argv[++i]);
      if (value <= 0) {
        fprintf(stderr, "error: Invalid flag \"" STEPS_FLAG " %ld\" must be > 0\n", value);
        abort();
      }
      graph.timesteps = value;
    }

    if (!strcmp(argv[i], WIDTH_FLAG)) {
      needs_argument(i, argc, WIDTH_FLAG);
      long value = atol(argv[++i]);
      if (value <= 0) {
        fprintf(stderr, "error: Invalid flag \"" WIDTH_FLAG " %ld\" must be > 0\n", value);
        abort();
      }
      graph.max_width = value;
    }

    if (!strcmp(argv[i], TYPE_FLAG)) {
      needs_argument(i, argc, TYPE_FLAG);
      auto types = dtype_by_name();
      auto name = argv[++i];
      auto type = types.find(name);
      if (type == types.end()) {
        fprintf(stderr, "error: Invalid flag \"-type %s\"\n", name);
        abort();
      }
      graph.dependence = type->second;
    }

    if (!strcmp(argv[i], RADIX_FLAG)) {
      needs_argument(i, argc, RADIX_FLAG);
      long value = atol(argv[++i]);
      if (value < 0) {
        fprintf(stderr, "error: Invalid flag \"" RADIX_FLAG " %ld\" must be >= 0\n", value);
        abort();
      }
      graph.radix = value;
    }

    if (!strcmp(argv[i], PERIOD_FLAG)) {
      needs_argument(i, argc, PERIOD_FLAG);
      long value = atol(argv[++i]);
      if (value < 0) {
        fprintf(stderr, "error: Invalid flag \"" PERIOD_FLAG " %ld\" must be >= 0\n", value);
        abort();
      }
      graph.period = value;
    }

    if (!strcmp(argv[i], FRACTION_FLAG)) {
      needs_argument(i, argc, FRACTION_FLAG);
      double value = atof(argv[++i]);
      if (value < 0 || value > 1) {
        fprintf(stderr, "error: Invalid flag \"" FRACTION_FLAG " %f\" must be >= 0 and <= 1\n", value);
        abort();
      }
      graph.fraction_connected = value;
    }

    if (!strcmp(argv[i], KERNEL_FLAG)) {
      needs_argument(i, argc, KERNEL_FLAG);
      auto types = ktype_by_name();
      auto name = argv[++i];
      auto type = types.find(name);
      if (type == types.end()) {
        fprintf(stderr, "error: Invalid flag \"" KERNEL_FLAG " %s\"\n", name);
        abort();
      }
      graph.kernel.type = type->second;
    }

    if (!strcmp(argv[i], ITER_FLAG)) {
      needs_argument(i, argc, ITER_FLAG);
      long value = atol(argv[++i]);
      if (value < 0) {
        fprintf(stderr, "error: Invalid flag \"" ITER_FLAG " %ld\" must be >= 0\n", value);
        abort();
      }
      graph.kernel.iterations = value;
    }

    if (!strcmp(argv[i], OUTPUT_FLAG)) {
      needs_argument(i, argc, OUTPUT_FLAG);
      long value  = atol(argv[++i]);
      if (value < sizeof(std::pair<long, long>)) {
        fprintf(stderr, "error: Invalid flag \"" OUTPUT_FLAG " %ld\" must be >= %lu\n",
                value, sizeof(std::pair<long, long>));
        abort();
      }
      graph.output_bytes_per_task = value;
    }

    if (!strcmp(argv[i], SCRATCH_FLAG)) {
      needs_argument(i, argc, SCRATCH_FLAG);
      long value  = atol(argv[++i]);
      if (value < 0) {
        fprintf(stderr, "error: Invalid flag \"" SCRATCH_FLAG " %ld\" must be >= 0\n", value);
        abort();
      }
      graph.scratch_bytes_per_task = value;
    }

    if (!strcmp(argv[i], SAMPLE_FLAG)) {
      needs_argument(i, argc, SAMPLE_FLAG);
      int value  = atoi(argv[++i]);
      if (value < 0) {
        fprintf(stderr, "error: Invalid flag \"" SAMPLE_FLAG " %d\" must be >= 0\n", value);
        abort();
      }
      graph.kernel.samples = value;
    }

    if (!strcmp(argv[i], IMBALANCE_FLAG)) {
      needs_argument(i, argc, IMBALANCE_FLAG);
      double value = atof(argv[++i]);
      if (value < 0 || value > 2) {
        fprintf(stderr, "error: Invalid flag \"" IMBALANCE_FLAG " %f\" must be >= 0 and <= 2\n", value);
        abort();
      }
      graph.kernel.imbalance = value;
    }
    
    if (!strcmp(argv[i], FIELD_FLAG)) {
      needs_argument(i, argc, FIELD_FLAG);
      int value  = atoi(argv[++i]);
      if (value < 0) {
        fprintf(stderr, "error: Invalid flag \"" FIELD_FLAG " %d\" must be > 1\n", value);
        abort();
      }
      graph.nb_fields = value;
    }

    if (!strcmp(argv[i], AND_FLAG)) {
      // Hack: set default value of period for random graph
      if (graph.period < 0) {
        graph.period = needs_period(graph.dependence) ? 3 : 0;
      }
      graphs.push_back(graph);
      graph = default_graph(graphs.size());
    }
  }

  if (graph.period < 0) {
    graph.period = needs_period(graph.dependence) ? 3 : 0;
  }
  
  graphs.push_back(graph);

  // check nb_fields, if not set by user, set it to timesteps
  for (int j = 0; j < graphs.size(); j++) {
    TaskGraph &g = graphs[j];
    if (g.nb_fields == 0) {
      g.nb_fields = g.timesteps;
    }
  }
  
  check();
}

void App::check() const
{
#ifdef DEBUG_CORE
  if (graphs.size() >= sizeof(TaskGraphMask)*8) {
    fprintf(stderr, "error: Can only execute up to %lu task graphs\n", sizeof(TaskGraphMask)*8);
    abort();
  }
#endif

  // Validate task graph is well-formed
  for (auto g : graphs) {
    if (needs_period(g.dependence) && g.period == 0) {
      fprintf(stderr, "error: Graph type \"%s\" requires a non-zero period (specify with -period)\n",
              name_by_dtype().at(g.dependence).c_str());
      abort();
    } else if (!needs_period(g.dependence) && g.period != 0) {
      fprintf(stderr, "error: Graph type \"%s\" does not support user-configurable period\n",
              name_by_dtype().at(g.dependence).c_str());
      abort();
    }

    // This is required to avoid wrapping around with later dependence sets.
    long spread = (g.max_width + g.radix - 1) / g.radix;
    if (g.dependence == DependenceType::SPREAD && g.period > spread) {
      fprintf(stderr, "error: Graph type \"%s\" requires a period that is at most %ld\n",
              name_by_dtype().at(g.dependence).c_str(), spread);
      abort();
    }

    for (long t = 0; t < g.timesteps; ++t) {
      long offset = g.offset_at_timestep(t);
      long width = g.width_at_timestep(t);
      assert(offset >= 0);
      assert(width >= 0);
      assert(offset + width <= g.max_width);

      long dset = g.dependence_set_at_timestep(t);
      assert(dset >= 0 && dset <= g.max_dependence_sets());
    }
    for (long dset = 0; dset < g.max_dependence_sets(); ++dset) {
      std::map<long, std::set<long> > materialized_deps;
      for (long point = 0; point < g.max_width; ++point) {
        auto deps = g.dependencies(dset, point);
        for (auto dep : deps) {
          for (long dp = dep.first; dp <= dep.second; ++dp) {
            assert(materialized_deps[point].count(dp) == 0); // No duplicates
            materialized_deps[point].insert(dp);
          }
        }
      }

      // Reverse dependencies mirror dependencies
      for (long point = 0; point < g.max_width; ++point) {
        auto rdeps = g.reverse_dependencies(dset, point);
        for (auto rdep : rdeps) {
          for (long rdp = rdep.first; rdp <= rdep.second; ++rdp) {
            assert(materialized_deps[rdp].count(point) == 1);
          }
        }
      }
    }
  }
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
    printf("      Dependence Type: %s\n", dnames.at(g.dependence).c_str());
    printf("      Radix: %ld\n", g.radix);
    printf("      Period: %ld\n", g.period);
    printf("      Fraction Connected: %f\n", g.fraction_connected);
    printf("      Kernel:\n");
    printf("        Type: %s\n", knames.at(g.kernel.type).c_str());
    printf("        Iterations: %ld\n", g.kernel.iterations);
    printf("        Samples: %d\n", g.kernel.samples);
    printf("        Imbalance: %f\n", g.kernel.imbalance);
    printf("      Output Bytes: %lu\n", g.output_bytes_per_task);
    printf("      Scratch Bytes: %lu\n", g.scratch_bytes_per_task);

    if (verbose) {
      for (long t = 0; t < g.timesteps; ++t) {
        long offset = g.offset_at_timestep(t);
        long width = g.width_at_timestep(t);
        long dset = g.dependence_set_at_timestep(t);
        printf("      Dependencies (offset %ld, width %ld):\n",
               g.offset_at_timestep(t), g.width_at_timestep(t));
        for (long p = offset; p < offset + width; ++p) {
          printf("        Point %ld:", p);
          auto deps = g.dependencies(dset, p);
          for (auto dep : deps) {
            for (long dp = dep.first; dp <= dep.second; ++dp) {
              printf(" %ld", dp);
            }
          }
          printf("\n");
        }
#ifdef EXTRA_VERBOSE
        printf("      Reverse Dependencies (offset %ld, width %ld):\n",
               g.offset_at_timestep(t), g.width_at_timestep(t));
        for (long p = offset; p < offset + width; ++p) {
          printf("        Point %ld:", p);
          auto deps = g.reverse_dependencies(dset, p);
          for (auto dep : deps) {
            for (long dp = dep.first; dp <= dep.second; ++dp) {
              printf(" %ld", dp);
            }
          }
          printf("\n");
        }
#endif
      }
    }
  }
}

// IMPORTANT: Keep this up-to-date with kernel implementations
long long count_flops_per_task(const TaskGraph &g, long timestep, long point)
{
  switch(g.kernel.type) {
  case KernelType::EMPTY:
  case KernelType::BUSY_WAIT:
  case KernelType::MEMORY_BOUND:
    return 0;
    
  case KernelType::COMPUTE_DGEMM:
  {
    long N = sqrt(g.scratch_bytes_per_task / (3 * sizeof(double))); 
    return 2 * N * N * N * g.kernel.iterations;
  }
  
  case KernelType::MEMORY_DAXPY:
    return 0;

  case KernelType::COMPUTE_BOUND:
    return 2 * 64 * g.kernel.iterations + 64;

  case KernelType::COMPUTE_BOUND2:
    return 2 * 32 * g.kernel.iterations;

  case KernelType::IO_BOUND:
    return 0;

  case KernelType::LOAD_IMBALANCE:
  {
    long iterations = select_imbalance_iterations(g.kernel, g.graph_index, timestep, point);
    return 2 * 64 * iterations + 64;
  }

  default:
    assert(false && "unimplemented kernel type");
  };
}

// IMPORTANT: Keep this up-to-date with kernel implementations
long long count_bytes_per_task(const TaskGraph &g, long timestep, long point)
{
  switch(g.kernel.type) {
  case KernelType::EMPTY:
  case KernelType::BUSY_WAIT:
    return 0;

  case KernelType::MEMORY_BOUND:
    return g.scratch_bytes_per_task * g.kernel.iterations / g.kernel.samples;

  case KernelType::MEMORY_DAXPY:
    return g.scratch_bytes_per_task * g.kernel.iterations / g.kernel.samples;

  case KernelType::COMPUTE_DGEMM:
  case KernelType::COMPUTE_BOUND:
  case KernelType::COMPUTE_BOUND2:
  case KernelType::IO_BOUND:
  case KernelType::LOAD_IMBALANCE:
    return 0;
  default:
    assert(false && "unimplemented kernel type");
  };
}

static long long count_flops(const TaskGraph &g)
{
  long long flops = 0;
  for (long t = 0; t < g.timesteps; ++t) {
    long offset = g.offset_at_timestep(t);
    long width = g.width_at_timestep(t);

    for (long point = offset; point < offset + width; ++point) {
      flops += count_flops_per_task(g, t, point);
    }
  }
  return flops;
}

static long long count_bytes(const TaskGraph &g)
{
  long long bytes = 0;
  for (long t = 0; t < g.timesteps; ++t) {
    long offset = g.offset_at_timestep(t);
    long width = g.width_at_timestep(t);

    for (long point = offset; point < offset + width; ++point) {
      bytes += count_bytes_per_task(g, t, point);
    }
  }
  return bytes;
}

void App::report_timing(double elapsed_seconds) const
{
  long long total_num_tasks = 0;
  long long total_num_deps = 0;
  long long flops = 0;
  long long bytes = 0;
  for (auto g : graphs) {
    long long num_tasks = 0;
    long long num_deps = 0;
#ifdef DEBUG_CORE
    if (enable_graph_validation) {
      assert(has_executed_graph.load() & (1 << g.graph_index) != 0);
    }
#endif
    for (long t = 0; t < g.timesteps; ++t) {
      long offset = g.offset_at_timestep(t);
      long width = g.width_at_timestep(t);
      long dset = g.dependence_set_at_timestep(t);

      num_tasks += width;

      for (long p = offset; p < offset + width; ++p) {
        auto deps = g.dependencies(dset, p);
        for (auto dep : deps) {
          num_deps += dep.second - dep.first + 1;
        }
      }
    }

    total_num_tasks += num_tasks;
    total_num_deps += num_deps;
    flops += count_flops(g);
    bytes += count_bytes(g);
  }

  printf("Total Tasks %lld\n", total_num_tasks);
  printf("Total Dependencies %lld\n", total_num_deps);
  printf("Total FLOPs %lld\n", flops);
  printf("Total Bytes %lld\n", bytes);
  printf("Elapsed Time %e seconds\n", elapsed_seconds);
  printf("FLOP/s %e\n", flops/elapsed_seconds);
  printf("B/s %e\n", bytes/elapsed_seconds);

#ifdef DEBUG_CORE
  printf("Task Graph Execution Mask %llx\n", has_executed_graph.load());
#endif
}
