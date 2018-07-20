#!/bin/bash
#SBATCH --partition=aaiken
#SBATCH --nodes=4
#SBATCH --cpus-per-task=20
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

function launch {
    srun -n $1 -N $1 --cpu_bind none ../../parsec/main "${@:2}" -width 20 -c 20
}

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15; do
        $1 $2 -kernel busy_wait -iter $(( 1 << (24-s) )) -type stencil_1d -steps 800
    done
}

for n in 4 2 1; do
    sweep launch $n > parsec_nodes_$n.log
done
