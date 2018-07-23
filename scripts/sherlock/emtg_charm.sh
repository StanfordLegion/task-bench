#!/bin/bash
#SBATCH --partition=aaiken
#SBATCH --ntasks-per-node=20
#SBATCH --nodes=4
#SBATCH --time=01:00:00

srun hostname | sort > nodefile
echo group main > hostfile
while read node; do
 echo host $node >> hostfile
done < nodefile

procs=`cat nodefile | wc -l`

for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15; do
	./charmrun ./benchmark +p$procs ++nodelist hostfile +setcpuaffinity ++mpiexec -kernel busy_wait -iter $(( 1 << (24-s) )) -type stencil_1d -steps 800 -width 80
done
