#!/bin/bash
#SBATCH --partition=aaiken
#SBATCH --nodes=2
#SBATCH --cpus-per-task=1
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL


function launch {
    srun -n $1 -N $1 ./TrivialMultinode
}

for n in 2; do
    launch $n > trivial_multinode_nodes_${n}.log
done

