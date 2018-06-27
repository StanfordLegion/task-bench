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
