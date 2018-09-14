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

#include <float.h>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include "core.h"
#include "mpi.h"
#include "timer.h"
#define MASTER 0
#define NUM_ITER 1

void free_output(std::vector<char *> output_ptrs)
{
  for (char *out : output_ptrs) free(out);
}

void free_data(std::vector<std::vector<std::vector<char *> > > graph_all_data)
{
  for (std::vector<std::vector<char *> > all_data : graph_all_data) {
    for (std::vector<char *> input_ptrs : all_data) {
      for (char *data : input_ptrs) free(data);
    }
  }
}

// this can be done for each dset and stored in preprocessing
int num_dependencies(TaskGraph &graph, long dset, int taskid)
{
  int num_deps = 0;
  std::vector<std::pair<long, long> > deps = graph.dependencies(dset, taskid);
  for (std::pair<long, long> interval : deps) {
    for (int i = interval.first; i <= interval.second; i++) num_deps++;
  }
  return num_deps;
}

int main(int argc, char *argv[])
{
  int numtasks, taskid;
  MPI_Status status;

  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
  MPI_Comm_rank(MPI_COMM_WORLD, &taskid);

  App new_app(argc, argv);
  if (taskid == MASTER) new_app.display();

  std::vector<TaskGraph> graphs = new_app.graphs;
  std::vector<std::vector<std::vector<std::pair<long, long> > > >
      graph_dependencies;
  std::vector<std::vector<std::vector<std::pair<long, long> > > >
      graph_rev_deps;
  std::vector<std::vector<std::vector<size_t> > > graph_input_bytes;
  std::vector<std::vector<int> > graph_num_inputs;
  std::vector<std::vector<std::vector<char *> > > graph_all_data;
  std::vector<char *> output_ptrs;

  for (size_t i = 0; i < graphs.size(); i++) {
    TaskGraph graph = graphs[i];
    size_t output_bytes = graph.output_bytes_per_task;
    std::vector<std::vector<std::pair<long, long> > > all_dependencies;
    std::vector<std::vector<std::pair<long, long> > > all_rev_dependencies;
    std::vector<std::vector<size_t> > all_input_bytes;
    std::vector<int> all_num_inputs;
    std::vector<std::vector<char *> > all_data;

    for (long dset = 0; dset < graph.max_dependence_sets(); dset++) {
      all_dependencies.push_back(graph.dependencies(dset, taskid));
      all_rev_dependencies.push_back(graph.reverse_dependencies(dset, taskid));

      int num_deps = num_dependencies(graph, dset, taskid);
      all_num_inputs.push_back(num_deps);
      std::vector<size_t> input_bytes;
      std::vector<char *> input_ptrs;
      for (int count = 0; count < num_deps; count++) {
        char *data_to_receive = (char *)malloc(output_bytes);
        input_ptrs.push_back(data_to_receive);
        input_bytes.push_back(output_bytes);
      }
      all_input_bytes.push_back(input_bytes);
      all_data.push_back(input_ptrs);
    }

    char *output_ptr = (char *)malloc(output_bytes);
    output_ptrs.push_back(output_ptr);

    graph_dependencies.push_back(all_dependencies);
    graph_rev_deps.push_back(all_rev_dependencies);
    graph_input_bytes.push_back(all_input_bytes);
    graph_num_inputs.push_back(all_num_inputs);
    graph_all_data.push_back(all_data);
  }

  double total_time_elapsed = 0.0;
  for (int iter = 0; iter < NUM_ITER + 1; iter++) {
    MPI_Barrier(MPI_COMM_WORLD);
    Timer::time_start();

    for (size_t i = 0; i < graphs.size(); i++) {
      TaskGraph graph = graphs[i];
      size_t output_bytes = graph.output_bytes_per_task;
      char *output_ptr = output_ptrs[i];
      size_t scratch_bytes = graph.scratch_bytes_per_task;
      char *scratch_ptr = (char *)malloc(scratch_bytes);

      for (long timestep = 0L; timestep < graph.timesteps; timestep += 1) {
        long old_dset = graph.dependence_set_at_timestep(timestep);
        long dset = graph.dependence_set_at_timestep(timestep + 1);
        int num_inputs = graph_num_inputs[i][old_dset];

        if (taskid < graph.width_at_timestep(timestep) +
                         graph.offset_at_timestep(timestep) &&
            taskid >= graph.offset_at_timestep(timestep)) {
          graph.execute_point(timestep, taskid, output_ptr, output_bytes,
                              (const char **)graph_all_data[i][old_dset].data(),
                              graph_input_bytes[i][old_dset].data(),
                              num_inputs,
                              scratch_ptr, scratch_bytes);

          /* Sends */
          /* Only send if you are in the current timestep of the graph */
          for (std::pair<long, long> interval : graph_rev_deps[i][dset]) {
            for (long inter = interval.first; inter <= interval.second;
                 inter++) {
              if (inter >= graph.width_at_timestep(timestep + 1) +
                               graph.offset_at_timestep(timestep + 1) ||
                  inter < graph.offset_at_timestep(timestep + 1))
                continue;
              MPI_Send(output_ptr, output_bytes, MPI_BYTE, (int)inter, 0,
                       MPI_COMM_WORLD);
            }
          }
        }

        /* Receives */
        /* Only receive if you are in the next timestep of the graph */
        if (taskid < graph.width_at_timestep(timestep + 1) +
                         graph.offset_at_timestep(timestep + 1) &&
            taskid >= graph.offset_at_timestep(timestep + 1)) {
          int idx = 0;
          for (std::pair<long, long> interval : graph_dependencies[i][dset]) {
            for (long inter = interval.first; inter <= interval.second;
                 inter++) {
              if (inter >= graph.width_at_timestep(timestep) +
                               graph.offset_at_timestep(timestep) ||
                  inter < graph.offset_at_timestep(timestep))
                continue;
              MPI_Recv(graph_all_data[i][dset][idx], output_bytes, MPI_BYTE,
                       (int)inter, 0, MPI_COMM_WORLD, &status);
              idx++;
            }
          }
        }
      }

      free(scratch_ptr);
    }
    MPI_Barrier(MPI_COMM_WORLD);
    double time_elapsed = Timer::time_end();
    /* Average times, but do not include the first run */
    if (iter != 0) total_time_elapsed += time_elapsed;
  }
  if (taskid == MASTER) new_app.report_timing(total_time_elapsed / NUM_ITER);
  free_output(output_ptrs);
  free_data(graph_all_data);
  MPI_Finalize();
}
