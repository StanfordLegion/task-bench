#!/bin/bash
#SBATCH -C haswell
#SBATCH -q debug
#SBATCH -N 1
#SBATCH --cpus-per-task=20
#SBATCH --exclusive
#SBATCH -t 00:30:00
#SBATCH --mail-type=ALL

export LD_LIBRARY_PATH="../../../core:$LD_LIBRARY_PATH"

function launch {
    srun -n $1 -N $1 python task_bench_multiple_cores.py "${@:2}" -width $(( 20 * $1 ))
}

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15; do
        $1 $2 -kernel busy_wait -iter $(( 1 << (24-s) )) -type $3 -steps 1000
    done
}

for n in 1; do
    for t in stencil_1d; do
        sweep launch $n $t > tensorflow_type_${t}_nodes_${n}.log
    done
done
