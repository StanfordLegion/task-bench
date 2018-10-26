#!/bin/bash
#SBATCH --nodes=1
#SBATCH --account=m2872
#SBATCH --qos=regular
#SBATCH --constraint=haswell
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

total_cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))
cores=$(( $total_cores - 2 ))

function launch {
    srun -n $1 -N $1 --cpus-per-task=$total_cores --cpu_bind none ../../realm.$VARIANT/task_bench "${@:2}" -width $(( $1 * cores )) -ll:cpu $cores -ll:util 0
}

function sweep {
    for s in 2 4 6 8 10 12 14 16 18; do
        for rep in 0 1 2 3 4; do
            $1 $2 -type $3 -steps $(( 1 << s ))
        done
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for t in $PATTERN; do
        sweep launch $n $t > realm_${VARIANT}_type_${t}_nodes_${n}.log
    done
done
