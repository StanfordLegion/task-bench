#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>
#include "core.h"
#define  MASTER 0
#define NUM_ITERATIONS 3

int main (int argc, char *argv[])
{
  int   numtasks, taskid, len;
  char hostname[MPI_MAX_PROCESSOR_NAME];
  MPI_Status status;

  long dset = 0L;
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
  MPI_Comm_rank(MPI_COMM_WORLD,&taskid);
  MPI_Get_processor_name(hostname, &len);
	
  App new_app(argc, argv);
  TaskGraph graph = new_app.graphs.front();

  for (long dset = 0L; dset < NUM_ITERATIONS; dset += 1)
    {
      /* Kernel Execute Call */
      graph.kernel.execute();

      /* Sends */
      std::vector<std::pair<long, long> > rev_dependencies = graph.reverse_dependencies(dset, taskid);
      //std::vector<int> sent_data;

      for (std::pair<long, long> interval: rev_dependencies)
        {
          for (long i = interval.first; i <= interval.second; i++)
            {
              MPI_Send(&taskid, 1, MPI_INT, (int)i, 0, MPI_COMM_WORLD);
              //sent_data.push_back(i);
            }
        }
				
			/* Receives */
      std::vector<std::pair<long, long> > dependencies = graph.dependencies(dset, taskid);
      //std::vector<int> received_data;
      for (std::pair<long, long> interval: dependencies)
        {
          for (long i = interval.first; i <= interval.second; i++)
            {
              int data;
              MPI_Recv(&data, 1, MPI_INT, (int)i, 0, MPI_COMM_WORLD, &status);
              //received_data.push_back(data);
            }
        }
				
	MPI_Finalize();
}
