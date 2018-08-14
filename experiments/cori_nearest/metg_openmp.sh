#!/bin/bash
#SBATCH --account=m2872
#SBATCH --qos=regular
#SBATCH --constraint=haswell
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

module unload PrgEnv-intel
module load PrgEnv-gnu

total_cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))
cores=$(( $total_cores - 1 ))

function launch {
    srun -n $1 -N $1 --cpus-per-task=$total_cores --cpu_bind none ../../openmp/main "${@:2}" -width $(( $1 * cores )) -worker $total_cores -field 2
}

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18; do
        for rep in 0 1 2 3 4; do
            if [[ $rep -le $s ]]; then
                $1 $2 -kernel busy_wait -iter $(( 1 << (24-s) )) -type $3 -radix $4 -steps 1000
            fi
        done
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for t in nearest; do
        for r in 0 1 2 3 4 5 6 7 8 9; do
            sweep launch $n $t $r > openmp_type_${t}_radix_${r}_nodes_${n}.log
        done
    done
done
