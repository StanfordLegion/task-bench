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

#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>
#include "core.h"
#define  MASTER 0

int main (int argc, char *argv[])
{
  int numtasks, taskid;
  MPI_Status status;

  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
  MPI_Comm_rank(MPI_COMM_WORLD,&taskid);

  App new_app(argc, argv);
  std::vector<TaskGraph> graphs = new_app.graphs;
	
  for (TaskGraph graph: graphs)
    {
      for (long timestep = 0L; timestep < graph.timesteps; timestep += 1)
        {
          if (taskid >= graph.width_at_timestep(timestep)) continue;
          /* Kernel Execute Call */
          graph.kernel.execute();

          /* Sends */
          std::vector<std::pair<long, long> > rev_dependencies = graph.reverse_dependencies(graph.dependence_set_at_timestep(timestep), taskid);
          for (std::pair<long, long> interval: rev_dependencies)
            {
              for (long i = interval.first; i <= interval.second; i++)
                {
                  MPI_Send(&taskid, 1, MPI_INT, (int)i, 0, MPI_COMM_WORLD);
                }
            }
          /* Receives */
	  std::vector<std::pair<long, long> > dependencies = graph.dependencies(graph.dependence_set_at_timestep(timestep), taskid);
          for (std::pair<long, long> interval: dependencies)
            {
              for (long i = interval.first; i <= interval.second; i++)
                {
                  int data;
                  MPI_Recv(&data, 1, MPI_INT, (int)i, 0, MPI_COMM_WORLD, &status);
                }
            }
        }
    }                                                                                                                 
  MPI_Finalize();
}
