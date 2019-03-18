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

#ifdef __cplusplus
extern "C"
{
extern int CORE_kernel(parsec_execution_stream_t *es, task_graph_t graph, float *out, float *in1, float *in2, float *in3,
                float *in4, float *in5, int num_args, int x, int t, int graph_idx, int my_rank, char **extra_local_memory);
}
#endif

extern int parsec_stencil_1d(parsec_context_t *parsec,
                      parsec_tiled_matrix_dc_t *A, task_graph_t graph, int nb_fields,
                      int time_steps, int graph_idx, char **extra_local_memory);
