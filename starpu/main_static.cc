/* Copyright 2020 Los Alamos National Laboratory
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
#include <array>
#include <set>
#include "data.h"
#include "core.h"
#include "timer.h"

#include <unistd.h>

#define VERBOSE_LEVEL 0

#define USE_CORE_VERIFICATION

#define MAX_ARGS 10
#define DEFAULT_UNROLL 8

/* Tasks will wait for tag_in, and emit both tag_dep and tag_antidep */
/* Dependencies will flow between tag_dep and tag_in, and between tag_antidep and tagg_in */
#define tag_in(i, t, x) (3*(((i) * period + (t)%period) * max_max_width + (x)))
#define tag_dep(i, t, x) (3*(((i) * period + (t)%period) * max_max_width + (x))+1)
#define tag_antidep(i, t, x) (3*(((i) * period + (t)%period) * max_max_width + (x))+2)

char **extra_local_memory;

struct StarPUApp;

typedef struct payload_s {
  int graph_id;
  int i;
  int j;
  int descrnum[10];
  char num_args;
  const TaskGraph *graph;
  std::vector<std::pair<long, long>> *depslist;
  std::vector<std::pair<long, long>> *rdepslist;
  std::vector<std::pair<long, long>> *antidepslist;
  struct StarPUApp *app;
}payload_t;

static void init_extra_local_memory(void *arg)
{
  size_t max_scratch_bytes_per_task = (uintptr_t) arg;
  int tid = starpu_worker_get_id();

  extra_local_memory[tid] = (char*)malloc(sizeof(char)*max_scratch_bytes_per_task);
  TaskGraph::prepare_scratch(extra_local_memory[tid], sizeof(char)*max_scratch_bytes_per_task);
}

static void task1(void *descr[], void *cl_arg)
{
  float *out;
  payload_t *payload = (payload_t *) cl_arg;
  out = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[0]]);
  
  int tid = starpu_worker_get_id();
  
#if defined (USE_CORE_VERIFICATION) 
  const TaskGraph *graph = payload->graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph->output_bytes_per_task;
  const char *input_data[] = {
    (const char*) out,
  };
  size_t input_bytes[] = {
    output_bytes,
  };
  
  graph->execute_point(payload->i, payload->j, output_ptr, output_bytes,
                       input_data, input_bytes, 1, extra_local_memory[tid], graph->scratch_bytes_per_task);
#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = 0.0;
  printf("Graph %d, Task1, [%d, %d], rank %d, core %d, out %.2f, local_mem %p\n", payload->graph_id, payload->i, payload->j, rank, tid, *out, extra_local_memory[tid]);
#endif
}

static void task2(void *descr[], void *cl_arg)
{
  float *in1, *out;
  payload_t *payload = (payload_t *) cl_arg;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[0]]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[1]]);
  
  int tid = starpu_worker_get_id();
  
#if defined (USE_CORE_VERIFICATION)   
  const TaskGraph *graph = payload->graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph->output_bytes_per_task;
  const char *input_data[] = {
    (const char*) in1,
  };
  size_t input_bytes[] = {
    output_bytes,
  };
  
  graph->execute_point(payload->i, payload->j, output_ptr, output_bytes,
                       input_data, input_bytes, 1, extra_local_memory[tid], graph->scratch_bytes_per_task);
#else  
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);
  
  *out = *in1 + 1.0;
  printf("Graph %d, Task2, [%d, %d], rank %d, core %d, in1 %.2f, out %.2f, local_mem %p\n", payload->graph_id, payload->i, payload->j, rank, tid, *in1, *out, extra_local_memory[tid]);
#endif
}

static void task3(void *descr[], void *cl_arg)
{
  float *in1, *in2, *out;
  payload_t *payload = (payload_t *) cl_arg;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[0]]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[1]]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[2]]);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  const TaskGraph *graph = payload->graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph->output_bytes_per_task;
  const char *input_data[] = {
    (const char*) in1,
    (const char*) in2,
  };
  size_t input_bytes[] = {
    output_bytes,
    output_bytes,
  };

  graph->execute_point(payload->i, payload->j, output_ptr, output_bytes,
                       input_data, input_bytes, 2, extra_local_memory[tid], graph->scratch_bytes_per_task);
#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + 1.0;
  printf("Graph %d, Task3, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, out %.2f, local_mem %p\n", payload->graph_id, payload->i, payload->j, rank, tid, *in1, *in2, *out, extra_local_memory[tid]);
#endif
}

static void task4(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *out;
  payload_t *payload = (payload_t *) cl_arg;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[0]]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[1]]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[2]]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[3]]);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  const TaskGraph *graph = payload->graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph->output_bytes_per_task;
  const char *input_data[] = {
    (const char*) in1,
    (const char*) in2,
    (const char*) in3,
  };
  size_t input_bytes[] = {
    output_bytes,
    output_bytes,
    output_bytes,
  };

  graph->execute_point(payload->i, payload->j, output_ptr, output_bytes,
                       input_data, input_bytes, 3, extra_local_memory[tid], graph->scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + 1.0;
  printf("Graph %d, Task4, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, out %.2f, local_mem %p\n", payload->graph_id, payload->i, payload->j, rank, tid, *in1, *in2, *in3, *out, extra_local_memory[tid]);
#endif
}

static void task5(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *in4, *out;
  payload_t *payload = (payload_t *) cl_arg;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[0]]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[1]]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[2]]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[3]]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[4]]);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  const TaskGraph *graph = payload->graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph->output_bytes_per_task;
  const char *input_data[] = {
    (const char*) in1,
    (const char*) in2,
    (const char*) in3,
    (const char*) in4,
  };
  size_t input_bytes[] = {
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
  };

  graph->execute_point(payload->i, payload->j, output_ptr, output_bytes,
                       input_data, input_bytes, 4, extra_local_memory[tid], graph->scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + *in4 + 1.0;
  printf("Graph %d, Task5, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, out %.2f, local_mem %p\n", payload->graph_id, payload->i, payload->j, rank, tid, *in1, *in2, *in3, *in4, *out, extra_local_memory[tid]);
#endif
}

static void task6(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *in4, *in5, *out;
  payload_t *payload = (payload_t *) cl_arg;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[0]]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[1]]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[2]]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[3]]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[4]]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[5]]);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  const TaskGraph *graph = payload->graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph->output_bytes_per_task;
  const char *input_data[] = {
    (const char*) in1,
    (const char*) in2,
    (const char*) in3,
    (const char*) in4,
    (const char*) in5,
  };
  size_t input_bytes[] = {
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
  };

  graph->execute_point(payload->i, payload->j, output_ptr, output_bytes,
                       input_data, input_bytes, 5, extra_local_memory[tid], graph->scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + *in4 + *in5 + 1.0;
  printf("Graph %d, Task6, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, in5 %.2f, out %.2f, local_mem %p\n", payload->graph_id, payload->i, payload->j, rank, tid, *in1, *in2, *in3, *in4, *in5, *out, extra_local_memory[tid]);
#endif
}

static void task7(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *in4, *in5, *in6, *out;
  payload_t *payload = (payload_t *) cl_arg;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[0]]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[1]]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[2]]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[3]]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[4]]);
  in6 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[5]]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[6]]);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  const TaskGraph *graph = payload->graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph->output_bytes_per_task;
  const char *input_data[] = {
    (const char*) in1,
    (const char*) in2,
    (const char*) in3,
    (const char*) in4,
    (const char*) in5,
    (const char*) in6,
  };
  size_t input_bytes[] = {
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
  };

  graph->execute_point(payload->i, payload->j, output_ptr, output_bytes,
                       input_data, input_bytes, 6, extra_local_memory[tid], graph->scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + *in4 + *in5 + *in6 + 1.0;
  printf("Graph %d, Task6, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, in5 %.2f, in6 %.2f, out %.2f, local_mem %p\n", 
    payload->graph_id, payload->i, payload->j, rank, tid, *in1, *in2, *in3, *in4, *in5, *in6, *out, extra_local_memory[tid]);
#endif
}

static void task8(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *in4, *in5, *in6, *in7, *out;
  payload_t *payload = (payload_t *) cl_arg;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[0]]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[1]]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[2]]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[3]]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[4]]);
  in6 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[5]]);
  in7 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[6]]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[7]]);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  const TaskGraph *graph = payload->graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph->output_bytes_per_task;
  const char *input_data[] = {
    (const char*) in1,
    (const char*) in2,
    (const char*) in3,
    (const char*) in4,
    (const char*) in5,
    (const char*) in6,
    (const char*) in7,
  };
  size_t input_bytes[] = {
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
  };
  
  
  graph->execute_point(payload->i, payload->j, output_ptr, output_bytes,
                       input_data, input_bytes, 7, extra_local_memory[tid], graph->scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + *in4 + *in5 + *in6 + *in7 + 1.0;
  printf("Graph %d, Task6, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, in5 %.2f, in6 %.2f, in7 %.2f, out %.2f, local_mem %p\n", 
    payload->graph_id, payload->i, payload->j, rank, tid, *in1, *in2, *in3, *in4, *in5, *in6, *in7, *out, extra_local_memory[tid]);
#endif
}

static void task9(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *in4, *in5, *in6, *in7, *in8, *out;
  payload_t *payload = (payload_t *) cl_arg;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[0]]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[1]]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[2]]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[3]]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[4]]);
  in6 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[5]]);
  in7 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[6]]);
  in8 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[7]]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[8]]);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  const TaskGraph *graph = payload->graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph->output_bytes_per_task;
  const char *input_data[] = {
    (const char*) in1,
    (const char*) in2,
    (const char*) in3,
    (const char*) in4,
    (const char*) in5,
    (const char*) in6,
    (const char*) in7,
    (const char*) in8,
  };
  size_t input_bytes[] = {
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
  };

  graph->execute_point(payload->i, payload->j, output_ptr, output_bytes,
                       input_data, input_bytes, 8, extra_local_memory[tid], graph->scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + *in4 + *in5 + *in6 + *in7 + *in8 + 1.0;
  printf("Graph %d, Task6, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, in5 %.2f, in6 %.2f, in7 %.2f, in8 %.2f, out %.2f, local_mem %p\n", 
    payload->graph_id, payload->i, payload->j, rank, tid, *in1, *in2, *in3, *in4, *in5, *in6, *in7, *in8, *out, extra_local_memory[tid]);
#endif
}

static void task10(void *descr[], void *cl_arg)
{
  float *in1, *in2, *in3, *in4, *in5, *in6, *in7, *in8, *in9, *out;
  payload_t *payload = (payload_t *) cl_arg;
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[0]]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[1]]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[2]]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[3]]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[4]]);
  in6 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[5]]);
  in7 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[6]]);
  in8 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[7]]);
  in9 = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[8]]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[payload->descrnum[9]]);
  
  int tid = starpu_worker_get_id();

#if defined (USE_CORE_VERIFICATION)  
  const TaskGraph *graph = payload->graph;
  char *output_ptr = (char*)out;
  size_t output_bytes= graph->output_bytes_per_task;
  const char *input_data[] = {
    (const char*) in1,
    (const char*) in2,
    (const char*) in3,
    (const char*) in4,
    (const char*) in5,
    (const char*) in6,
    (const char*) in7,
    (const char*) in8,
    (const char*) in9,
  };
  size_t input_bytes[] = {
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
    output_bytes,
  };

  graph->execute_point(payload->i, payload->j, output_ptr, output_bytes,
                       input_data, input_bytes, 9, extra_local_memory[tid], graph->scratch_bytes_per_task);

#else
  int rank;
  starpu_mpi_comm_rank(MPI_COMM_WORLD, &rank);

  *out = *in1 + *in2 + *in3 + *in4 + *in5 + *in6 + *in7 + *in8 + *in9 + 1.0;
  printf("Graph %d, Task6, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, in5 %.2f, in6 %.2f, in7 %.2f, in8 %.2f, in9 %.2f, out %.2f, local_mem %p\n", 
    payload->graph_id, payload->i, payload->j, rank, tid, *in1, *in2, *in3, *in4, *in5, *in6, *in7, *in8, *in9, *out, extra_local_memory[tid]);
#endif
}

static void task(void *descr[], void *cl_arg)
{
  payload_t *payload = (payload_t *) cl_arg;
  //printf("running %d %d\n", payload->i, payload->j);
  switch (payload->num_args) {
  case 1: task1(descr, cl_arg); break;
  case 2: task2(descr, cl_arg); break;
  case 3: task3(descr, cl_arg); break;
  case 4: task4(descr, cl_arg); break;
  case 5: task5(descr, cl_arg); break;
  case 6: task6(descr, cl_arg); break;
  case 7: task7(descr, cl_arg); break;
  case 8: task8(descr, cl_arg); break;
  case 9: task9(descr, cl_arg); break;
  case 10: task10(descr, cl_arg); break;
  default: assert(false && "unexpected num_args");
  }
}

struct starpu_codelet cl_task; 

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
  void task_callback(struct starpu_task *task, payload_t *payload);
  void mpi_recv_callback(struct starpu_task *task, payload_t *payload);
private:
  struct starpu_task * create_task(payload_t &payload);
  void update_task(struct starpu_task *task, payload_t *payload);
  struct starpu_task * create_receive(payload_t &payload);
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
  long max_max_width;
  long period;
  long unroll;
  matrix_t mat_array[10];
};

static void _task_callback(void *arg)
{
  struct starpu_task *task = (struct starpu_task *) arg;
  payload_t *payload = (payload_t *) task->cl_arg;
  payload->app->task_callback(task, payload);
}

void StarPUApp::task_callback(struct starpu_task *task, payload_t *payload)
{
  const TaskGraph *g = payload->graph;
  int nb_fields = g->nb_fields;
  int id = payload->graph_id;
  matrix_t &mat = mat_array[id];

  int t = payload->i;
  int x = payload->j;

  debug_printf(2, "%d: %d %d finished\n", rank, t, x);

  /* Release next tasks on this host, if any */
  starpu_tag_t tag = tag_dep(id, t, x);
  debug_printf(2, "%d: releasing %ld\n", rank, (long) tag);
  starpu_tag_notify_restart_from_apps(tag);

  /* Release antidepencies on this host, if any */
  tag = tag_antidep(id, t, x);
  debug_printf(2, "%d: releasing %ld\n", rank, (long) tag);
  starpu_tag_notify_restart_from_apps(tag);

  /* Send our result to other hosts */
  /* Only send if our peer is in the next timestep of the graph */
  if (t < g->timesteps-1) {
    starpu_data_handle_t output = starpu_desc_getaddr(mat.ddescA, t%nb_fields, x);
    long next_offset = g->offset_at_timestep(t + 1);
    long next_width = g->width_at_timestep(t + 1);
    char sent[world] = { 0 };
    for (std::pair<long, long> &rdeps : *payload->rdepslist) {
      for (long xdep = rdeps.first; xdep <= rdeps.second; xdep++) {
        if (xdep < next_offset || xdep >= next_offset + next_width)
          continue;

        int inter = mat.ddescA->get_rankof(mat.ddescA, (t+1)%nb_fields, xdep);
        if (inter != rank && !sent[inter]) {
          int tag = starpu_mpi_data_get_tag(output);
          sent[inter] = 1;
          debug_printf(2, "%d submits send %d %d (%d) to %d\n", rank, t, x, tag, inter);
          /* Note: we here let the communication termination notify the anti-depencency */
          starpu_mpi_isend_detached_unlock_tag(output, (int)inter, tag, MPI_COMM_WORLD,
                                               tag_antidep(id, (t+1)%nb_fields, xdep));
        }
      }
    }
  }

  t += period;

  long next_offset = g->offset_at_timestep(t);
  long next_width = g->width_at_timestep(t);

  if (t >= g->timesteps || x < next_offset || x >= next_offset + next_width)
  {
    /* End of the story */
    debug_printf(1, "%d: %d %d out of scope\n", rank, t, x);
    task->regenerate = 0;
    task->destroy = 1;
    free(task->dyn_handles);
    free(task->dyn_modes);
    free(payload);
    return;
  }

  /* Fake termination of not-yet-existing dependencies that we will have */
  long last_offset = g->offset_at_timestep(t+period-1);
  long last_width = g->width_at_timestep(t+period-1);
  for(std::pair<long, long> &dep : *payload->depslist) {
    for (int xdep = dep.first; xdep <= dep.second; xdep++) {
      if (xdep < last_offset && xdep >= last_offset + last_width) {
        starpu_tag_t dep_tag = tag_dep(id, t+period-1, xdep);

        debug_printf(2, "%d faked termination of %ld %d (%ld)\n",
                     rank, t+period-1, xdep, (long) dep_tag);
        starpu_tag_notify_restart_from_apps(dep_tag);
      }
    }
  }
  /* Fake termination of not-yet-existing anti-dependencies that we will have */
  long antidep_offset = g->offset_at_timestep(t+period-nb_fields+1);
  long antidep_width = g->width_at_timestep(t+period-nb_fields+1);
  for(std::pair<long, long> &antidep : *payload->antidepslist) {
    for (int xantidep = antidep.first; xantidep <= antidep.second; xantidep++) {
      starpu_tag_t antidep_tag = tag_antidep(id, t+period-nb_fields+1, xantidep);

      if (xantidep < antidep_offset && xantidep >= antidep_offset + antidep_width ||
          !desc_islocal(mat.ddescA, (t+period-nb_fields+1)%nb_fields, xantidep)) {
        debug_printf(2, "%d faked termination of %ld %d (%ld)\n",
                     rank, t+period-nb_fields+1, xantidep, (long) antidep_tag);
        starpu_tag_notify_restart_from_apps(antidep_tag);
      }
    }
  }

  /* Regenerate ourself */
  debug_printf(2, "%d: %d %d regenerated\n", rank, t, x);
  payload->i = t;
  payload->app->update_task(task, payload);
}

void StarPUApp::update_task(struct starpu_task *task, payload_t *payload)
{
  const TaskGraph *g = payload->graph;
  int nb_fields = g->nb_fields;
  int id = payload->graph_id;
  matrix_t &mat = mat_array[id];

  int t = payload->i;

  /* Update which data we will have to work on according to timestamp */
  unsigned num_args = 0;
  long prev_offset = g->offset_at_timestep(t-1);
  long prev_width = g->width_at_timestep(t-1);
  for (std::pair<long, long> &deps: *payload->depslist) {
    for (int xdep = deps.first; xdep <= deps.second; xdep++) {
      if (xdep >= prev_offset && xdep < prev_offset + prev_width) {
        starpu_data_handle_t data = starpu_desc_getaddr( mat.ddescA, (t+nb_fields-1)%nb_fields, xdep);
        starpu_data_handle_t *handles = task->dyn_handles ? task->dyn_handles : task->handles;
        int i;
        for (i = 1; i < task->nbuffers; i++) {
          if (handles[i] == data) {
            break;
          }
        }
        assert(i < task->nbuffers);
        payload->descrnum[num_args++] = i;
      }
    }
  }
  payload->descrnum[num_args++] = 0;
  payload->num_args = num_args;
}

/* Create a computation task */
struct starpu_task *StarPUApp::create_task(payload_t &payload)
{
  struct starpu_task *task = starpu_task_create();
  const TaskGraph *g = payload.graph;
  int nb_fields = g->nb_fields;
  int t = payload.i;
  int x = payload.j;
  int id = payload.graph_id;
  matrix_t &mat = mat_array[id];
  payload_t *task_payload;

  task->cl = &cl_task;
  task->use_tag = 1;
  task->tag_id = tag_in(payload.graph_id, payload.i, payload.j);
  task->regenerate = 1;
  task->destroy = 0;
  task->callback_func = _task_callback;
  task->callback_arg = task;
  task->cl_arg_size = sizeof(payload_t);

  task->cl_arg = malloc(sizeof(payload_t));
  task_payload = (payload_t*) task->cl_arg;
  memcpy(task_payload, &payload, sizeof(payload_t));

  /* Set which data we will have to work on */
  starpu_data_handle_t *handles = task->dyn_handles ? task->dyn_handles : task->handles;
  enum starpu_data_access_mode *modes = task->dyn_modes ? task->dyn_modes : task->modes;
  unsigned num_args = 0;
  handles[num_args] = starpu_desc_getaddr(mat.ddescA, t%nb_fields, x);
  modes[num_args] = STARPU_RW;
  debug_printf(3, "%p writes %d %d %p\n", task, t%nb_fields, x, handles[num_args]);
  num_args++;
  for (std::pair<long, long> &deps: *payload.depslist) {
    for (int xdep = deps.first; xdep <= deps.second; xdep++) {
      if (!task->dyn_handles && num_args == STARPU_NMAXBUFS) {
        handles = task->dyn_handles = (starpu_data_handle_t *) malloc(MAX_ARGS * sizeof(starpu_data_handle_t));
        modes   = task->dyn_modes = (enum starpu_data_access_mode *) malloc(MAX_ARGS * sizeof(enum starpu_data_access_mode));
        memcpy(handles, task->handles, STARPU_NMAXBUFS * sizeof(starpu_data_handle_t));
        memcpy(modes,   task->modes,   STARPU_NMAXBUFS * sizeof(enum starpu_data_access_mode));
      }
      handles[num_args] = starpu_desc_getaddr( mat.ddescA, (t+nb_fields-1)%nb_fields, xdep);
      modes[num_args] = STARPU_R;
      debug_printf(3, "%p reads %d %d %p\n", task, (t+nb_fields-1)%nb_fields, xdep, handles[num_args]);
      num_args++;
    }
  }
  task->nbuffers = num_args;

  update_task(task, (payload_t *) task->cl_arg);

  for (unsigned n = 1; n < num_args; n++) {
    /* Some of the inputs will not actually be received because their producer
     * tasks don't exist and we won't pass them to the core anyway. Fake the
     * existence of a value in the data to avoid StarPU yelling.  */
    int m;
    for (m = 0; m < task_payload->num_args - 1; m++)
      if (task_payload->descrnum[m] == n)
        /* Will really pass it, we should really be getting some value already */
        break;
    if (m == task_payload->num_args - 1) {
      /* Didn't find the data as input, fake its existence for StarPU to be
       * happy. */
      starpu_data_acquire(handles[n], STARPU_W);
      starpu_data_release(handles[n]);
    }
  }

  return task;
}

static void _mpi_recv_callback(void *arg)
{
  struct starpu_task *task = (struct starpu_task *) arg;
  payload_t *payload = (payload_t *) task->cl_arg;
  payload->app->mpi_recv_callback(task, payload);
}

void StarPUApp::mpi_recv_callback(struct starpu_task *task, payload_t *payload)
{
  /* We can start receiving data */
  const TaskGraph *g = payload->graph;
  int nb_fields = g->nb_fields;
  int id = payload->graph_id;
  matrix_t &mat = mat_array[id];

  int t = payload->i;
  int x = payload->j;

  debug_printf(2, "%d: receive %d %d\n", rank, t, x);
  starpu_data_handle_t input = starpu_desc_getaddr( mat.ddescA, t%nb_fields, x);
  int inter = starpu_mpi_data_get_rank(input);
  int tag = starpu_mpi_data_get_tag(input);
  debug_printf(2, "%d submits receive %d %d (%d) from %d that will release %ld\n",
               rank, t, x, tag, inter, tag_antidep(id, t, x));
  starpu_tag_restart(tag_antidep(id, t, x));
  starpu_mpi_irecv_detached_unlock_tag(input, inter, tag, MPI_COMM_WORLD, tag_dep(id, t, x));

  t += period;

  long next_offset = g->offset_at_timestep(t);
  long next_width = g->width_at_timestep(t);

  if (t >= g->timesteps || x < next_offset || x >= next_offset + next_width)
  {
    /* End of the story */
    debug_printf(1, "%d: %d %d out of scope\n", rank, t, x);
    task->regenerate = 0;
    task->destroy = 1;
    free(task->dyn_handles);
    free(task->dyn_modes);
    free(payload);
    return;
  }

  /* Regenerate ourself */
  payload->i = t;
}

struct starpu_task * StarPUApp::create_receive(payload_t &payload)
{
  struct starpu_task *task = starpu_task_create();

  task->cl = NULL;
  task->use_tag = 1;
  task->tag_id = tag_in(payload.graph_id, payload.i, payload.j);
  task->regenerate = 1;
  task->destroy = 0;
  task->callback_func = _mpi_recv_callback;
  task->callback_arg = task;
  task->cl_arg = malloc(sizeof(payload_t));
  memcpy(task->cl_arg, &payload, sizeof(payload_t));

  return task;
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
    if (!strcmp(argv[i], "-unroll")) {
      unroll = atoi(argv[++i]);
      if (unroll <= 0) {
        fprintf(stderr, "error: Invalid flag \"-unroll %ld\" must be > 0\n", unroll);
        abort();
      }
    }
    if (!strcmp(argv[i], "-S")) {
      starpu_enable_supertiling = true;
    }
  }
}

StarPUApp::StarPUApp(int argc, char **argv)
  : App(argc, argv)
{
  cl_task.where      = STARPU_CPU;                                   
  cl_task.cpu_funcs[0] = task;                                       
  cl_task.name       = "task";
  cl_task.nbuffers   = STARPU_VARIABLE_NBUFFERS;
  
  int i;
  
  P = 1;
  MB = 2;
  nb_cores = 1;
  unroll = DEFAULT_UNROLL;
  
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
  
    debug_printf(0, "mb %d, mt %d, nt %d, timesteps %ld, enable_supertiling %d, nb_fields %d, period %ld\n", MB, mat.MT, mat.NT, graph.timesteps, starpu_enable_supertiling, graph.nb_fields, graph.period);
    assert (graph.output_bytes_per_task <= sizeof(float) * MB * MB);

    mat.ddescA = create_and_distribute_data(rank, world, MB, MB, mat.MT, mat.NT, P, Q, i);
    
    if (graph.scratch_bytes_per_task > max_scratch_bytes_per_task) {
      max_scratch_bytes_per_task = graph.scratch_bytes_per_task;
    }

    max_max_width = 0;
    if (max_max_width < graph.max_width) {
      max_max_width = graph.max_width;
    }
  }
   
  extra_local_memory = (char**)malloc(sizeof(char*) * nb_cores);
  assert(extra_local_memory != NULL);
  for (i = 0; i < nb_cores; i++) {
    extra_local_memory[i] = NULL;
  }
  if (max_scratch_bytes_per_task > 0) {
    starpu_execute_on_each_worker_ex(init_extra_local_memory, (void*) (uintptr_t) max_scratch_bytes_per_task, STARPU_CPU, "init_scratch");
  }
  
  debug_printf(0, "max_scratch_bytes_per_task %ld\n", max_scratch_bytes_per_task);
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

template<typename T>
T gcd(T a, T b)
{
  while (b != 0)
  {
    T old_b = b;
    b = a % b;
    a = old_b;
  }
  return a;
}

static long lcm(long a, long b) {
  return a * b / gcd(a, b);
}

void StarPUApp::execute_main_loop()
{
  if (rank == 0) {
    display();
  }

  void (*callback)(void*) = NULL;
  struct starpu_task *task;

  int x, y, t;
  payload_t payload;

  payload.app = this;
  period = P;
  period = lcm(period, unroll);
  for (auto g : graphs) {
    period = lcm(period, g.nb_fields);
    period = lcm(period, g.timestep_period());
  }

  std::vector<struct starpu_task *> tosubmit;
  std::set<starpu_tag_t> tostart;

  for (size_t i = 0; i < graphs.size(); i++) {
    TaskGraph &g = graphs[i];
    int nb_fields = g.nb_fields;
    matrix_t &mat = mat_array[i];
    int constructed[period][g.max_width];
    int received[period][g.max_width];
    payload.graph_id = i;
    payload.graph = &g;
    debug_printf(1, "%d new graph %ld %ldx%ld\n", rank, i, period, g.max_width);

    memset(&constructed, 0, sizeof(constructed));
    memset(&received, 0, sizeof(received));

    /* Create the tasks. Since start times of different x might snap several
     * periods, we have to go through all timesteps */
    for (t = 0; t < g.timesteps; t++) {
      long offset = g.offset_at_timestep(t);
      long width = g.width_at_timestep(t);
      payload.i = t;

      long dset = g.dependence_set_at_timestep(t);
      long dset_r = g.dependence_set_at_timestep(t+1);
      long dset_anti = g.dependence_set_at_timestep(t+period-nb_fields+1);

      for (int x = offset; x <= offset+width-1; x++) {
        payload.j = x;

        /* Initialize data structures */
        starpu_data_handle_t data = starpu_desc_getaddr( mat.ddescA, t%nb_fields, x );
        starpu_data_set_sequential_consistency_flag(data, 0);

        if (desc_islocal(mat.ddescA, t%nb_fields, x)) {
          debug_printf(2, "%d will do %d %d\n", rank, t, x);
          if (!constructed[t%period][x]) {
            /* Create task */

            std::vector<std::pair<long, long> > depslist = g.dependencies(dset, x);
            std::vector<std::pair<long, long> > rdepslist = g.reverse_dependencies(dset_r, x);
            std::vector<std::pair<long, long> > antidepslist = g.reverse_dependencies(dset_anti, x);
            starpu_tag_t tag = tag_in(i, t, x);

            payload.depslist = new(std::vector<std::pair<long, long>>);
            *payload.depslist = depslist;
            payload.rdepslist = new(std::vector<std::pair<long, long>>);
            *payload.rdepslist = rdepslist;
            payload.antidepslist = new(std::vector<std::pair<long, long>>);
            *payload.antidepslist = rdepslist;
            task = create_task(payload);
            debug_printf(1, "%d created %d %d (%ld): %p\n", rank, t, x, (long) tag, task);
            constructed[t%period][x] = 1;
            tosubmit.push_back(task);

            /* Fake termination of not-yet-existing dependencies */
            long dep_offset = g.offset_at_timestep(t-1);
            long dep_width = g.width_at_timestep(t-1);
            for(std::pair<long, long> &dep : depslist) {
              for (int xdep = dep.first; xdep <= dep.second; xdep++) {
                starpu_tag_t dep_tag = tag_dep(i, t+period-1, xdep);
                if (xdep < dep_offset || xdep >= dep_offset + dep_width) {
                  debug_printf(1, "%d will fake termination of non-existing dep %d %d (%ld)\n",
                               rank, t-1, xdep, (long) dep_tag);
                  tostart.insert(dep_tag);
                } else {
                  debug_printf(1, "%d will wait for existing dep %d %d (%ld)\n",
                               rank, t-1, xdep, (long) dep_tag);
                }
              }
            }

            /* Fake termination of not-yet-existing anti-dependencies */
            long antidep_offset = g.offset_at_timestep(t-nb_fields+1);
            long antidep_width = g.width_at_timestep(t-nb_fields+1);
            for(std::pair<long, long> &antidep : antidepslist) {
              for (int xantidep = antidep.first; xantidep <= antidep.second; xantidep++) {
                starpu_tag_t antidep_tag = tag_antidep(i, t+period-nb_fields+1, xantidep);
                if (xantidep < antidep_offset || xantidep >= antidep_offset + antidep_width) {
                  debug_printf(1, "%d will fake termination of non-existing antidep %d %d (%ld)\n",
                               rank, t-nb_fields+1, xantidep, (long) antidep_tag);
                  tostart.insert(antidep_tag);
                } else if (!desc_islocal(mat.ddescA, (t+period-nb_fields+1)%nb_fields, xantidep)) {
                  debug_printf(1, "%d will fake termination of antidep communication for %d %d (%ld) that we won't emit\n",
                               rank, t-nb_fields+1, xantidep, (long) antidep_tag);
                  tostart.insert(antidep_tag);
                } else {
                  debug_printf(1, "%d will wait for existing antidep %d %d (%ld) that we run\n",
                               rank, t-nb_fields+1, xantidep, (long) antidep_tag);
                }
              }
            }
          }
        } else if (t < g.timesteps-1) {
          long rdep_offset = g.offset_at_timestep(t + 1);
          long rdep_width = g.width_at_timestep(t + 1);
          std::vector<std::pair<long, long> > rdepslist = g.reverse_dependencies(dset_r, x);

          if (!received[t%period][x]) {
            payload.depslist = NULL;
            payload.rdepslist = NULL;
            payload.antidepslist = NULL;
            for (std::pair<long, long> &rdeps : rdepslist) {
              for (long xrdep = rdeps.first; xrdep <= rdeps.second; xrdep++) {
                if (xrdep < rdep_offset || xrdep >= rdep_offset + rdep_width)
                  continue;

                int inter = mat.ddescA->get_rankof(mat.ddescA, (t+1)%nb_fields, xrdep);
                if (inter == rank) {
                  /* Will need to receive x for xrdep */
                  task = create_receive(payload);
                  debug_printf(1, "%d created receive %d %d for %d %ld %p\n",
                               rank, t, x, (t+1)%nb_fields, xrdep, task);
                  received[t%period][x] = 1;
                  tosubmit.push_back(task);
                  break;
                }
              }
              if (received[t%period][x])
                break;
            }
          }
        }
      }
    }

    /* Add control dependencies between tags */
    for (t = 1; t <= period; t++) {
      long dset = g.dependence_set_at_timestep(t);
      long dset_r = g.dependence_set_at_timestep(t+period-nb_fields+1);

      for (int x = 0; x < g.max_width; x++) {
        if (desc_islocal(mat.ddescA, t%nb_fields, x)) {
          std::vector<std::pair<long, long> > depslist = g.dependencies(dset, x);
          std::vector<std::pair<long, long> > antidepslist = g.reverse_dependencies(dset_r, x);

          for(std::pair<long, long> &dep : depslist) {
            int ntags = dep.second - dep.first + 1;
            starpu_tag_t tags[ntags];

            debug_printf(1, "%d: %d %d (%ld) depends on %d %ld..%ld (%ld..%ld)\n",
                rank, t%period, x, (long) tag_in(i, t, x),
                (t-1)%period, dep.first, dep.second,
                (long) tag_dep(i, t-1, dep.first),
                (long) tag_dep(i, t-1, dep.second));

            /* We Read after they Write */
            for (int n = 0; n < ntags; n++)
              tags[n] = tag_dep(i, t-1, dep.first + n);
            starpu_tag_declare_deps_array(tag_in(i, t, x), ntags, tags);
          }

          for(std::pair<long, long> &antidep : antidepslist) {
            int ntags = antidep.second - antidep.first + 1;
            starpu_tag_t tags[ntags];

            debug_printf(1, "%d: %d %d (%ld) antidepends on %d %ld..%ld (%ld..%ld)\n",
                rank, t%period, x, (long) tag_in(i, t, x),
                (t+period-nb_fields+1)%period, antidep.first, antidep.second,
                (long) tag_antidep(i, t+period-nb_fields+1, antidep.first),
                (long) tag_antidep(i, t+period-nb_fields+1, antidep.second));

            /* We Write after they Read (either task or a communication) */
            for (int n = 0; n < ntags; n++)
              tags[n] = tag_antidep(i, t+period-nb_fields+1, antidep.first + n);
            starpu_tag_declare_deps_array(tag_in(i, t, x), ntags, tags);
          }
        }
      }
    }
  }

  /* Now that dependencies are set, kick the ones which are not supposed to act
   * from the start */
  for (starpu_tag_t tag: tostart) {
    debug_printf(2, "%d faking %ld\n", rank, (long) tag);
    starpu_tag_notify_restart_from_apps(tag);
  }

  /* start timer */
  starpu_mpi_barrier(MPI_COMM_WORLD);
  if (rank == 0) {
    Timer::time_start();
  }

  /* Submit the cyclic graph */
  for (struct starpu_task *task: tosubmit) {
    debug_printf(2, "%d submitting %p\n", rank, task);
    int ret = starpu_task_submit(task);
    assert(ret == 0);
  }

  starpu_task_wait_for_all();
  starpu_mpi_barrier(MPI_COMM_WORLD);
  if (rank == 0) {
    double elapsed = Timer::time_end();
    report_timing(elapsed);
  }
}

void StarPUApp::debug_printf(int verbose_level, const char *format, ...)
{
  if (verbose_level > VERBOSE_LEVEL) {
    return;
  }
/*  if (rank == 0) */{
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
