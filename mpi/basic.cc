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
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include "../core/core.h"
#include "../core/timer.h"
#define  MASTER 0

void initialize_data (int *data, int size, int id)
{
  for (int i = 0; i < size; i++)
    data[i] = id;
}

int main (int argc, char *argv[])
{
  int numtasks, taskid;
  MPI_Status status;

  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
  MPI_Comm_rank(MPI_COMM_WORLD,&taskid);
  
  App new_app(argc, argv);
  std::vector<TaskGraph> graphs = new_app.graphs;
  std::vector<std::vector<std::vector< std::pair<long, long> > > > graph_dependencies;
  std::vector<std::vector<std::vector< std::pair<long, long> > > > graph_rev_deps;
  int size_of_data = 1;
  int *data_to_transfer = (int *)malloc(sizeof(int) * size_of_data);
  initialize_data(data_to_transfer, size_of_data, taskid);
  for (size_t i = 0; i < graphs.size(); i++)
  {
    TaskGraph graph = graphs[i];
      std::vector< std::vector< std::pair<long, long> > > all_dependencies;
      std::vector< std::vector< std::pair<long, long> > > all_rev_dependencies;
      for (long dset = 0; dset < graph.max_dependence_sets(); dset++)
        {
          all_dependencies.push_back(graph.dependencies(dset, taskid));
	        all_rev_dependencies.push_back(graph.reverse_dependencies(dset, taskid));
        }
      graph_dependencies.push_back(all_dependencies);
      graph_rev_deps.push_back(all_rev_dependencies); 
    }
  struct Timer__<struct MPITimer> timer;
  timer.sync_time_start();
  
  for (size_t i = 0; i < graphs.size(); i++)
    {
      //small amount of extra time here
      TaskGraph graph = graphs[i];
      Kernel k(graph.kernel);
      
      for (long timestep = 0L; timestep < graph.timesteps; timestep += 1)
	     {
	       //small amount of extra time here
	       if (taskid >= graph.width_at_timestep(timestep) + graph.offset_at_timestep(timestep)) continue;
	       if (taskid < graph.offset_at_timestep(timestep)) continue;
	       
	       /* Kernel Execute Call */
	       k.execute();
            
	       /* Sends */
	       /* It may be worth put all indices into a vector and then looping through that way.
	          This would get rid of the cost of creating pairs */
	       for (std::pair<long, long> interval: graph_rev_deps[i][graph.dependence_set_at_timestep(timestep)])
	         {
	           for (long i = interval.first; i <= interval.second; i++)
	     	       {
	     	       
	     	       if (i >= graph.width_at_timestep(timestep + 1) + graph.offset_at_timestep(timestep + 1) 
	     	             || i < graph.offset_at_timestep(timestep + 1)) continue;
	     	       MPI_Send(data_to_transfer, size_of_data, MPI_INT, (int)i, 0, MPI_COMM_WORLD); 
	     	       }
	         }
	  
	         /* Receives */
	       for (std::pair<long, long> interval: graph_dependencies[i][graph.dependence_set_at_timestep(timestep)])
	         {
	           for (long i = interval.first; i <= interval.second; i++)
		          {
		            //small amount of extra time here
		            if (i >= graph.width_at_timestep(timestep - 1) + graph.offset_at_timestep(timestep - 1) 
		                  || i < graph.offset_at_timestep(timestep - 1)) continue;
		            MPI_Recv(data_to_transfer, size_of_data, MPI_INT, (int)i, 0, MPI_COMM_WORLD, &status);
		          }
	          }
	     }   
    }
  double time_elapsed = timer.sync_time_end();
  if (taskid == MASTER) new_app.report_timing(time_elapsed);
  free(data_to_transfer);
  MPI_Finalize();
}
