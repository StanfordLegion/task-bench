/* Copyright 2019 Los Alamos National Laboratory
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <mpi.h>
#include <math.h>
#include <starpu_mpi.h>
#include <starpu_profiling.h>
#include "data.h"
#include "core.h"
#include "timer.h"

#include <unistd.h>

#define VERBOSE_LEVEL 0

#define USE_CORE_VERIFICATION
#define ENABLE_PRUNE_MPI_TASK_INSERT

char **extra_local_memory;

typedef struct payload_s {
  int graph_id;
  int i;
  int j;
  TaskGraph graph;
}payload_t;

static void task1(void *descr[], void *cl_arg)
{
  float *out;
  payload_t payload;
  out = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  starpu_codelet_unpack_args(cl_arg, &payload);
  
  int tid = starpu_worker_get_id();
  
#if defined (USE_CORE_VERIFICATION) 
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)out);
  input_bytes.push_back(graph.output_bytes_per_task);
  
  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);
#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = 0.0;
  printf("Graph %d, Task1, [%d, %d], rank %d, core %d, out %.2f, local_mem %p\n", payload.graph_id, payload.i, payload.j, rank, tid, *out, extra_local_memory[tid]);
#endif
}

static void task2(void *descr[], void *cl_arg)
{
  float *in1, *out;
  payload_t payload;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  starpu_codelet_unpack_args(cl_arg, &payload);
  
  int tid = starpu_worker_get_id();
  
#if defined (USE_CORE_VERIFICATION)   
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)in1);
  input_bytes.push_back(graph.output_bytes_per_task);
  
  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);
#else  
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);
  
  *out = *in1 + 1.0;
  printf("Graph %d, Task2, [%d, %d], rank %d, core %d, in1 %.2f, out %.2f, local_mem %p\n", payload.graph_id, payload.i, payload.j, rank, tid, *in1, *out, extra_local_memory[tid]);
#endif
}

static void task3(void *descr[], void *cl_arg)
{
  float *in1, *in2, *out;
  payload_t payload;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  starpu_codelet_unpack_args(cl_arg, &payload);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)in1);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in2);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);
#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + 1.0;
  printf("Graph %d, Task3, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, out %.2f, local_mem %p\n", payload.graph_id, payload.i, payload.j, rank, tid, *in1, *in2, *out, extra_local_memory[tid]);
#endif
}

static void task4(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *out;
  payload_t payload;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
  starpu_codelet_unpack_args(cl_arg, &payload);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)in1);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in2);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in3);
  input_bytes.push_back(graph.output_bytes_per_task);

  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + 1.0;
  printf("Graph %d, Task4, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, out %.2f, local_mem %p\n", payload.graph_id, payload.i, payload.j, rank, tid, *in1, *in2, *in3, *out, extra_local_memory[tid]);
#endif
}

static void task5(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *in4, *out;
  payload_t payload;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[4]);
  starpu_codelet_unpack_args(cl_arg, &payload);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)in1);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in2);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in3);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in4);
  input_bytes.push_back(graph.output_bytes_per_task);
  
  
  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + *in4 + 1.0;
  printf("Graph %d, Task5, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, out %.2f, local_mem %p\n", payload.graph_id, payload.i, payload.j, rank, tid, *in1, *in2, *in3, *in4, *out, extra_local_memory[tid]);
#endif
}

static void task6(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *in4, *in5, *out;
  payload_t payload;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[4]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[5]);
  starpu_codelet_unpack_args(cl_arg, &payload);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)in1);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in2);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in3);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in4);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in5);
  input_bytes.push_back(graph.output_bytes_per_task);
  
  
  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + *in4 + *in5 + 1.0;
  printf("Graph %d, Task6, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, in5 %.2f, out %.2f, local_mem %p\n", payload.graph_id, payload.i, payload.j, rank, tid, *in1, *in2, *in3, *in4, *in5, *out, extra_local_memory[tid]);
#endif
}

static void task7(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *in4, *in5, *in6, *out;
  payload_t payload;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[4]);
  in6 = (float *)STARPU_MATRIX_GET_PTR(descr[5]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[6]);
  starpu_codelet_unpack_args(cl_arg, &payload);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)in1);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in2);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in3);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in4);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in5);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in6);
  input_bytes.push_back(graph.output_bytes_per_task);
  
  
  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + *in4 + *in5 + *in6 + 1.0;
  printf("Graph %d, Task6, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, in5 %.2f, in6 %.2f, out %.2f, local_mem %p\n", 
    payload.graph_id, payload.i, payload.j, rank, tid, *in1, *in2, *in3, *in4, *in5, *in6, *out, extra_local_memory[tid]);
#endif
}

static void task8(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *in4, *in5, *in6, *in7, *out;
  payload_t payload;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[4]);
  in6 = (float *)STARPU_MATRIX_GET_PTR(descr[5]);
  in7 = (float *)STARPU_MATRIX_GET_PTR(descr[6]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[7]);
  starpu_codelet_unpack_args(cl_arg, &payload);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)in1);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in2);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in3);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in4);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in5);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in6);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in7);
  input_bytes.push_back(graph.output_bytes_per_task);
  
  
  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + *in4 + *in5 + *in6 + *in7 + 1.0;
  printf("Graph %d, Task6, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, in5 %.2f, in6 %.2f, in7 %.2f, out %.2f, local_mem %p\n", 
    payload.graph_id, payload.i, payload.j, rank, tid, *in1, *in2, *in3, *in4, *in5, *in6, *in7, *out, extra_local_memory[tid]);
#endif
}

static void task9(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *in4, *in5, *in6, *in7, *in8, *out;
  payload_t payload;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[4]);
  in6 = (float *)STARPU_MATRIX_GET_PTR(descr[5]);
  in7 = (float *)STARPU_MATRIX_GET_PTR(descr[6]);
  in8 = (float *)STARPU_MATRIX_GET_PTR(descr[7]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[8]);
  starpu_codelet_unpack_args(cl_arg, &payload);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)in1);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in2);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in3);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in4);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in5);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in6);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in7);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in8);
  input_bytes.push_back(graph.output_bytes_per_task);
  
  
  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + *in4 + *in5 + *in6 + *in7 + *in8 + 1.0;
  printf("Graph %d, Task6, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, in5 %.2f, in6 %.2f, in7 %.2f, in8 %.2f, out %.2f, local_mem %p\n", 
    payload.graph_id, payload.i, payload.j, rank, tid, *in1, *in2, *in3, *in4, *in5, *in6, *in7, *in8, *out, extra_local_memory[tid]);
#endif
}

static void task10(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *in4, *in5, *in6, *in7, *in8, *in9, *out;
  payload_t payload;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[4]);
  in6 = (float *)STARPU_MATRIX_GET_PTR(descr[5]);
  in7 = (float *)STARPU_MATRIX_GET_PTR(descr[6]);
  in8 = (float *)STARPU_MATRIX_GET_PTR(descr[7]);
  in9 = (float *)STARPU_MATRIX_GET_PTR(descr[8]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[9]);
  starpu_codelet_unpack_args(cl_arg, &payload);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  TaskGraph graph = payload.graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph.output_bytes_per_task;
  std::vector<const char *> input_ptrs;
  std::vector<size_t> input_bytes;
  input_ptrs.push_back((char*)in1);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in2);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in3);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in4);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in5);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in6);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in7);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in8);
  input_bytes.push_back(graph.output_bytes_per_task);
  input_ptrs.push_back((char*)in9);
  input_bytes.push_back(graph.output_bytes_per_task);
  
  
  graph.execute_point(payload.i, payload.j, output_ptr, output_bytes,
                      input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[tid], graph.scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + *in4 + *in5 + *in6 + *in7 + *in8 + *in9 + 1.0;
  printf("Graph %d, Task6, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, in5 %.2f, in6 %.2f, in7 %.2f, in8 %.2f, in9 %.2f, out %.2f, local_mem %p\n", 
    payload.graph_id, payload.i, payload.j, rank, tid, *in1, *in2, *in3, *in4, *in5, *in6, *in7, *in8, *in9, *out, extra_local_memory[tid]);
#endif
}

struct starpu_codelet cl_task1; 
struct starpu_codelet cl_task2;
struct starpu_codelet cl_task3;
struct starpu_codelet cl_task4;
struct starpu_codelet cl_task5;
struct starpu_codelet cl_task6;
struct starpu_codelet cl_task7;
struct starpu_codelet cl_task8;
struct starpu_codelet cl_task9;
struct starpu_codelet cl_task10;

typedef struct matrix_s {
  int MT;
  int NT;
  starpu_ddesc_t *ddescA;
}matrix_t;

struct StarPUApp : public App {
public:
  StarPUApp(int argc, char **argv);
  ~StarPUApp();
  void execute_main_loop();
  void execute_timestep(size_t idx, long t);
private:
  void insert_task(int num_args, payload_t payload, std::vector<starpu_data_handle_t> &args, std::vector<std::pair<long, long>> &args_loc);
  void parse_argument(int argc, char **argv);
  void debug_printf(int verbose_level, const char *format, ...);
private:
  struct starpu_conf *conf;
  int rank;
  int world;
  int nb_cores;
  int P;
  int Q;
  int MB;
  matrix_t mat_array[10];
};

void StarPUApp::insert_task(int num_args, payload_t payload, std::vector<starpu_data_handle_t> &args, std::vector<std::pair<long, long>> &args_loc)
{
  void (*callback)(void*) = NULL;
  starpu_ddesc_t *descA = mat_array[payload.graph_id].ddescA;
  switch(num_args) {
  case 1:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(cl_task1),
        STARPU_VALUE,    &payload, sizeof(payload_t),
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task1",
        0);
    break;
  case 2:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(cl_task2),
        STARPU_VALUE,    &payload, sizeof(payload_t),
        STARPU_R, args[1],
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task2",
        0);
    break;
  case 3:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(cl_task3),
        STARPU_VALUE,    &payload, sizeof(payload_t),
        STARPU_R, args[1],
        STARPU_R, args[2],
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task3",
        0);
    break;
  case 4:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(cl_task4),
        STARPU_VALUE,    &payload, sizeof(payload_t),
        STARPU_R, args[1],
        STARPU_R, args[2],
        STARPU_R, args[3],
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task4",
        0);
    break;
  case 5:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(cl_task5),
        STARPU_VALUE,    &payload, sizeof(payload_t),
        STARPU_R, args[1],
        STARPU_R, args[2],
        STARPU_R, args[3],
        STARPU_R, args[4],
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task5",
        0);
    break;
  case 6:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(cl_task6),
        STARPU_VALUE,    &payload, sizeof(payload_t),
        STARPU_R, args[1],
        STARPU_R, args[2],
        STARPU_R, args[3],
        STARPU_R, args[4],
        STARPU_R, args[5],
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task6",
        0);
    break;
  case 7:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(cl_task7),
        STARPU_VALUE,    &payload, sizeof(payload_t),
        STARPU_R, args[1],
        STARPU_R, args[2],
        STARPU_R, args[3],
        STARPU_R, args[4],
        STARPU_R, args[5],
        STARPU_R, args[6],
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task7",
        0);
    break;
  case 8:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(cl_task8),
        STARPU_VALUE,    &payload, sizeof(payload_t),
        STARPU_R, args[1],
        STARPU_R, args[2],
        STARPU_R, args[3],
        STARPU_R, args[4],
        STARPU_R, args[5],
        STARPU_R, args[6],
        STARPU_R, args[7],
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task8",
        0);
    break;
  case 9:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(cl_task9),
        STARPU_VALUE,    &payload, sizeof(payload_t),
        STARPU_R, args[1],
        STARPU_R, args[2],
        STARPU_R, args[3],
        STARPU_R, args[4],
        STARPU_R, args[5],
        STARPU_R, args[6],
        STARPU_R, args[7],
        STARPU_R, args[8],
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task9",
        0);
    break;
  case 10:
    starpu_mpi_insert_task(
        MPI_COMM_WORLD, &(cl_task10),
        STARPU_VALUE,    &payload, sizeof(payload_t),
        STARPU_R, args[1],
        STARPU_R, args[2],
        STARPU_R, args[3],
        STARPU_R, args[4],
        STARPU_R, args[5],
        STARPU_R, args[6],
        STARPU_R, args[7],
        STARPU_R, args[8],
        STARPU_R, args[9],
        STARPU_RW, args[0],
        STARPU_CALLBACK,  callback,
        STARPU_PRIORITY,  0,
        STARPU_NAME, "task10",
        0);
    break;
  default:
    assert(false && "unexpected num_args");
  };
}

void StarPUApp::parse_argument(int argc, char **argv)
{
  for (int i = 1; i < argc; i++) {
    if (!strcmp(argv[i], "-mb")) {
      MB = atoi(argv[++i]);
    }
    if (!strcmp(argv[i], "-core")) {
      nb_cores = atoi(argv[++i]);
    }
    if (!strcmp(argv[i], "-p")) {
      P = atoi(argv[++i]);
    }
    if (!strcmp(argv[i], "-S")) {
      starpu_enable_supertiling = true;
    }
  }
}

StarPUApp::StarPUApp(int argc, char **argv)
  : App(argc, argv)
{
  cl_task1.where     = STARPU_CPU;                                   
  cl_task1.cpu_funcs[0]  = task1;                                       
  cl_task1.nbuffers  = 1;                                           
  cl_task1.name      = "task1";
  
  cl_task2.where     = STARPU_CPU;                                   
  cl_task2.cpu_funcs[0]  = task2;                                       
  cl_task2.nbuffers  = 2;                                           
  cl_task2.name      = "task2";
  
  cl_task3.where     = STARPU_CPU;                                   
  cl_task3.cpu_funcs[0]  = task3;                                       
  cl_task3.nbuffers  = 3;                                           
  cl_task3.name      = "task3";
  
  cl_task4.where     = STARPU_CPU;                                   
  cl_task4.cpu_funcs[0]  = task4;                                       
  cl_task4.nbuffers  = 4;                                           
  cl_task4.name      = "task4";
  
  cl_task5.where     = STARPU_CPU;                                   
  cl_task5.cpu_funcs[0]  = task5;                                       
  cl_task5.nbuffers  = 5;                                           
  cl_task5.name      = "task5";
  
  cl_task6.where     = STARPU_CPU;                                   
  cl_task6.cpu_funcs[0]  = task6;                                       
  cl_task6.nbuffers  = 6;                                           
  cl_task6.name      = "task6";
  
  cl_task7.where     = STARPU_CPU;                                   
  cl_task7.cpu_funcs[0]  = task7;                                       
  cl_task7.nbuffers  = 7;                                           
  cl_task7.name      = "task7";
  
  cl_task8.where     = STARPU_CPU;                                   
  cl_task8.cpu_funcs[0]  = task8;                                       
  cl_task8.nbuffers  = 8;                                           
  cl_task8.name      = "task8";
  
  cl_task9.where     = STARPU_CPU;                                   
  cl_task9.cpu_funcs[0]  = task9;                                       
  cl_task9.nbuffers  = 9;                                           
  cl_task9.name      = "task9";
  
  cl_task10.where     = STARPU_CPU;                                   
  cl_task10.cpu_funcs[0]  = task10;                                       
  cl_task10.nbuffers  = 10;                                           
  cl_task10.name      = "task10";
  
  int i;
  
  P = 1;
  MB = 2;
  nb_cores = 1;
  
  parse_argument(argc, argv);
  
  conf =  (struct starpu_conf *)malloc (sizeof(struct starpu_conf));
  starpu_conf_init( conf );

  conf->ncpus = nb_cores;
  conf->ncuda = 0;
  conf->nopencl = 0;
  conf->sched_policy_name = "lws";
  
  int ret;
  ret = starpu_init(conf);
  STARPU_CHECK_RETURN_VALUE(ret, "starpu_init");
  ret = starpu_mpi_init(&argc, &argv, 1);
  STARPU_CHECK_RETURN_VALUE(ret, "starpu_mpi_init");
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);
  starpu_mpi_comm_size(MPI_COMM_WORLD, &world);
  
  Q = world/P;
  assert(P*Q == world);  
  
  size_t max_scratch_bytes_per_task = 0;
  
  int MB_cal = 0;
  
  for (i = 0; i < graphs.size(); i++) {
    TaskGraph &graph = graphs[i];
    matrix_t &mat = mat_array[i];
    
    MB_cal = sqrt(graph.output_bytes_per_task / sizeof(float));
    if (MB_cal > MB) {
      MB = MB_cal;
    }
    
    mat.NT = graph.max_width;
    mat.MT = graph.nb_fields;
  
    debug_printf(0, "mb %d, mt %d, nt %d, timesteps %d, enable_supertiling %d, nb_fields %d\n", MB, mat.MT, mat.NT, graph.timesteps, starpu_enable_supertiling, graph.nb_fields);
    assert (graph.output_bytes_per_task <= sizeof(float) * MB * MB);

    mat.ddescA = create_and_distribute_data(rank, world, MB, MB, mat.MT, mat.NT, P, Q, i);
    
    if (graph.scratch_bytes_per_task > max_scratch_bytes_per_task) {
      max_scratch_bytes_per_task = graph.scratch_bytes_per_task;
    }
  }
   
  extra_local_memory = (char**)malloc(sizeof(char*) * nb_cores);
  assert(extra_local_memory != NULL);
  for (i = 0; i < nb_cores; i++) {
    if (max_scratch_bytes_per_task > 0) {
      extra_local_memory[i] = (char*)malloc(sizeof(char)*max_scratch_bytes_per_task);
    } else {
      extra_local_memory[i] = NULL;
    }
  }
  
  debug_printf(0, "max_scratch_bytes_per_task %lld\n", max_scratch_bytes_per_task);
}

StarPUApp::~StarPUApp()
{
  int i;
  for (i = 0; i < nb_cores; i++) {
    if (extra_local_memory[i] != NULL) {
      free(extra_local_memory[i]);
      extra_local_memory[i] = NULL;
    }
  }
  free(extra_local_memory);
  extra_local_memory = NULL;
  
  for (i = 0; i < graphs.size(); i++) {
    matrix_t &mat = mat_array[i];
    destroy_data(mat.ddescA);
  }
  
  if (conf != NULL) {
    free (conf);
  } 
  starpu_mpi_shutdown();
  starpu_shutdown();
}

void StarPUApp::execute_main_loop()
{
  if (rank == 0) {
    display();
  }

  void (*callback)(void*) = NULL;

  int x, y;

  /* start timer */
  starpu_mpi_barrier(MPI_COMM_WORLD);
  if (rank == 0) {
    Timer::time_start();
  }
  
  for (int i = 0; i < graphs.size(); i++) {
    const TaskGraph &g = graphs[i];

    for (y = 0; y < g.timesteps; y++) {
      execute_timestep(i, y);
    }
  }

  starpu_task_wait_for_all();
  starpu_mpi_barrier(MPI_COMM_WORLD);
  if (rank == 0) {
    double elapsed = Timer::time_end();
    report_timing(elapsed);
  }
}

void StarPUApp::execute_timestep(size_t idx, long t)
{
  const TaskGraph &g = graphs[idx];
  long offset = g.offset_at_timestep(t);
  long width = g.width_at_timestep(t);
  long dset = g.dependence_set_at_timestep(t);
  matrix_t &mat = mat_array[idx];
  int nb_fields = g.nb_fields;
  
  std::vector<starpu_data_handle_t> args;
  std::vector<std::pair<long, long>> args_loc;
  payload_t payload;
  
  debug_printf(1, "ts %d, offset %d, width %d, offset+width-1 %d\n", t, offset, width, offset+width-1);
  for (int x = offset; x <= offset+width-1; x++) {
    std::vector<std::pair<long, long> > deps = g.dependencies(dset, x);
    int num_args; 
#ifdef ENABLE_PRUNE_MPI_TASK_INSERT
    int has_task = 0;   
    
    if(desc_islocal(mat.ddescA, t%nb_fields, x)) {
      has_task = 1;
    }
    
    if (deps.size() != 0 && t != 0 && has_task != 1) {
      for (std::pair<long, long> dep : deps) {
        for (int i = dep.first; i <= dep.second; i++) {
          if(desc_islocal(mat.ddescA, (t-1)%nb_fields, i)) {
            has_task = 1;
          }
        }
      }
    }

    if( t < g.timesteps-1 && has_task != 1 ){
      long dset_r = g.dependence_set_at_timestep(t+1);
      std::vector<std::pair<long, long> > rdeps = g.reverse_dependencies(dset_r, x);
      for (std::pair<long, long> rdep : rdeps) {
        debug_printf(1, "R: (%d, %d): [%d, %d] \n", x, t, rdep.first, rdep.second); 
          for (int i = rdep.first; i <= rdep.second; i++) {
            if(desc_islocal(mat.ddescA, (t+1)%nb_fields, i)) {
              has_task = 1;
            }
          }
      }
    }       

    debug_printf(1, "rank: %d, has_task: %d, x: %d, t: %d, task_id: %d\n", rank , has_task, x, t, mat.NT * t + x + 1);
    
    if (has_task == 0) {
      continue;
    }

#endif
    
    if (deps.size() == 0) {
      num_args = 1;
      debug_printf(1, "%d[%d] ", x, num_args);
      args.push_back(starpu_desc_getaddr( mat.ddescA, t%nb_fields, x ));
      args_loc.push_back(std::make_pair(t%nb_fields, x));
    } else {
      if (t == 0) {
        num_args = 1;
        debug_printf(1, "%d[%d] ", x, num_args);
        args.push_back(starpu_desc_getaddr( mat.ddescA, t%nb_fields, x ));
        args_loc.push_back(std::make_pair(t%nb_fields, x));
      } else {
        num_args = 1;
        args.push_back(starpu_desc_getaddr( mat.ddescA, t%nb_fields, x ));
        args_loc.push_back(std::make_pair(t%nb_fields, x));
        for (std::pair<long, long> dep : deps) {
          num_args += dep.second - dep.first + 1;
          debug_printf(1, "%d[%d, %d, %d] ", x, num_args, dep.first, dep.second); 
          for (int i = dep.first; i <= dep.second; i++) {
            args.push_back(starpu_desc_getaddr( mat.ddescA, (t-1)%nb_fields, i ));
            args_loc.push_back(std::make_pair((t-1)%nb_fields, i));
          }
        }
      }
    }
    
    payload.i = t;
    payload.j = x;
    payload.graph = g;
    payload.graph_id = idx;
    insert_task(num_args, payload, args, args_loc); 
    args.clear();
    args_loc.clear();
  }
  debug_printf(1, "\n");
}

void StarPUApp::debug_printf(int verbose_level, const char *format, ...)
{
  if (verbose_level > VERBOSE_LEVEL) {
    return;
  }
  if (rank == 0) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
  }
}


int main(int argc, char **argv)
{
 // printf("pid %d, %d\n", getpid(), STARPU_NMAXBUFS);
 // sleep(10); 

  
  StarPUApp app(argc, argv);
  app.execute_main_loop();

  return 0;
}
