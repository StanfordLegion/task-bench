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

void free_all_comms(std::vector< std::vector<std::vector <std::pair<int, MPI_Comm> > > > graph_all_comms)
{
  for (std::vector<std::vector <std::pair<int, MPI_Comm> > > dset: graph_all_comms)
    {
      for (std::vector <std::pair<int, MPI_Comm> > all_comm: dset)
		{
	  		for (std::pair<int, MPI_Comm> comm: all_comm)
	    		MPI_Comm_free(&comm.second);
		}
    }
}

/* Still causes segfaults */
void free_all_data (std::vector<std::vector<int *> > all_data)
{
  for (std::vector<int *> dset_data: all_data)
    {
      for (int *data: dset_data)
		if (data != NULL) free(data);
    }
}

int main (int argc, char *argv[])
{
  int numtasks, taskid;
  MPI_Status status;

  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
  MPI_Comm_rank(MPI_COMM_WORLD,&taskid);

  MPI_Group world_group;
  MPI_Comm_group(MPI_COMM_WORLD, &world_group);

  App new_app(argc, argv);
  
  /* Preallocated storage needed for all the graphs */
  std::vector<TaskGraph> graphs = new_app.graphs;
  std::vector<std::vector<int *> > graph_data_to_receive;
  std::vector< std::vector<std::vector <std::pair<int, MPI_Comm> > > > graph_all_comms;
  
  /* Loop through all graphs */
  for (size_t graph_num = 0; graph_num < graphs.size(); graph_num++)
    {
      TaskGraph graph = graphs[graph_num];
      
      /* Preallocated storage needed for all dsets in each graph */
      std::vector<int *> dset_data_to_receive;
      std::vector<std::vector <std::pair<int, MPI_Comm> > > dset_all_comms;
      
      /* Loop through all dsets for each graph */
      for (long dset = 0L; dset < graph.max_dependence_sets(); dset++)
		{
		  bool loop = false;
		  bool inner_loop = false;
		  bool seen_self = false;
		  
		  /* Preallocated data for each dset */
		  std::vector<std::pair<int, MPI_Comm> > all_comms;
		  std::vector<std::pair<long, long> > dependencies = graph.dependencies(dset, taskid);
		  int num_dependencies = count_dependencies(dependencies);
		  int *data_to_receive = (int *)malloc(sizeof(int) * num_dependencies);
		  
		  for (std::pair<long, long> interval: dependencies)
		    {
		      /* Special case if the graph involves wrapping to make sure the order of                                                          
			 the "MPI_Comm_create_group" calls do not hang */
		      if (graph.dependence == DependenceType::STENCIL_1D_PERIODIC)
				{
			  		if ((taskid == numtasks - 1) && !loop) {
			    		loop = true;
			    		interval = dependencies[1];
			  		} else if ((taskid == numtasks - 1) && loop) interval = dependencies[0];
				}
		      
		      for (int i = interval.first; i <= interval.second; i++)
				{
			 	 if (i == taskid) seen_self = true;
			  
			  		std::vector< std::pair<long, long> > rev_dependencies = graph.reverse_dependencies(dset, i);
			  		int num_rev_dependencies = count_dependencies(rev_dependencies);
			  
			  		int *recv_ranks = num_rev_dependencies != 0 ? (int *)malloc(sizeof(int) * num_rev_dependencies) : NULL;
			  		
			  		bool inner_seen = false;
			  		int index = 0;
			  		int root_of_recv = -1;
		  
			  		for (std::pair<long, long> inner_interval: rev_dependencies)
			  		  {
			  		    /* Special case if the graph involves wrapping to make sure the order of
						 the "MPI_Comm_create_group" calls do not hang */
			  		    if (graph.dependence == DependenceType::STENCIL_1D_PERIODIC)
						{
						  if (i == numtasks - 1 && !inner_loop) 
						    {
						      inner_loop = true;
						      inner_interval = rev_dependencies[1];
						    }
						  else if (i == numtasks - 1 && inner_loop) inner_interval = rev_dependencies[0];
						}
			    	  for (int inter = inner_interval.first; inter <= inner_interval.second; inter++)
						{
				 		 if (inter == i) 
				   			 {
				    		  inner_seen = true;
				    		  root_of_recv = index;
				   			 }
				 		 recv_ranks[index] = inter;
				 		 index++;
						}
			   		  }
			  /* Forces a task to be in the communicator of its reverse dependencies */
			  		if (!inner_seen)
			   		 {
			      		recv_ranks[index] = i;
			      		root_of_recv = index;
			     		 num_rev_dependencies++;
			    	 }
		      
			  		MPI_Group recv_group;
			  		MPI_Group_incl(world_group, num_rev_dependencies, recv_ranks, &recv_group);
			  		free(recv_ranks); //tentatively
		  	  		
			  		MPI_Comm recv_comm;
			  		MPI_Comm_create_group(MPI_COMM_WORLD, recv_group, 0, &recv_comm);
			  		MPI_Group_free(&recv_group); //tentatively
			  		std::pair<int, MPI_Comm> final_comm = std::make_pair(root_of_recv, recv_comm);
			  		all_comms.push_back(final_comm);	  
				}
		    }
		  /* Forces a task to include itself as a dependency to keep communicators consistent */
		  if (!seen_self)
		    {
		      std::vector< std::pair<long, long> > rev_dependencies = graph.reverse_dependencies(dset, taskid);
		      int num_rev_dependencies = count_dependencies(rev_dependencies);
    	                                                                                 
		      int *recv_ranks = (int *)malloc(sizeof(int) * num_rev_dependencies);
		      int index = 0;
		      int root_of_recv = -1;
		      for (std::pair<long, long> inner_interval: rev_dependencies)
				{
			 	 for (int inter = inner_interval.first; inter <= inner_interval.second; inter++)
			   		{
			      		recv_ranks[index] = inter;
			      		index++;
			    	}
				}
		    	MPI_Group recv_group;
		      	MPI_Comm recv_comm1;
		      	if (num_rev_dependencies != 0)
				  {
			  		recv_ranks[index] = taskid;
			  		num_rev_dependencies++;
			  		root_of_recv = index;
				  }
		     	 MPI_Group_incl(world_group, num_rev_dependencies, recv_ranks, &recv_group);
		      	free(recv_ranks); //tentatively
		      	MPI_Comm_create_group(MPI_COMM_WORLD, recv_group, 0, &recv_comm1);
		      	MPI_Group_free(&recv_group); //tentatively
		 
		      	std::pair<int, MPI_Comm> final_comm = std::make_pair(root_of_recv, recv_comm1);
		      	all_comms.push_back(final_comm);
		    }
		  dset_all_comms.push_back(all_comms);
		  dset_data_to_receive.push_back(data_to_receive);
		}
      graph_all_comms.push_back(dset_all_comms);
      graph_data_to_receive.push_back(dset_data_to_receive);
    }

  struct Timer__<struct MPITimer> timer;
  timer.sync_time_start();

  for (size_t graph_num = 0; graph_num < graphs.size(); graph_num++)
    {
      //extra time copying the graph
      TaskGraph graph = graphs[graph_num];
      Kernel k(graph.kernel);
      for (long timestep = 0L; timestep < graph.timesteps; timestep++)
		{
		  //extra time with api calls
		  long dset = graph.dependence_set_at_timestep(timestep);
      k.execute();
		  
		  for(int i = 0; i < graph_all_comms[graph_num][dset].size(); i++)     
		    {
		      if (taskid >= graph.offset_at_timestep(timestep) 
		      		&& taskid < graph.offset_at_timestep(timestep) + graph.width_at_timestep(timestep) 
			  		&& graph_all_comms[graph_num][dset][i].first != -1)
				{
			  		int data = taskid;
			  		MPI_Bcast(&data, 1, MPI_INT, graph_all_comms[graph_num][dset][i].first, graph_all_comms[graph_num][dset][i].second);
			  		graph_data_to_receive[graph_num][dset][i - 1] = data;
				}
	    	}
		}  
    }
  double time_elapsed = timer.sync_time_end();
  if (taskid == MASTER) new_app.report_timing(time_elapsed);

  /* Free all memory */
  MPI_Group_free(&world_group);
  free_all_comms(graph_all_comms);
  //free_all_data(graph_data_to_receive); //still need to do, some are null
  MPI_Finalize();
}
