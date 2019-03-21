/* Copyright 2018 Los Alamos National Laboratory
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

//#include "benchmark_internal.h"
#include "core.h"
#include "core_c.h"
#include <data_dist/matrix/two_dim_rectangle_cyclic.h>
#include "common.h"
#include <parsec/execution_stream.h>
#include <data_dist/matrix/two_dim_rectangle_cyclic.h>
#include <parsec/arena.h>
#include "benchmark_internal.h"

#define USE_CORE_VERIFICATION

#ifdef __cplusplus
extern "C"
{
int CORE_kernel(parsec_execution_stream_t *es, task_graph_t g, float *out, float *in1, float *in2, float *in3,
                float *in4, float *in5, int num_args, int x, int t, int graph_idx, int my_rank, char **extra_local_memory)
{
  
  TaskGraph graph(g);

  switch(num_args){
  case 1:
  {
#if defined (USE_CORE_VERIFICATION)    
    char *output_ptr = (char*)out;
    size_t output_bytes= graph.output_bytes_per_task;
    std::vector<const char *> input_ptrs;
    std::vector<size_t> input_bytes;
    input_ptrs.push_back((char*)out);
    input_bytes.push_back(graph.output_bytes_per_task);
  
    graph.execute_point(t, x, output_ptr, output_bytes,
                        input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[es->core_id], graph.scratch_bytes_per_task);

//TODO
    //task_graph_execute_point(graph, timestep, point, (char *)output_ptr, output_bytes, (const char **)inputPointer, inputBytes, numInputs);

#else
    *out = 0.0;
    printf("Graph %d, Task1, [%d, %d], rank %d, core %d, out %.2f, local_mem %p\n", 
          graph_idx, t, x, my_rank, es->core_id, *out, extra_local_memory[es->core_id]);
#endif
  break;
  }

  case 2:
  {
#if defined (USE_CORE_VERIFICATION)      
    char *output_ptr = (char*)out;
    size_t output_bytes= graph.output_bytes_per_task;
    std::vector<const char *> input_ptrs;
    std::vector<size_t> input_bytes;
    input_ptrs.push_back((char*)in1);
    input_bytes.push_back(graph.output_bytes_per_task);

    graph.execute_point(t, x, output_ptr, output_bytes,
                        input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[es->core_id], graph.scratch_bytes_per_task);
#else
    *out = *in1 + 1.0;
    printf("Graph %d, Task2, [%d, %d], rank %d, core %d, in1 %.2f out %.2f, local_mem %p\n",
          graph_idx, t, x, my_rank, es->core_id, *in1, *out, extra_local_memory[es->core_id]);
#endif
    break;
  }

  case 3:
  {
#if defined (USE_CORE_VERIFICATION)      
    char *output_ptr = (char*)out;
    size_t output_bytes= graph.output_bytes_per_task;
    std::vector<const char *> input_ptrs;
    std::vector<size_t> input_bytes;
    input_ptrs.push_back((char*)in1);
    input_bytes.push_back(graph.output_bytes_per_task);
    input_ptrs.push_back((char*)in2);
    input_bytes.push_back(graph.output_bytes_per_task);

    graph.execute_point(t, x, output_ptr, output_bytes,
                       input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[es->core_id], graph.scratch_bytes_per_task);

#else
    *out = *in1 + *in2 + 1.0;
    printf("Graph %d, Task3, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, out %.2f, local_mem %p\n",
          graph_idx, t, x, my_rank, es->core_id, *in1, *in2, *out, extra_local_memory[es->core_id]);
#endif
    break;
  }

  case 4:
  {
#if defined (USE_CORE_VERIFICATION)  
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

    graph.execute_point(t, x, output_ptr, output_bytes,
                        input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[es->core_id], graph.scratch_bytes_per_task);
#else
    *out = *in1 + *in2 + *in3 + 1.0;
    printf("Graph %d, Task4, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, out %.2f, local_mem %p\n", 
          graph_idx, t, x, my_rank, es->core_id, *in1, *in2, *in3, *out, extra_local_memory[es->core_id]);
#endif
    break;
  }

  case 5:
  {
#if defined (USE_CORE_VERIFICATION)  
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

    graph.execute_point(t, x, output_ptr, output_bytes,
                        input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[es->core_id], graph.scratch_bytes_per_task);
#else
    *out = *in1 + *in2 + *in3 + *in4 + 1.0;
    printf("Graph %d, Task5, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, out %.2f, local_mem %p\n",
          graph_idx, t, x, my_rank, es->core_id, *in1, *in2, *in3, *in4, *out, extra_local_memory[es->core_id]);
#endif
    break;
  }

  case 6:
  {
#if defined (USE_CORE_VERIFICATION)  
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

    graph.execute_point(t, x, output_ptr, output_bytes,
                        input_ptrs.data(), input_bytes.data(), input_ptrs.size(), extra_local_memory[es->core_id], graph.scratch_bytes_per_task);
#else
    *out = *in1 + *in2 + *in3 + *in4 + *in5 + 1.0;
    printf("Graph %d, Task6, [%d, %d], rank %d, core %d, in1 %.2f, in2 %.2f, in3 %.2f, in4 %.2f, in5 %.2f, out %.2f, local_mem %p\n",
          graph_idx, t, x, my_rank, es->core_id, *in1, *in2, *in3, *in4, *in5, *out, extra_local_memory[es->core_id]);
#endif
    break;
  }
  
  default:
    assert(false && "unexpected num_args");
  }

#if defined (TRACK_NB_TASKS)        
  nb_tasks_per_node[es->core_id] ++;
#endif

  return PARSEC_HOOK_RETURN_DONE;
}

int get_in_first(task_graph_t g, int t, int x) {
  int in_first;
  TaskGraph graph(g);
  long dset = graph.dependence_set_at_timestep(t);
  std::vector<std::pair<long, long> > deps = graph.dependencies(dset, x);
  if (t == 0 || deps.size() == 0) {
    in_first = -1;
  } else {
    long last_offset = graph.offset_at_timestep(t-1);
    long last_width = graph.width_at_timestep(t-1);
    for (int i = deps[0].first; i <= deps[0].second; i++) {
      if (i >= last_offset && i < last_offset + last_width) {
        in_first = i;
        break;
      }  
    }
  }

 // printf("(%d, %d): in_first: %d\n", t, x, in_first);
  return in_first;
}

int get_in_last(task_graph_t g, int t, int x) {
  int in_last;
  TaskGraph graph(g);
  long dset = graph.dependence_set_at_timestep(t);
  std::vector<std::pair<long, long> > deps = graph.dependencies(dset, x);
  if(t == 0 || 0 == deps.size()) {
    in_last = -2;
  } else {
    long last_offset = graph.offset_at_timestep(t-1);
    long last_width = graph.width_at_timestep(t-1);
    for (int i = deps[0].second; i >= deps[0].first; i--) {
      if (i >= last_offset && i < last_offset + last_width) {
        in_last = i;
        break;
      }  
    }
  }
  //printf("(%d, %d): in_last: %d\n", t, x, in_last);
  return in_last;
}

int get_out_first(task_graph_t g, int t, int x) {
  int out_first;
  TaskGraph graph(g);
  long dset_r = graph.dependence_set_at_timestep(t+1);
  std::vector<std::pair<long, long> > rdeps = graph.reverse_dependencies(dset_r, x);
  if(0 == rdeps.size() || t == graph.timesteps -1) {
    out_first = -1;
  } else {
    long next_offset = graph.offset_at_timestep(t+1);
    long next_width = graph.width_at_timestep(t+1);
    for (int i = rdeps[0].first; i <= rdeps[0].second; i++) {
      if (i >= next_offset && i < next_offset + next_width) {
        out_first = i;
        break;
      }  
    }
  }

  //printf("(%d, %d): out_first: %d\n", t, x, out_first);
  return out_first;
}

int get_out_last(task_graph_t g, int t, int x) {
  int out_last;
  TaskGraph graph(g);
  long dset_r = graph.dependence_set_at_timestep(t+1);
  std::vector<std::pair<long, long> > rdeps = graph.reverse_dependencies(dset_r, x);
  if(0 == rdeps.size() || t == graph.timesteps -1) {
    out_last = -2;
  } else {
    long next_offset = graph.offset_at_timestep(t+1);
    long next_width = graph.width_at_timestep(t+1);
    for (int i = rdeps[0].second; i >= rdeps[0].first; i--) {
      if (i >= next_offset && i < next_offset + next_width) {
        out_last = i;
        break;
      }  
    }
  }
  
 // printf("(%d, %d): out_last: %d\n", t, x, out_last);
  return out_last;
}

int get_num_args(task_graph_t g, int t, int x, int in_first, int in_last) {
  TaskGraph graph(g);
  long dset = graph.dependence_set_at_timestep(t);
  std::vector<std::pair<long, long> > deps = graph.dependencies(dset, x);

  if( 0 == deps.size() || 0 == t )
    return 1;
  else
    return in_last - in_first + 2;
}

int get_num_args_out(task_graph_t g, int t, int x, int out_first, int out_last) {
  TaskGraph graph(g);
  long dset_r = graph.dependence_set_at_timestep(t+1);
  std::vector<std::pair<long, long> > rdeps = graph.reverse_dependencies(dset_r, x);
  
  if( 0 == rdeps.size() )
    return 1;
  else
    return out_last - out_first + 2;
}

}
#endif  /* end __cplusplus */
