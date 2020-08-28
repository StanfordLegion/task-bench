/* Copyright 2018 Los Alamos National Laboratory
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//#include <parsec/interfaces/ptg/ptg-compiler/jdf.h>
#include "core_c.h"
#include <data_dist/matrix/two_dim_rectangle_cyclic.h>
#include "common.h"
#include <parsec/execution_stream.h>
#include <data_dist/matrix/two_dim_rectangle_cyclic.h>
#include <parsec/arena.h>

//#define TRACK_NB_TASKS

#ifdef __cplusplus
extern "C"
{
#endif
  
extern int CORE_kernel(parsec_execution_stream_t *es, task_graph_t graph, float *out, float *in1, float *in2, float *in3,
                float *in4, float *in5, int num_args, int x, int t, int graph_idx, int my_rank, char **extra_local_memory);

extern int get_in_first(task_graph_t graph, int t, int x);

extern int get_in_last(task_graph_t graph, int t, int x);

extern int get_out_first(task_graph_t graph, int t, int x);

extern int get_out_last(task_graph_t graph, int t, int x);

extern int get_num_args(task_graph_t g, int t, int x, int in_first, int in_last);

extern int get_num_args_out(task_graph_t g, int t, int x, int out_first, int out_last);

extern int nb_tasks_per_node[32];

extern int parsec_stencil_1d(parsec_context_t *parsec,
                             parsec_tiled_matrix_dc_t *A, task_graph_t graph, int nb_fields,
                             int time_steps, int graph_idx, char **extra_local_memory);
                      
extern int parsec_nearest_radix_5(parsec_context_t *parsec,
                                  parsec_tiled_matrix_dc_t *A, task_graph_t graph, int nb_fields,
                                  int time_steps, int graph_idx, char **extra_local_memory);

extern int parsec_spread_radix5_period3(parsec_context_t *parsec,
                                        parsec_tiled_matrix_dc_t *A, task_graph_t graph, int nb_fields,
                                        int time_steps, int graph_idx, char **extra_local_memory);
                                  
extern int parsec_benchmark(parsec_context_t *parsec,
                     parsec_tiled_matrix_dc_t *A, task_graph_t graph, int nb_fields,
                     int time_steps, int graph_idx, char **extra_local_memory);

extern parsec_taskpool_t*
parsec_stencil_1d_New(parsec_tiled_matrix_dc_t *A, task_graph_t graph, int nb_fields,
                      int time_steps, int graph_idx, char **extra_local_memory);

extern parsec_taskpool_t*
parsec_nearest_radix_5_New(parsec_tiled_matrix_dc_t *A, task_graph_t graph, int nb_fields,
                           int time_steps, int graph_idx, char **extra_local_memory);

extern parsec_taskpool_t*
parsec_spread_radix5_period3_New(parsec_tiled_matrix_dc_t *A, task_graph_t graph, int nb_fields,
                           int time_steps, int graph_idx, char **extra_local_memory);

extern void parsec_stencil_1d_Destruct(parsec_taskpool_t *taskpool);

extern void parsec_nearest_radix_5_Destruct(parsec_taskpool_t *taskpool);

extern void parsec_spread_radix5_period3_Destruct(parsec_taskpool_t *taskpool);

#ifdef __cplusplus
}
#endif
