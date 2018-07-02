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

void initialize_array(int *arr, int size)
{
  for(int i = 0; i < size; i++)
    arr[i] = size - i;
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

  int *send = (int *)malloc(sizeof(int) * numtasks);
  initialize_array(send, numtasks);
  int *recv = (int *)malloc(sizeof(int) * numtasks);

  //time start                                                                                                                                                                   
  for (TaskGraph graph: graphs)
    {
      for (long timesteps = 0L; timesteps < graph.timesteps; timesteps++)
        {
          MPI_Alltoall(send, 1, MPI_INT, recv, 1, MPI_INT, MPI_COMM_WORLD);
          printf("For %d: ", taskid);
          print_array(recv, numtasks);
        }
    }
  //time stop                                                                                                                                                                    
  MPI_Finalize();
}
