#!/bin/bash
#SBATCH --account=m2872
#SBATCH --qos=regular
#SBATCH --constraint=haswell
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

total_cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))
cores=$(( $total_cores - 2 ))

function launch_util_0 {
    memoize=
    if [[ $1 -le 1 ]]; then
        memoize="-dm:memoize -lg:parallel_replay $cores"
    fi
    srun -n $1 -N $1 --cpus-per-task=$total_cores --cpu_bind none ../../legion/task_bench "${@:2}" -width $(( $1 * cores )) -fields 2 -ll:cpu $cores -ll:util 0 $memoize
}

function launch_util_1 {
    memoize=
    if [[ $1 -le 1 ]]; then
        memoize="-dm:memoize"
    fi
    srun -n $1 -N $1 --cpus-per-task=$total_cores --cpu_bind none ../../legion/task_bench "${@:2}" -width $(( $1 * cores )) -fields 2 -ll:cpu $cores -ll:util 1 -ll:pin_util $memoize
}

function launch_util_2 {
    memoize=
    if [[ $1 -le 1 ]]; then
        memoize="-dm:memoize"
    fi
    srun -n $1 -N $1 --cpus-per-task=$total_cores --cpu_bind none ../../legion/task_bench "${@:2}" -width $(( $1 * cores )) -fields 2 -ll:cpu $cores -ll:util 2 $memoize
}

function sweep {
    for s in 0 1 2 3 4; do
        for rep in 0 1 2 3 4; do
            if [[ $rep -le $s ]]; then
                $1 $2 -kernel memory_bound -iter $(( 1 << (5-s) )) -scratch $((1024*1024*16)) -type $3 -steps 1000
            fi
        done
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for t in stencil_1d; do
        sweep launch_util_0 $n $t > legion_util_0_type_${t}_nodes_${n}.log
        # sweep launch_util_1 $n $t > legion_util_1_type_${t}_nodes_${n}.log
        # sweep launch_util_2 $n $t > legion_util_2_type_${t}_nodes_${n}.log
    done
done
