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
#include <string.h>
#include "core.h"
#include "mpi.h"
#include "timer.h"
#define MASTER 0
#define NUM_ITER 1

int count_dependencies(std::vector<std::pair<long, long> > &dep)
{
  int total_dependencies = 0;
  for (std::pair<int, int> interval : dep) {
    for (int i = interval.first; i <= interval.second; i++)
      total_dependencies++;
  }
  return total_dependencies;
}

void free_data(std::vector<std::vector<std::vector<char *> > > graph_all_data)
{
  for (std::vector<std::vector<char *> > all_data : graph_all_data) {
    for (std::vector<char *> input_ptrs : all_data) {
      for (char *data : input_ptrs) free(data);
    }
  }
}

void free_output(std::vector<char *> output_ptrs)
{
  for (char *out : output_ptrs) free(out);
}

void rearrange(std::vector<char *> &input)
{
  char *save = input[0];
  input[0] = input[1];
  input[1] = input[2];
  input[2] = save;
}

int num_dependencies(TaskGraph &graph, long dset, int taskid)
{
  int num_deps = 0;
  std::vector<std::pair<long, long> > deps = graph.dependencies(dset, taskid);
  for (std::pair<long, long> interval : deps) {
    for (int i = interval.first; i <= interval.second; i++) num_deps++;
  }
  return num_deps;
}

void free_all_comms(
    std::vector<std::vector<std::vector<std::pair<int, MPI_Comm> > > >
        graph_all_comms)
{
  for (std::vector<std::vector<std::pair<int, MPI_Comm> > > dset :
       graph_all_comms) {
    for (std::vector<std::pair<int, MPI_Comm> > all_comm : dset) {
      for (std::pair<int, MPI_Comm> comm : all_comm)
        if (comm.first != -1) MPI_Comm_free(&comm.second);
    }
  }
}

int main(int argc, char *argv[])
{
  int numtasks, taskid;
  MPI_Status status;

  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
  MPI_Comm_rank(MPI_COMM_WORLD, &taskid);

  MPI_Group world_group;
  MPI_Comm_group(MPI_COMM_WORLD, &world_group);

  App new_app(argc, argv);
  if (taskid == MASTER) new_app.display();

  /* Preallocated storage needed for all the graphs */
  std::vector<TaskGraph> graphs = new_app.graphs;
  std::vector<std::vector<std::vector<std::pair<int, MPI_Comm> > > >
      graph_all_comms;
  std::vector<std::vector<std::vector<size_t> > > graph_input_bytes;
  std::vector<bool> graph_extra_case;
  std::vector<char *> output_ptrs;
  std::vector<std::vector<int> > graph_num_inputs;
  std::vector<std::vector<std::vector<char *> > > graph_all_data;
  /* Loop through all graphs */
  for (size_t graph_num = 0; graph_num < graphs.size(); graph_num++) {
    TaskGraph graph = graphs[graph_num];
    size_t output_bytes = graph.output_bytes_per_task;
    bool is_fft = false;
    int total_dsets = graph.max_dependence_sets();

    /* Special situation for graphs that send to themselves */
    bool extra_case =
        graph.dependence == DependenceType::STENCIL_1D ||
        graph.dependence == DependenceType::STENCIL_1D_PERIODIC ||
        graph.dependence == DependenceType::NO_COMM ||
        graph.dependence == DependenceType::DOM ||
        graph.dependence == DependenceType::ALL_TO_ALL ||
        (graph.dependence == DependenceType::TREE && taskid == MASTER);
    graph_extra_case.push_back(extra_case);
    /* End of special situation */

    if (graph.dependence == DependenceType::FFT) {
      is_fft = true;
      graph.dependence = DependenceType::STENCIL_1D;
    }

    /* Preallocated storage needed for all dsets in each graph */
    std::vector<std::vector<std::pair<int, MPI_Comm> > > dset_all_comms;
    std::vector<std::vector<size_t> > all_input_bytes;
    std::vector<int> all_num_inputs;
    std::vector<std::vector<char *> > all_data;

    /* Loop through all dsets for each graph */
    for (long dset = 0L; dset < total_dsets; dset++) {
      long multiplier = 1L << dset;
      bool loop = false;
      bool inner_loop = false;
      bool seen_self = false;

      /* Preallocated data for each dset */
      std::vector<std::pair<int, MPI_Comm> > all_comms;
      std::vector<std::pair<long, long> > dependencies =
          graph.dependencies(dset, taskid);
      int num_dependencies = count_dependencies(dependencies);
      all_num_inputs.push_back(num_dependencies);
      std::vector<size_t> input_bytes;
      std::vector<char *> input_ptrs;
      for (int count = 0; count < num_dependencies; count++) {
        char *data_to_receive = (char *)malloc(output_bytes);
        input_ptrs.push_back(data_to_receive);
        input_bytes.push_back(output_bytes);
      }
      all_input_bytes.push_back(input_bytes);
      all_data.push_back(input_ptrs);
      for (std::pair<long, long> interval : dependencies) {
        /* Special case if the graph involves wrapping to make sure the order of
           the "MPI_Comm_create_group" calls do not hang */
        if (graph.dependence == DependenceType::STENCIL_1D_PERIODIC) {
          if ((taskid == numtasks - 1) && !loop) {
            loop = true;
            interval = dependencies[1];
          } else if ((taskid == numtasks - 1) && loop)
            interval = dependencies[0];
        }
        /* End of special case */

        for (int i = interval.first; i <= interval.second; i++) {
          /* Special case for fft */
          int actual_i = is_fft ? (i - taskid) * multiplier + taskid : i;
          if (actual_i < 0 || actual_i >= graph.max_width) {
            continue;
          }
          if (i == taskid) seen_self = true;

          std::vector<std::pair<long, long> > rev_dependencies =
              graph.reverse_dependencies(dset, actual_i);
          int num_rev_dependencies = count_dependencies(rev_dependencies);
          int *recv_ranks =
              num_rev_dependencies != 0
                  ? (int *)malloc(sizeof(int) * (num_rev_dependencies + 1))
                  : NULL;

          bool inner_seen = false;
          int index = 0;
          int root_of_recv = -1;

          for (std::pair<long, long> inner_interval : rev_dependencies) {
            /* Special case if the graph involves wrapping to make sure the
               order of the "MPI_Comm_create_group" calls do not hang */
            if (graph.dependence == DependenceType::STENCIL_1D_PERIODIC) {
              if (actual_i == numtasks - 1 && !inner_loop) {
                inner_loop = true;
                inner_interval = rev_dependencies[1];
              } else if (actual_i == numtasks - 1 && inner_loop)
                inner_interval = rev_dependencies[0];
            }
            /* End of special case */

            for (int inter = inner_interval.first;
                 inter <= inner_interval.second; inter++) {
              /* Special case for fft */
              int actual_inter =
                  is_fft ? (inter - actual_i) * multiplier + actual_i : inter;
              if (actual_inter < 0 || actual_inter >= graph.max_width) {
                num_rev_dependencies--;
                continue;
              }
              if (actual_inter == actual_i) {
                inner_seen = true;
                root_of_recv = index;
              }
              recv_ranks[index] = actual_inter;
              index++;
            }
          }
          /* Forces a task to be in the communicator of its reverse dependencies
           */
          if (!inner_seen) {
            recv_ranks[index] = actual_i;
            root_of_recv = index;
            num_rev_dependencies++;
          }
          MPI_Group recv_group;
          MPI_Group_incl(world_group, num_rev_dependencies, recv_ranks,
                         &recv_group);
          if (recv_ranks != NULL) free(recv_ranks);

          MPI_Comm recv_comm;
          MPI_Comm_create_group(MPI_COMM_WORLD, recv_group, 0, &recv_comm);
          int rank;
          MPI_Comm_rank(recv_comm, &rank);
          MPI_Group_free(&recv_group);
          std::pair<int, MPI_Comm> final_comm =
              std::make_pair(root_of_recv, recv_comm);
          all_comms.push_back(final_comm);
        }
      }
      /* Forces a task to include itself as a dependency to keep communicators
       * consistent */
      if (!seen_self) {
        std::vector<std::pair<long, long> > rev_dependencies =
            graph.reverse_dependencies(dset, taskid);
        int num_rev_dependencies = count_dependencies(rev_dependencies);

        int *recv_ranks = (int *)malloc(sizeof(int) * num_rev_dependencies);
        int index = 0;
        int root_of_recv = -1;
        for (std::pair<long, long> inner_interval : rev_dependencies) {
          for (int inter = inner_interval.first; inter <= inner_interval.second;
               inter++) {
            recv_ranks[index] = inter;
            index++;
          }
        }
        MPI_Group recv_group;
        MPI_Comm recv_comm1;
        if (num_rev_dependencies != 0) {
          recv_ranks[index] = taskid;
          num_rev_dependencies++;
          root_of_recv = index;
        }
        MPI_Group_incl(world_group, num_rev_dependencies, recv_ranks,
                       &recv_group);
        if (recv_ranks != NULL) free(recv_ranks);
        MPI_Comm_create_group(MPI_COMM_WORLD, recv_group, 0, &recv_comm1);
        MPI_Group_free(&recv_group);

        std::pair<int, MPI_Comm> final_comm =
            std::make_pair(root_of_recv, recv_comm1);
        all_comms.push_back(final_comm);
      }
      dset_all_comms.push_back(all_comms);
    }
    char *output_ptr = (char *)malloc(output_bytes);
    output_ptrs.push_back(output_ptr);
    graph_all_comms.push_back(dset_all_comms);
    graph_input_bytes.push_back(all_input_bytes);
    graph_num_inputs.push_back(all_num_inputs);
    graph_all_data.push_back(all_data);
    if (is_fft) graph.dependence = DependenceType::FFT;
  }

  double total_time_elapsed = 0.0;
  for (int iter = 0; iter < NUM_ITER + 1; iter++) {
    MPI_Barrier(MPI_COMM_WORLD);
    Timer::time_start();
    for (size_t graph_num = 0; graph_num < graphs.size(); graph_num++) {
      TaskGraph graph = graphs[graph_num];
      size_t output_bytes = graph.output_bytes_per_task;
      char *output_ptr = output_ptrs[graph_num];
      size_t scratch_bytes = graph.scratch_bytes_per_task;
      char *scratch_ptr = (char *)malloc(scratch_bytes);

      char *saved_ptr = NULL;
      for (long timestep = 0L; timestep < graph.timesteps; timestep++) {
        long dset = graph.dependence_set_at_timestep(timestep + 1);
        long old_dset = graph.dependence_set_at_timestep(timestep);
        int num_inputs = graph_num_inputs[graph_num][old_dset];

        if (taskid < graph.width_at_timestep(timestep) +
                         graph.offset_at_timestep(timestep) &&
            taskid >= graph.offset_at_timestep(timestep)) {
          graph.execute_point(
              timestep, taskid, output_ptr, output_bytes,
              (const char **)graph_all_data[graph_num][old_dset].data(),
              graph_input_bytes[graph_num][old_dset].data(), num_inputs,
              scratch_ptr, scratch_bytes);
        }

        int idx = 0;
        for (int i = 0; i < graph_all_comms[graph_num][dset].size(); i++) {
          if (graph_all_comms[graph_num][dset][i].first == -1) continue;
          int rank;
          MPI_Comm_rank(graph_all_comms[graph_num][dset][i].second, &rank);
          if (rank == graph_all_comms[graph_num][dset][i].first &&
              taskid < graph.width_at_timestep(timestep) +
                           graph.offset_at_timestep(timestep) &&
              taskid >= graph.offset_at_timestep(timestep)) {
            if (graph_extra_case[graph_num]) {
              memcpy(graph_all_data[graph_num][dset][idx], output_ptr,
                     output_bytes);
              MPI_Bcast(output_ptr, output_bytes, MPI_BYTE,
                        graph_all_comms[graph_num][dset][i].first,
                        graph_all_comms[graph_num][dset][i].second);
              idx++;
            } else {
              MPI_Bcast(output_ptr, output_bytes, MPI_BYTE,
                        graph_all_comms[graph_num][dset][i].first,
                        graph_all_comms[graph_num][dset][i].second);
            }
          } else if (rank != graph_all_comms[graph_num][dset][i].first &&
                     taskid < graph.width_at_timestep(timestep + 1) +
                                  graph.offset_at_timestep(timestep + 1) &&
                     taskid >= graph.offset_at_timestep(timestep + 1)) {
            MPI_Bcast(graph_all_data[graph_num][dset][idx], output_bytes,
                      MPI_BYTE, graph_all_comms[graph_num][dset][i].first,
                      graph_all_comms[graph_num][dset][i].second);
            idx++;
          }
        }
        if (graph.dependence == DependenceType::STENCIL_1D_PERIODIC &&
            taskid == numtasks - 1)
          rearrange(graph_all_data[graph_num][dset]);
      }

      free(scratch_ptr);
    }
    MPI_Barrier(MPI_COMM_WORLD);
    double time_elapsed = Timer::time_end();
    if (iter != 0) total_time_elapsed += time_elapsed;
  }
  if (taskid == MASTER) new_app.report_timing(total_time_elapsed / NUM_ITER);

  /* Free all memory */
  free_output(output_ptrs);
  MPI_Group_free(&world_group);
  free_all_comms(graph_all_comms);
  free_data(graph_all_data);
  MPI_Finalize();
}
