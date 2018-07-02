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

  MPI_Group world_group;
  MPI_Comm_group(MPI_COMM_WORLD, &world_group);

  App new_app(argc, argv);
  std::vector<TaskGraph> graphs = new_app.graphs;

  /* Data to scatter */
  int num_sent = (taskid != 0 && taskid != numtasks - 1) ? 3 : 2;
  int data_to_send = taskid;

  /* Data to receive from scatter */
  int data_to_receive1 = -1;
  int data_to_receive2 = -1;
  int data_to_receive3 = taskid;
  /* Receive Scatter Comm */
  int *first_ranks = NULL;
  MPI_Group first_group;
  MPI_Comm first_comm;
  int first_rank;
  if (taskid != 0)
    {
      int num_in_group = (taskid == 1) ? 2 : 3;
      first_ranks = (int *)malloc(sizeof(int) * num_in_group); //check to make sure not null                                                                                     
      if (num_in_group == 3)
        {
          first_ranks[0] = taskid - 2;
          first_ranks[1] = taskid - 1;
          first_ranks[2] = taskid;
        }
      else
        {
          first_ranks[0] = taskid - 1;
          first_ranks[1] = taskid;
        }
      MPI_Group_incl(world_group, num_in_group, first_ranks, &first_group);

      MPI_Comm_create_group(MPI_COMM_WORLD, first_group, 0, &first_comm);
      MPI_Comm_rank(first_comm, &first_rank);
    }

  /* Send Scatter Comm */
  int *second_ranks = (int *)malloc(sizeof(int) * num_sent);
  int second_rank;
  if (taskid == 0)
    {
      second_ranks[0] = 0;
      second_ranks[1] = 1;
    }
  else if (taskid == numtasks - 1)
    {
      second_ranks[0] = numtasks - 2;
      second_ranks[1] = numtasks - 1;
    }
  else
    {
      second_ranks[0] = taskid - 1;
      second_ranks[1] = taskid;
      second_ranks[2] = taskid + 1;
    }
     MPI_Group second_group;
  MPI_Group_incl(world_group, num_sent, second_ranks, &second_group);

  MPI_Comm second_comm;
  MPI_Comm_create_group(MPI_COMM_WORLD, second_group, 0, &second_comm);
  MPI_Comm_rank(second_comm, &second_rank);


  /* Second Receive Scatter Comm */
  /* TODO: Consider decomposing */
  int *third_ranks;
  int third_rank;
  MPI_Group third_group;
  MPI_Comm third_comm;
  if (taskid != numtasks - 1)
    {
      int num_in_group = (taskid == numtasks - 2) ? 2 : 3;
      third_ranks = (int *)malloc(sizeof(int) * num_in_group);

      third_ranks[0] = taskid;
      third_ranks[1] = taskid + 1;
      if (num_in_group == 3) third_ranks[2] = taskid + 2;
      MPI_Group_incl(world_group, num_in_group, third_ranks, &third_group);

      MPI_Comm_create_group(MPI_COMM_WORLD, third_group, 0, &third_comm);
      MPI_Comm_rank(third_comm, &third_rank);
    }

  //TIMER START
  for (TaskGraph graph: graphs)
    {                                                                                                                                                        
      for (long timestep = 0L; timestep < graph.timesteps; timestep++)
        {
          graph.kernel.execute();

          MPI_Bcast(&data_to_send, 1, MPI_INT, second_rank, second_comm); /* Send to comm */
          if (taskid != MASTER) MPI_Bcast(&data_to_receive1, 1, MPI_INT, first_rank - 1, first_comm); /* Receive from left neighbor */
          if (taskid != numtasks - 1) MPI_Bcast(&data_to_receive2, 1, MPI_INT, 1, third_comm); /* Receive from right neighbor */
        }                                                                                                                                                                
    }
    //Timer end and record

  /* Free all memory */
  MPI_Group_free(&world_group);
  if (taskid != 0)
    {
      MPI_Group_free(&first_group);
      MPI_Comm_free(&first_comm);
    }
  MPI_Group_free(&second_group);
  MPI_Comm_free(&second_comm);
  if (taskid != numtasks - 1)
    {
      MPI_Group_free(&third_group);
      MPI_Comm_free(&third_comm);
    }
  MPI_Finalize();
}
