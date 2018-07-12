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
#include "../core/core.h"
#include "../core/timer.h"
#define  MASTER 0

void free_all (std::vector< std::vector< int * > > &vec)
{
  for (std::vector<int *> inner_vec: vec)
    {
      for (int *data: inner_vec)
	free(data);
    }
}

int count_dependencies(std::vector< std::pair<long, long> > &dep)
{
  int total_dependencies = 0;
  for (std::pair<int, int> interval: dep)
    {
      for (int i = interval.first; i <= interval.second; i++)
        total_dependencies++;
    }
  return total_dependencies;
}

void initialize_array(int *arr, int size, int taskid)
{
  for(int i = 0; i < size; i++)
    arr[i] = taskid;
}

void print_array(int *arr, int size)
{
  for(int i = 0; i < size - 1; i++)
    {
      printf("%d, ", arr[i]);
    }
  printf("%d\n", arr[size - 1]);
}

int main (int argc, char *argv[])
{
  int numtasks, taskid;
  MPI_Status status;

  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
  MPI_Comm_rank(MPI_COMM_WORLD, &taskid);

  App new_app(argc, argv);
  std::vector<TaskGraph> graphs = new_app.graphs;
  
  std::vector<std::vector<int *> > graph_send_counts;
  std::vector<std::vector<int *> > graph_recv_counts;
  std::vector<std::vector<int *> > graph_rdispls;
  std::vector<std::vector<int *> > graph_recvs;
  int *sdispls = (int *)malloc (numtasks * sizeof(int));
  initialize_array(sdispls, numtasks, 0);
  int send = taskid;
  
  
  for (size_t i = 0; i < graphs.size(); i++)
    {
      TaskGraph graph = graphs[i];

      std::vector<int *> all_send_counts;
      std::vector<int *> all_recv_counts;
      std::vector<int *> all_rdispls;
      std::vector<int *> all_recvs;
      
      for (long dset = 0L; dset < graph.max_dependence_sets(); dset++)
	     {
	       std::vector< std::pair<long, long> > dependencies = graph.dependencies(dset, taskid);
	       std::vector< std::pair<long, long> > rev_dependencies = graph.reverse_dependencies(dset, taskid);
	       int num_dependencies = count_dependencies(dependencies);
	       int num_rev_dependencies = count_dependencies(rev_dependencies);
  
	       int *recv = (int *)malloc(sizeof(int) * num_dependencies);
  
	       int *sendcounts = (int *)malloc (numtasks * sizeof(int)); 
	       int *recvcounts = (int *)malloc (numtasks * sizeof(int)); 
	       int *rdispls = (int *)malloc (numtasks * sizeof(int)); 

	       initialize_array(sendcounts, numtasks, 0);
	       initialize_array(recvcounts, numtasks, 0);
	       initialize_array(rdispls, numtasks, 0);
            
	       int idx = 0;
	       for (std::pair<long, long> interval: dependencies)
	         {
            for (int i = interval.first; i <= interval.second; i++)
		      {
		      recvcounts[i] = 1;
		      rdispls[i] = idx; //check if displacement in bytes or of array
		      idx++;
		    }
	    }
	  idx = 0;
	  for (std::pair<long, long> interval: rev_dependencies)
	    {
	      for (int i = interval.first; i <= interval.second; i++)
		      {
		        sendcounts[i] = 1;
		  
		        idx++;
		      }
	    }
	  all_send_counts.push_back(sendcounts);
	  all_recv_counts.push_back(recvcounts);
	  all_rdispls.push_back(rdispls);
	  all_recvs.push_back(recv);
	}
  graph_send_counts.push_back(all_send_counts);
  graph_recv_counts.push_back(all_recv_counts);
  graph_rdispls.push_back(all_rdispls);
  graph_recvs.push_back(all_recvs);
}
  MPI_Barrier(MPI_COMM_WORLD);
  Timer::time_start();
  for (size_t i = 0; i < graphs.size(); i++)  
    {
      //extra time here copying graph?
      TaskGraph graph = graphs[i];
      Kernel k(graph.kernel);
      for (long timestep = 0L; timestep < graph.timesteps; timestep++)
	     {
	  
	        //extra time here doing checks and api calls
	       long dset = graph.dependence_set_at_timestep(timestep);
	       if (taskid >= graph.width_at_timestep(timestep) + graph.offset_at_timestep(timestep) || taskid < graph.offset_at_timestep(timestep)) 
	         {
	           /* Shouldn't be in graph, but still needs to call alltoallv, so send and receive counts are all zero */
	           MPI_Alltoallv(&send, sdispls, sdispls, MPI_INT, graph_recvs[i][dset], sdispls, sdispls, MPI_INT, MPI_COMM_WORLD);
	         }
	       else 
	         {
	           k.execute();
	           MPI_Alltoallv(&send, graph_send_counts[i][dset], sdispls, MPI_INT, graph_recvs[i][dset], 
		      	graph_recv_counts[i][dset], graph_rdispls[i][dset], MPI_INT, MPI_COMM_WORLD);
	         }
	     }
    }
  MPI_Barrier(MPI_COMM_WORLD);
  double time_elapsed = Timer::time_end();
  if (taskid == MASTER) new_app.report_timing(time_elapsed);
  
  
  free_all(graph_send_counts);
  free_all(graph_recv_counts);
  free_all(graph_rdispls);
  free_all(graph_recvs);
  free(sdispls);
  MPI_Finalize();
}
