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

for t in all_to_all; do
	for w in 20 40 80; do
		for s in 200 400 600 800 1000 1200 1400 1600; do
			./charmrun ./benchmark +p$procs ++nodelist hostfile +setcpuaffinity ++mpiexec -type $t -steps $s -width $w
		done
	done
done
