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
  const TaskGraph *graph;
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
  out = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  
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
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  
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
                       input_data, input_bytes, 2, extra_local_memory[tid], graph->scratch_bytes_per_task);
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
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  
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
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
  
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
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[4]);
  
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
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[4]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[5]);
  
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
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[4]);
  in6 = (float *)STARPU_MATRIX_GET_PTR(descr[5]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[6]);
  
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
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[4]);
  in6 = (float *)STARPU_MATRIX_GET_PTR(descr[5]);
  in7 = (float *)STARPU_MATRIX_GET_PTR(descr[6]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[7]);
  
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
  in1 = (float *)STARPU_MATRIX_GET_PTR(descr[0]);
  in2 = (float *)STARPU_MATRIX_GET_PTR(descr[1]);
  in3 = (float *)STARPU_MATRIX_GET_PTR(descr[2]);
  in4 = (float *)STARPU_MATRIX_GET_PTR(descr[3]);
  in5 = (float *)STARPU_MATRIX_GET_PTR(descr[4]);
  in6 = (float *)STARPU_MATRIX_GET_PTR(descr[5]);
  in7 = (float *)STARPU_MATRIX_GET_PTR(descr[6]);
  in8 = (float *)STARPU_MATRIX_GET_PTR(descr[7]);
  out = (float *)STARPU_MATRIX_GET_PTR(descr[8]);
  
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
private:
  void insert_task(int num_args, payload_t &payload, std::array<starpu_data_handle_t, 10> &args);
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
  char *starpu_schedule;
  matrix_t mat_array[10];
};

static void task_clean(void *arg) {
  struct starpu_task *task = (struct starpu_task *) arg;
  free(task->dyn_handles);
  free(task->dyn_modes);
  free(task->cl_arg);
}

void StarPUApp::insert_task(int num_args, payload_t &payload, std::array<starpu_data_handle_t, 10> &args)
{
  struct starpu_task *task = starpu_task_create();

  switch(num_args) {
  case 1:
    task->cl = &cl_task1;
    task->name = "task1";
    break;
  case 2:
    task->cl = &cl_task2;
    task->name = "task2";
    break;
  case 3:
    task->cl = &cl_task3;
    task->name = "task3";
    break;
  case 4:
    task->cl = &cl_task4;
    task->name = "task4";
    break;
  case 5:
    task->cl = &cl_task5;
    task->name = "task5";
    break;
  case 6:
    task->cl = &cl_task6;
    task->name = "task6";
    break;
  case 7:
    task->cl = &cl_task7;
    task->name = "task7";
    break;
  case 8:
    task->cl = &cl_task8;
    task->name = "task8";
    break;
  case 9:
    task->cl = &cl_task9;
    task->name = "task9";
    break;
  case 10:
    task->cl = &cl_task10;
    task->name = "task10";
    break;
  default:
    assert(false && "unexpected num_args");
  }

  task->nbuffers = num_args;
  if (num_args < STARPU_NMAXBUFS) {
    for (int i = 0; i < num_args; i++) {
      task->handles[i] = args[i];
      task->modes[i] = i < num_args-1 ? STARPU_R : STARPU_RW;
    }
  } else {
    task->dyn_handles = (starpu_data_handle_t *) malloc(num_args * sizeof(starpu_data_handle_t));
    task->dyn_modes = (enum starpu_data_access_mode *) malloc(num_args * sizeof(enum starpu_data_access_mode));
    for (int i = 0; i < num_args; i++) {
      task->dyn_handles[i] = args[i];
      task->dyn_modes[i] = i < num_args-1 ? STARPU_R : STARPU_RW;
    }
  }
  task->callback_func = task_clean;
  task->callback_arg = task;
  task->cl_arg = malloc(sizeof(payload_t));
  memcpy(task->cl_arg, &payload, sizeof(payload_t));
  task->cl_arg_size = sizeof(payload_t);

  int res = starpu_task_submit(task);
  assert(res == 0);
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
    if (!strcmp(argv[i], "-schedule")) {
      starpu_schedule = argv[++i];
    }
  }
}

starpu_perfmodel perfmodels[10];
char *symbol[10] = {"task1_pm", "task2_pm", "task3_pm", "task4_pm", "task5_pm", "task6_pm", "task7_pm", "task8_pm", "task9_pm", "task10_pm"};

static starpu_perfmodel * init_starpu_perfmodel(int index) {
  struct starpu_perfmodel* model = &perfmodels[index];
  model->symbol = symbol[index];
	model->type = STARPU_HISTORY_BASED;

	starpu_perfmodel_init(model);
  return model;
}

StarPUApp::StarPUApp(int argc, char **argv)
  : App(argc, argv)
{
  cl_task1.where     = STARPU_CPU;                                   
  cl_task1.cpu_funcs[0]  = task1;                                       
  cl_task1.nbuffers  = 1;                                           
  cl_task1.name      = "task1";
  cl_task1.nbuffers  = STARPU_VARIABLE_NBUFFERS;
  cl_task1.model    = init_starpu_perfmodel(0);
  
  cl_task2.where     = STARPU_CPU;                                   
  cl_task2.cpu_funcs[0]  = task2;                                       
  cl_task2.nbuffers  = 2;                                           
  cl_task2.name      = "task2";
  cl_task2.nbuffers  = STARPU_VARIABLE_NBUFFERS;
  cl_task2.model    = init_starpu_perfmodel(1);

  cl_task3.where     = STARPU_CPU;                                   
  cl_task3.cpu_funcs[0]  = task3;                                       
  cl_task3.nbuffers  = 3;                                           
  cl_task3.name      = "task3";
  cl_task3.nbuffers  = STARPU_VARIABLE_NBUFFERS;
  cl_task3.model    = init_starpu_perfmodel(2);
  
  cl_task4.where     = STARPU_CPU;                                   
  cl_task4.cpu_funcs[0]  = task4;                                       
  cl_task4.nbuffers  = 4;                                           
  cl_task4.name      = "task4";
  cl_task4.nbuffers  = STARPU_VARIABLE_NBUFFERS;
  cl_task4.model    = init_starpu_perfmodel(3);

  cl_task5.where     = STARPU_CPU;                                   
  cl_task5.cpu_funcs[0]  = task5;                                       
  cl_task5.nbuffers  = 5;                                           
  cl_task5.name      = "task5";
  cl_task5.nbuffers  = STARPU_VARIABLE_NBUFFERS;
  cl_task5.model    = init_starpu_perfmodel(4);

  cl_task6.where     = STARPU_CPU;                                   
  cl_task6.cpu_funcs[0]  = task6;                                       
  cl_task6.nbuffers  = 6;                                           
  cl_task6.name      = "task6";
  cl_task6.nbuffers  = STARPU_VARIABLE_NBUFFERS;
  cl_task6.model    = init_starpu_perfmodel(5);

  cl_task7.where     = STARPU_CPU;                                   
  cl_task7.cpu_funcs[0]  = task7;                                       
  cl_task7.nbuffers  = 7;                                           
  cl_task7.name      = "task7";
  cl_task7.nbuffers  = STARPU_VARIABLE_NBUFFERS;
  cl_task7.model    = init_starpu_perfmodel(6);

  cl_task8.where     = STARPU_CPU;                                   
  cl_task8.cpu_funcs[0]  = task8;                                       
  cl_task8.nbuffers  = 8;                                           
  cl_task8.name      = "task8";
  cl_task8.nbuffers  = STARPU_VARIABLE_NBUFFERS;
  cl_task8.model    = init_starpu_perfmodel(7);

  cl_task9.where     = STARPU_CPU;                                   
  cl_task9.cpu_funcs[0]  = task9;                                       
  cl_task9.nbuffers  = 9;                                           
  cl_task9.name      = "task9";
  cl_task9.nbuffers  = STARPU_VARIABLE_NBUFFERS;
  cl_task9.model    = init_starpu_perfmodel(8);

  cl_task10.where     = STARPU_CPU;                                   
  cl_task10.cpu_funcs[0]  = task10;                                       
  cl_task10.nbuffers  = 10;                                           
  cl_task10.name      = "task10";
  cl_task10.nbuffers  = STARPU_VARIABLE_NBUFFERS;
  cl_task10.model    = init_starpu_perfmodel(9);

  int i;
  
  P = 1;
  MB = 2;
  nb_cores = 1;
  starpu_schedule = "lws";
  
  parse_argument(argc, argv);
  
  conf =  (struct starpu_conf *)malloc (sizeof(struct starpu_conf));
  starpu_conf_init( conf );

  conf->ncpus = nb_cores;
  conf->ncuda = 0;
  conf->nopencl = 0;
  conf->sched_policy_name = starpu_schedule;
  
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
  
    debug_printf(0, "mb %d, mt %d, nt %d, timesteps %d, enable_supertiling %d, nb_fields %d, period %d\n", MB, mat.MT, mat.NT, graph.timesteps, starpu_enable_supertiling, graph.nb_fields, graph.period);
    assert (graph.output_bytes_per_task <= sizeof(float) * MB * MB);

    mat.ddescA = create_and_distribute_data(rank, world, MB, MB, mat.MT, mat.NT, P, Q, i);
    
    if (graph.scratch_bytes_per_task > max_scratch_bytes_per_task) {
      max_scratch_bytes_per_task = graph.scratch_bytes_per_task;
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

  int x, y, t;
  payload_t payload;

  long period = P;
  for (auto g : graphs) {
    period = lcm(period, g.timestep_period());
  }

  std::vector<std::vector<std::vector<
    std::pair<std::pair<int, std::vector<std::pair<long, long>>>, std::vector<std::pair<long, long>>>
    >>> todo;

  for (size_t i = 0; i < graphs.size(); i++) {
    TaskGraph &g = graphs[i];
    int nb_fields = g.nb_fields;
    matrix_t &mat = mat_array[i];

    std::vector<std::vector<
      std::pair<std::pair<int, std::vector<std::pair<long, long>>>, std::vector<std::pair<long, long>>>
      >> todo_graph;

    std::vector<std::vector<starpu_data_handle_t>> data_graph;
    std::vector<std::vector<std::pair<long, long> > > rev_deps_graph;
    std::vector<std::vector<int>> out_x_graph;

    /* Initialize data structures before measurement */
    for (y = 1; y <= lcm(nb_fields,period); y++) {
      long dset = g.dependence_set_at_timestep(y);

      for (int x = 0; x < g.max_width; x++) {
        if (desc_islocal(mat.ddescA, y%nb_fields, x)) {
          std::vector<std::pair<long, long> > depslist = g.dependencies(dset, x);

          debug_printf(1, "%d will write %d %d\n", rank, y, x);
          starpu_desc_getaddr( mat.ddescA, y%nb_fields, x );
          for(std::pair<long, long> &dep : depslist)
            for (int xdep = dep.first; xdep <= dep.second; xdep++) {
              debug_printf(1, "%d will read %d %d\n", rank, y-1, xdep);
              starpu_desc_getaddr( mat.ddescA, (y-1)%nb_fields, xdep );
            }
        }
      }
    }

    for (long y = 0L; y < period; y += 1) {
      std::vector<
        std::pair<std::pair<int, std::vector<std::pair<long, long>>>, std::vector<std::pair<long, long>>>
        > todo_y;

      long dset = g.dependence_set_at_timestep(y);
      long dset_r = g.dependence_set_at_timestep(y+1);
      std::vector<std::vector<std::pair<long, long> > > deps_y;
      std::vector<std::vector<std::pair<long, long> > > rev_deps_y;
      std::vector<int> out_x_y;

      for (int x = 0; x < g.max_width; x++) {
        if (desc_islocal(mat.ddescA, y%nb_fields, x)) {
          std::vector<std::pair<long, long> > deps = g.dependencies(dset, x);
          std::vector<std::pair<long, long> > rdeps = g.reverse_dependencies(dset_r, x);

          todo_y.push_back(
              std::pair<std::pair<int, std::vector<std::pair<long, long>>>, std::vector<std::pair<long, long>>>(
                std::pair<int, std::vector<std::pair<long, long>>>(x, deps), rdeps));
        }
      }

      todo_graph.push_back(todo_y);
    }

    todo.push_back(todo_graph);
  }

  /* start timer */
  starpu_mpi_barrier(MPI_COMM_WORLD);
  if (rank == 0) {
    Timer::time_start();
  }

  for (size_t i = 0; i < graphs.size(); i++) {
    const TaskGraph &g = graphs[i];
    int nb_fields = g.nb_fields;
    matrix_t &mat = mat_array[i];

    for (t = 0; t < g.timesteps; t++) {
      auto &todo_y = todo[i][t % period];

      char received[g.max_width];
      memset(&received, 0, sizeof(received));

      for (auto &doing : todo_y) {
        int x = doing.first.first;
        long offset = g.offset_at_timestep(t);
        long width = g.width_at_timestep(t);
        if (x < offset || x >= offset + width)
          continue;

        std::vector<std::pair<long,long>> &depslist = doing.first.second;
        std::vector<std::pair<long,long>> &rdepslist = doing.second;

        std::array<starpu_data_handle_t, 10> data;
        std::array<int, 9> xdeps;
        unsigned num_args = 0;

        if (t > 0) {
          /* Inputs */
          long last_offset = g.offset_at_timestep(t-1);
          long last_width = g.width_at_timestep(t-1);
          for(std::pair<long, long> &dep : depslist) {
            for (int xdep = dep.first; xdep <= dep.second; xdep++) {
              if (xdep >= last_offset && xdep < last_offset + last_width) {
                data[num_args] = starpu_desc_getaddr( mat.ddescA, (t-1)%nb_fields, xdep);
                xdeps[num_args] = xdep;
                num_args++;
              }
            }
          }
        }

        /* Output */
        data[num_args++] = starpu_desc_getaddr(mat.ddescA, t%nb_fields, x);

        /* Receives */
        for (size_t n = 0; n < num_args-1; n++) {
          starpu_data_handle_t input = data[n];
          int inter = starpu_mpi_data_get_rank(input);
          if (inter != rank && !received[xdeps[n]]) {
            int tag = starpu_mpi_data_get_tag(input);
            debug_printf(1, "%d submits receive %d from %d for t=%d\n", rank, tag, inter, t);
            received[xdeps[n]] = 1;
            starpu_mpi_irecv_detached(input, inter, tag, MPI_COMM_WORLD, NULL, NULL);
          }
        }

        payload.i = t;
        payload.j = x;
        payload.graph = &g;
        payload.graph_id = i;
        debug_printf(1, "%d submits task %d for t=%d\n", rank, x, t);
        insert_task(num_args, payload, data);

        /* Sends */
        /* Only send if our peer is in the next timestep of the graph */
        if (t < g.timesteps-1) {
          char sent[world];
          long next_offset = g.offset_at_timestep(t + 1);
          long next_width = g.width_at_timestep(t + 1);
          starpu_data_handle_t output = data[num_args-1];

          memset(&sent, 0, sizeof(sent));
          for (std::pair<long, long> &rdeps : rdepslist) {
            for (long xdep = rdeps.first; xdep <= rdeps.second; xdep++) {
              if (xdep < next_offset || xdep >= next_offset + next_width)
                continue;

              int inter = mat.ddescA->get_rankof(mat.ddescA, (t+1)%nb_fields, xdep);
              if (inter != rank && !sent[inter]) {
                int tag = starpu_mpi_data_get_tag(output);
                debug_printf(1, "%d submits send %d to %d for t=%d\n", rank, tag, inter, t);
                sent[inter] = 1;
                starpu_mpi_isend_detached(output, (int)inter, tag, MPI_COMM_WORLD, NULL, NULL);
              }
            }
          }
        }
      }
    }
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
