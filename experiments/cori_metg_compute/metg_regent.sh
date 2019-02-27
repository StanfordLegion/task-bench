#!/bin/bash
#SBATCH --account=m2294
#SBATCH --qos=regular
#SBATCH --constraint=haswell
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

total_cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))
cores=$(( $total_cores - 2 ))

function launch_util_0 {
    memoize="-dm:memoize -lg:parallel_replay $cores"
    srun -n $1 -N $1 --cpus-per-task=$total_cores --cpu_bind none ../../regent${VARIANT+.}$VARIANT/main.shard30 "${@:2}" -width $(( $1 * cores )) -ll:cpu $cores -ll:io 1 -ll:util 0 -lg:replay_on_cpus $memoize -scratch 64
}

function launch_util_1 {
    memoize="-dm:memoize"
    srun -n $1 -N $1 --cpus-per-task=$total_cores --cpu_bind none ../../regent${VARIANT+.}$VARIANT/main.shard30 "${@:2}" -width $(( $1 * cores )) -ll:cpu $cores -ll:io 1 -ll:util 1 -ll:pin_util $memoize -scratch 64
}

function launch_util_2 {
    memoize="-dm:memoize"
    srun -n $1 -N $1 --cpus-per-task=$total_cores --cpu_bind none ../../regent${VARIANT+.}$VARIANT/main.shard30 "${@:2}" -width $(( $1 * cores )) -ll:cpu $cores -ll:util 2 $memoize -scratch 64
}

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18; do
        for rep in 0 1 2 3 4; do
            if [[ $rep -le $s ]]; then
                $1 $2 -kernel compute_bound -iter $(( 1 << (26-s) )) -type $3 -steps 1000
            fi
        done
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for t in ${PATTERN:-stencil_1d}; do
        sweep launch_util_0 $n $t > regent${VARIANT+.}${VARIANT}_util_0_type_${t}_nodes_${n}.log
        # sweep launch_util_1 $n $t > regent${VARIANT+.}${VARIANT}_util_1_type_${t}_nodes_${n}.log
        # sweep launch_util_2 $n $t > regent${VARIANT+.}${VARIANT}_util_2_type_${t}_nodes_${n}.log
    done
done
