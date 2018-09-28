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
#include "core.h"
#include "mpi.h"
#include "timer.h"

int main(int argc, char *argv[])
{
  MPI_Init(&argc, &argv);
  int n_ranks, rank;
  MPI_Comm_size(MPI_COMM_WORLD, &n_ranks);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);

  App app(argc, argv);
  if (rank == 0) app.display();

  double elapsed_time = 0.0;
  for (int iter = 0; iter < 2; ++iter) {
    MPI_Barrier(MPI_COMM_WORLD);

    double start_time = MPI_Wtime();

    std::vector<MPI_Request> requests;

    for (auto graph : app.graphs) {
      std::vector<char> output(graph.output_bytes_per_task);
      std::vector<char> scratch(graph.scratch_bytes_per_task);

      long first_point = rank * graph.max_width / n_ranks;
      long last_point = (rank + 1) * graph.max_width / n_ranks - 1;

      std::vector<int> rank_by_point(graph.max_width);
      for (int r = 0; r < n_ranks; ++r) {
        long r_first_point = r * graph.max_width / n_ranks;
        long r_last_point = (r + 1) * graph.max_width / n_ranks - 1;
        for (long p = r_first_point; p <= r_last_point; ++p) {
          rank_by_point[p] = r;
        }
      }

      long max_deps = 0;
      for (long dset = 0; dset < graph.max_dependence_sets(); ++dset) {
        for (long point = first_point; point <= last_point; ++point) {
          long deps = 0;
          for (auto interval : graph.dependencies(dset, point)) {
            deps += interval.second - interval.first + 1;
          }
          max_deps = std::max(max_deps, deps);
        }
      }

      std::vector<std::vector<char> > inputs(max_deps);
      std::vector<const char *> input_ptr(max_deps);
      std::vector<size_t> input_bytes(max_deps);
      for (long dep = 0; dep < max_deps; ++dep) {
        inputs[dep].resize(graph.output_bytes_per_task);
        input_ptr[dep] = inputs[dep].data();
        input_bytes[dep] = inputs[dep].size();
      }

      for (long timestep = 0; timestep < graph.timesteps; ++timestep) {
        for (long point = first_point; point <= last_point; ++point) {

          long offset = graph.offset_at_timestep(timestep);
          long width = graph.width_at_timestep(timestep);

          long last_offset = graph.offset_at_timestep(timestep-1);
          long last_width = graph.width_at_timestep(timestep-1);

          long dset = graph.dependence_set_at_timestep(timestep);

          requests.clear();

          /* Receives */
          long n_inputs = 0;
          if (point >= offset && point < offset + width) {
            for (auto interval : graph.dependencies(dset, point)) {
              for (long dep = interval.first; dep <= interval.second; ++dep) {
                if (dep < last_offset || dep >= last_offset + last_width) {
                  continue;
                }

                MPI_Request req;
                MPI_Irecv(const_cast<char *>(inputs[n_inputs].data()), inputs[n_inputs].size(), MPI_BYTE,
                          rank_by_point[dep], (int)point, MPI_COMM_WORLD, &req);
                requests.push_back(req);
                n_inputs++;
              }
            }
          }

          /* Send */
          if (point >= last_offset && point < last_offset + last_width) {
            for (auto interval : graph.reverse_dependencies(dset, point)) {
              for (long dep = interval.first; dep <= interval.second; dep++) {
                if (dep < offset || dep >= offset + width) {
                  continue;
                }

                MPI_Request req;
                MPI_Isend(output.data(), output.size(), MPI_BYTE,
                          rank_by_point[dep], (int)dep, MPI_COMM_WORLD, &req);
                requests.push_back(req);
              }
            }
          }

          MPI_Waitall(requests.size(), requests.data(), MPI_STATUSES_IGNORE);

          if (point >= offset && point < offset + width) {
            graph.execute_point(timestep, point,
                                output.data(), output.size(),
                                input_ptr.data(), input_bytes.data(), n_inputs,
                                scratch.data(), scratch.size());
          }
        }
      }
    }

    MPI_Barrier(MPI_COMM_WORLD);

    double stop_time = MPI_Wtime();
    elapsed_time = stop_time - start_time;
  }

  if (rank == 0) {
    app.report_timing(elapsed_time);
  }

  MPI_Finalize();
}
