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

#ifndef CORE_C_H
#define CORE_C_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum dependence_type_t {
  TRIVIAL,
  NO_COMM,
  STENCIL_1D,
  STENCIL_1D_PERIODIC,
  DOM,
  TREE,
  FFT,
  ALL_TO_ALL,
} dependence_type_t;

typedef enum kernel_type_t {
  EMPTY,
  MEMORY_BOUND,
  COMPUTE_BOUND,
} kernel_type_t;

typedef struct kernel_t {
  kernel_type_t type;
  long iterations;
  // TODO: Add parameters for load imbalance, etc.
} kernel_t;

void kernel_execute(kernel_t kernel);

typedef struct task_graph_t {
  long timesteps;
  long max_width;
  dependence_type_t dependence;
  kernel_t kernel;
} task_graph_t;

typedef struct dependencies_t {
  void *impl;
} dependencies_t;

long task_graph_offset_at_timestep(task_graph_t graph, long timestep);
long task_graph_width_at_timestep(task_graph_t graph, long timestep);
long task_graph_max_dependence_sets(task_graph_t graph);
long task_graph_dependence_set_at_timestep(task_graph_t graph, long timestep);
dependencies_t task_graph_dependencies(task_graph_t graph, long dset, long point);

typedef struct interval_t {
  // represents the INCLUSIVE interval from begin to end
  long begin;
  long end;
} interval_t;

long dependencies_get_num_intervals(dependencies_t dependencies);
interval_t dependencies_get_interval(dependencies_t dependencies, long index);

typedef struct app_t {
  void *impl;
} app_t;

typedef struct task_graphs_t {
  void *impl;
} task_graphs_t;

task_graphs_t app_task_graphs(app_t app);
bool app_verbose(app_t app);
void app_check(app_t app);
void app_display(app_t app);

#ifdef __cplusplus
}
#endif

#endif
