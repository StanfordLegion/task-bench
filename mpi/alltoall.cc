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

#include <stdio.h>
#include <stdlib.h>
#include <cassert>
#include "core.h"
#include "mpi.h"
#include "timer.h"
#define MASTER 0
#define NUM_ITER 1

void free_all(std::vector<std::vector<int *> > &vec)
{
  for (std::vector<int *> inner_vec : vec) {
    for (int *data : inner_vec) free(data);
  }
}

void free_output(std::vector<char *> output_ptrs)
{
  for (char *out : output_ptrs) free(out);
}

void free_all_char(std::vector<std::vector<char *> > &vec)
{
  for (std::vector<char *> inner_vec : vec) {
    for (char *data : inner_vec) free(data);
  }
}

int count_dependencies(std::vector<std::pair<long, long> > &dep)
{
  int total_dependencies = 0;
  for (std::pair<int, int> interval : dep) {
    for (int i = interval.first; i <= interval.second; i++)
      total_dependencies++;
  }
  return total_dependencies;
}

void initialize_array(int *arr, int size, int taskid)
{
  for (int i = 0; i < size; i++) arr[i] = taskid;
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

  std::vector<std::vector<int *> > graph_send_counts;
  std::vector<std::vector<int *> > graph_recv_counts;
  std::vector<std::vector<int *> > graph_rdispls;
  std::vector<std::vector<char *> > graph_recvs;
  std::vector<std::vector<std::vector<size_t> > > graph_input_bytes;
  std::vector<size_t> graph_output_bytes;
  std::vector<std::vector<int> > graph_num_inputs;
  std::vector<std::vector<std::vector<char *> > > graph_all_data;
  std::vector<char *> output_ptrs;

  int *sdispls = (int *)malloc(numtasks * sizeof(int));
  initialize_array(sdispls, numtasks, 0);

  for (size_t i = 0; i < graphs.size(); i++) {
    TaskGraph graph = graphs[i];
    size_t output_bytes = graph.output_bytes_per_task;

    std::vector<int *> all_send_counts;
    std::vector<int *> all_recv_counts;
    std::vector<int *> all_rdispls;
    std::vector<char *> all_recvs;
    std::vector<std::vector<size_t> > all_input_bytes;
    std::vector<int> all_num_inputs;
    std::vector<std::vector<char *> > all_data;

    for (long dset = 0L; dset < graph.max_dependence_sets(); dset++) {
      std::vector<std::pair<long, long> > dependencies =
          graph.dependencies(dset, taskid);
      std::vector<std::pair<long, long> > rev_dependencies =
          graph.reverse_dependencies(dset, taskid);
      int num_dependencies = count_dependencies(dependencies);
      all_num_inputs.push_back(num_dependencies);
      int num_rev_dependencies = count_dependencies(rev_dependencies);

      char *recv = (char *)malloc(output_bytes * num_dependencies);

      int *sendcounts = (int *)malloc(numtasks * sizeof(int));
      int *recvcounts = (int *)malloc(numtasks * sizeof(int));
      int *rdispls = (int *)malloc(numtasks * sizeof(int));

      initialize_array(sendcounts, numtasks, 0);
      initialize_array(recvcounts, numtasks, 0);
      initialize_array(rdispls, numtasks, 0);

      int idx = 0;
      std::vector<size_t> input_bytes;
      std::vector<char *> input_ptrs;
      for (std::pair<long, long> interval : dependencies) {
        for (int i = interval.first; i <= interval.second; i++) {
          recvcounts[i] = output_bytes;
          rdispls[i] = idx;
          idx += output_bytes;
          input_bytes.push_back(output_bytes);
          char *data_to_receive = (char *)malloc(output_bytes);
          input_ptrs.push_back(data_to_receive);
        }
      }
      all_input_bytes.push_back(input_bytes);
      all_data.push_back(input_ptrs);
      for (std::pair<long, long> interval : rev_dependencies) {
        for (int i = interval.first; i <= interval.second; i++)
          sendcounts[i] = output_bytes;
      }
      all_send_counts.push_back(sendcounts);
      all_recv_counts.push_back(recvcounts);
      all_rdispls.push_back(rdispls);
      all_recvs.push_back(recv);
    }
    char *output_ptr = (char *)malloc(output_bytes);
    output_ptrs.push_back(output_ptr);
    graph_send_counts.push_back(all_send_counts);
    graph_recv_counts.push_back(all_recv_counts);
    graph_rdispls.push_back(all_rdispls);
    graph_recvs.push_back(all_recvs);
    graph_output_bytes.push_back(output_bytes);
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
      size_t output_bytes = graph_output_bytes[i];
      char *output_ptr = output_ptrs[i];
      size_t scratch_bytes = graph.scratch_bytes_per_task;
      char *scratch_ptr = (char *)malloc(scratch_bytes);

      int *final_send_counts;
      int *final_recv_counts;
      int *final_recv_displs;
      for (long timestep = 0L; timestep < graph.timesteps; timestep++) {
        long dset = graph.dependence_set_at_timestep(timestep + 1);
        long old_dset = graph.dependence_set_at_timestep(timestep);
        int num_deps = graph_num_inputs[i][old_dset];
        int updated_deps = graph_num_inputs[i][dset];

        /* If in bounds in the current time step, then execute point and send */
        if (taskid < graph.width_at_timestep(timestep) +
                         graph.offset_at_timestep(timestep) &&
            taskid >= graph.offset_at_timestep(timestep)) {
          graph.execute_point(timestep, taskid, output_ptr, output_bytes,
                              (const char **)graph_all_data[i][old_dset].data(),
                              graph_input_bytes[i][old_dset].data(), num_deps,
                              scratch_ptr, scratch_bytes);
          final_send_counts = graph_send_counts[i][dset];
        } else {
          final_send_counts = sdispls;
        }

        /* If in bounds in the next timestep, receive */
        if (taskid < graph.width_at_timestep(timestep + 1) +
                         graph.offset_at_timestep(timestep + 1) &&
            taskid >= graph.offset_at_timestep(timestep + 1)) {
          final_recv_counts = graph_recv_counts[i][dset];
          final_recv_displs = graph_rdispls[i][dset];
        } else {
          final_recv_counts = sdispls;
          final_recv_displs = sdispls;
        }

        MPI_Alltoallv(output_ptr, final_send_counts, sdispls, MPI_BYTE,
                      graph_recvs[i][dset], final_recv_counts,
                      final_recv_displs, MPI_BYTE, MPI_COMM_WORLD);

        for (int dep = 0; dep < updated_deps; dep++) {
          char *recv = graph_recvs[i][dset] + (dep * output_bytes);
          graph_all_data[i][dset][dep] = recv;
        }
      }

      free(scratch_ptr);
    }
    MPI_Barrier(MPI_COMM_WORLD);
    double time_elapsed = Timer::time_end();
    if (iter != 0) total_time_elapsed += time_elapsed;
  }
  if (taskid == MASTER) new_app.report_timing(total_time_elapsed / NUM_ITER);

  free_output(output_ptrs);
  free_all(graph_send_counts);
  free_all(graph_recv_counts);
  free_all(graph_rdispls);
  free_all_char(graph_recvs);
  free(sdispls);
  MPI_Finalize();
}
