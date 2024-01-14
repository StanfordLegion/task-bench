/* Copyright 2020 Stanford University
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
#include <cublas_v2.h>

#include <string>
#include <vector>

typedef dependence_type_t DependenceType;

typedef kernel_type_t KernelType;

struct TaskGraph;

struct Kernel : public kernel_t {
  Kernel() = default;
  Kernel(kernel_t k) : kernel_t(k) {}

private:
  void execute(long graph_index, long timestep, long point,
               char *scratch_ptr, size_t scratch_bytes, double expect_time = 0) const;
  friend struct TaskGraph;
};

struct GPUKernel : public kernel_t {
  GPUKernel() = default;
  GPUKernel(kernel_t k) : kernel_t(k) {}

private:
  void execute(long graph_index, long timestep, long point,
               char *scratch_ptr, size_t scratch_bytes, double expect_time = 0, cublasHandle_t inhandle = nullptr) const;
  friend struct TaskGraph;

};

struct TaskGraph : public task_graph_t {
  TaskGraph() = default;
  TaskGraph(task_graph_t t) : task_graph_t(t) {}

  long offset_at_timestep(long timestep) const;
  long width_at_timestep(long timestep) const;

  long max_dependence_sets() const;
  // number of timesteps after which the pattern of dependence sets repeats itself
  long timestep_period() const;
  long dependence_set_at_timestep(long timestep) const;

  // only can be called when dependence type is USER_DEFINED
  void set_task_info(std::string task_info_file);
  void set_task_info(CustomTaskInfo *task_info);
  CustomTaskInfo *get_task_info() const;
  void destroy_task_info() const;
  std::vector<std::pair<long, long>> getDependenceFromTaskInfo(long t, long point) const;
  long getUserDefineWidthAtTimestep(long timestep) const;
  long getUserDefineMaxWidth() const;

  double getTaskExecTimeAtPoint(long t, long point, bool use_gpu) const;
  std::string getTaskTypeAtPoint(long t, long point) const;

  // std::pair(a, b) represents the INCLUSIVE interval from a to b
  std::vector<std::pair<long, long> > reverse_dependencies(long dset, long point) const;
  std::vector<std::pair<long, long> > dependencies(long dset, long point) const;
  std::vector<std::pair<long, long> > random_dependencies(long dset, long point, int t) const;
  std::vector<std::pair<long, long> > user_defined_dependencies(int t, long point) const;

  // Same as above, but using user-supplied buffer. Returns number of
  // elements written. WARNING: If more elements are written than can
  // fit in the buffer, results in buffer overflow. Use methods below
  // to figure out how large of a buffer to alloate.
  size_t reverse_dependencies(long dset, long point, std::pair<long, long> *deps) const;
  size_t dependencies(long dset, long point, std::pair<long, long> *deps) const;
  size_t random_dependencies(long dset, long point, std::pair<long, long> *deps, int t) const;

  // Note: May over-approximate the number of dependencies.
  size_t num_reverse_dependencies(long dset, long point) const;
  size_t num_dependencies(long dset, long point) const;

  void execute_point(long timestep, long point,
                     char *output_ptr, size_t output_bytes,
                     const char **input_ptr, const size_t *input_bytes,
                     size_t n_inputs,
                     char *scratch_ptr, size_t scratch_bytes) const;
  void execute_point_common(int starpu_cuda, long timestep, long point,
                     char *output_ptr, size_t output_bytes,
                     const char **input_ptr, const size_t *input_bytes,
                     size_t n_inputs,
                     char *scratch_ptr, size_t scratch_bytes, cublasHandle_t handle) const;
  static void prepare_scratch(char *scratch_ptr, size_t scratch_bytes);
};

struct App {
  std::vector<TaskGraph> graphs;
  long nodes;
  int verbose;
  bool enable_graph_validation;

  App(int argc, char **argv);
  void check() const;
  void display() const;
  void report_timing(double elapsed_seconds) const;
};

// Make sure core types are POD
static_assert(std::is_pod<Kernel>::value, "Kernel must be POD");
static_assert(std::is_pod<TaskGraph>::value, "TaskGraph must be POD");

long long count_flops_per_task(const TaskGraph &g, long timestep, long point);
long long count_bytes_per_task(const TaskGraph &g, long timestep, long point);

// return timesteps
long set_task_info(std::string task_info_file);
void destroy_task_info();

void init();

#endif