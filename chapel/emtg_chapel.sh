#!/bin/bash
#SBATCH --partition=aaiken
#SBATCH --cpus-per-task=20
#SBATCH --exclusive
#SBATCH --time=02:30:00
#SBATCH --mail-type=ALL

function launch {
    # srun -n $1 -N $1 --cpu_bind none ../../parsec/main "${@:2}" -width $(( 20 * $1 )) -c 20 -p 1
    LD_LIBRARY_PATH=$LD_LIBRARY_PATH:. ./task_benchmark -nl $1 "${@:2}" -width $(( 20 * $1 ))
}

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18; do
        for rep in 0 1 2; do
            $1 $2 -timesteps 1000 -iter $(( 1 << (24-s) )) -type $3  -kernel busy_wait
        done
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for t in stencil_1d; do
        sweep launch $n $t > chapel_type_${t}_nodes_${n}.log
    done
done