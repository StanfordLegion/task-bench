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
#include "timer.h"
#define  MASTER 0

int count_dependencies(std::vector< std::pair<long, long> > dep)
{
  int total_dependencies = 0;
  for (std::pair<int, int> interval: dep)
    {
      for (int i = interval.first; i <= interval.second; i++)
		    total_dependencies++;
    }
  return total_dependencies;
}

int main (int argc, char *argv[])
{
  int   numtasks, taskid, len;
  char hostname[MPI_MAX_PROCESSOR_NAME];

  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
  MPI_Comm_rank(MPI_COMM_WORLD, &taskid);
  
  App new_app(argc, argv);
  std::vector<TaskGraph> graphs = new_app.graphs;
  std::vector<std::vector< std::vector< std::pair<long, long> > > > graph_all_deps; 
  std::vector<std::vector<MPI_Request *> > graph_all_requests;
  std::vector<std::vector<int *> > graph_all_datas;
  std::vector<std::vector< std::vector< std::pair<long, long> > > > graph_all_rev_deps;
  
  for (size_t i = 0; i < graphs.size(); i++)
    {
      TaskGraph graph = graphs[i];
      
      std::vector< std::vector< std::pair<long, long> > > all_dependencies;
      std::vector<MPI_Request *> all_request_vectors;
      std::vector<int *> all_data_vectors;
      std::vector< std::vector< std::pair<long, long> > > all_rev_dependencies;

      for (long dset = 0; dset < graph.max_dependence_sets(); dset++)
        {
          int num_dependencies = count_dependencies(graph.dependencies(dset, taskid));
          int num_rev_dependencies = count_dependencies(graph.reverse_dependencies(dset, taskid));
          MPI_Request *request_vector = (MPI_Request *)malloc((num_dependencies + num_rev_dependencies) * sizeof(MPI_Request));
          int *data_vector = (int *)malloc(num_dependencies * sizeof(int));

          all_request_vectors.push_back(request_vector);
          all_data_vectors.push_back(data_vector);

          all_dependencies.push_back(graph.dependencies(dset, taskid));
          all_rev_dependencies.push_back(graph.reverse_dependencies(dset, taskid));
        }
      
      graph_all_deps.push_back(all_dependencies);
      graph_all_requests.push_back(all_request_vectors);
      graph_all_datas.push_back(all_data_vectors);
      graph_all_rev_deps.push_back(all_rev_dependencies);
    }
  struct Timer__<MPITimer> timer;
  timer.sync_time_start();
  
  for (size_t i = 0; i < graphs.size(); i++)
    {
      //small bit of extra time here
      TaskGraph graph = graphs[i];
      Kernel k(graph.kernel);
      for (long timestep = 0L; timestep < graph.timesteps; timestep += 1)
		{
		  //small bit of extra time here
		  long dset = graph.dependence_set_at_timestep(timestep);
		  if (taskid >= graph.width_at_timestep(timestep) + graph.offset_at_timestep(timestep)) continue;
    	      if (taskid < graph.offset_at_timestep(timestep)) continue;
		  
		  /* Kernel Execute Call */
		  k.execute();
		  
		  int idx = 0;
		  int count = 0;
		  /* Receives */
		  for (std::pair<long, long> interval: graph_all_deps[i][dset])
		    {
		      for (long inter = interval.first; inter <= interval.second; inter++)
				{
				  //extra time here
				  if (inter >= graph.width_at_timestep(timestep - 1) + graph.offset_at_timestep(timestep - 1) 
				      || inter < graph.offset_at_timestep(timestep - 1)) continue;
				  MPI_Request req;
				  int data = 0; //do i need this?
				  graph_all_datas[i][dset][idx] = data;
				  MPI_Irecv(&(graph_all_datas[i][dset][idx]), 1, MPI_INT, (int)inter, 0, MPI_COMM_WORLD, &req);
				  graph_all_requests[i][dset][idx] = req;
				  count++;
				  idx++;
		        }
		    }
		  /* Send */
		  for (std::pair<long, long> interval: graph_all_rev_deps[i][dset])
		    {
		      for (long inter = interval.first; inter <= interval.second; inter++)
				    {
				      if (inter >= graph.width_at_timestep(timestep + 1) + graph.offset_at_timestep(timestep + 1) 
				        || inter < graph.offset_at_timestep(timestep + 1)) continue;
				      MPI_Request req;
				      MPI_Isend(&taskid, 1, MPI_INT, (int)inter, 0, MPI_COMM_WORLD, &req);
				      graph_all_requests[i][dset][idx] = req;
				      idx++;
				    }
		    }
		  
		    MPI_Waitall(idx, graph_all_requests[i][dset], MPI_STATUSES_IGNORE);
       }
   }
  double time_elapsed = timer.sync_time_end();
  if (taskid == MASTER) new_app.report_timing(time_elapsed);
  MPI_Finalize();
}
