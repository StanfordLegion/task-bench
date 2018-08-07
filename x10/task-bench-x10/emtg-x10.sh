#!/bin/bash
#SBATCH --partition=aaiken
#SBATCH --nodes=4
#SBATCH --cpus-per-task=1
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL


function launch {
    srun -n $(( 20 * $1 )) -N $1 ./a.out "${@:2}" -width $(( 20 * $1 ))
}

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15; do
        $1 $2 -kernel busy_wait -iter $(( 1 << (24-s) )) -type $3 -steps 1000
    done
}

for n in 1 2 4; do
    for t in stencil_1d; do
        sweep launch $n $t > x10_type_${t}_nodes_${n}.log
    done
done
