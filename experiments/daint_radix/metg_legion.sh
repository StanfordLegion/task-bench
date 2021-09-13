#!/bin/bash
#SBATCH --account=d108
#SBATCH --constraint=gpu
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

total_cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))
cores=$(( $total_cores - 3 ))

ulimit -S -c 0 # disable core dumps

function launch {
    memoize="-lg:no_physical_tracing" # "-dm:memoize -lg:parallel_replay 2"
    if [[ $VARIANT = paint ]]; then
        work="-ll:dma 2"
    else
        work="-ll:bgwork 2"
    fi
    srun -n $1 -N $1 --cpus-per-task=$(( total_cores * 2 )) --cpu_bind cores ../../legion${VARIANT+_}$VARIANT/task_bench "${@:2}" -ll:cpu $cores -ll:util 2 -ll:io 1 $work $memoize -lg:window 8192 -fields 2
}

function repeat {
    local -n result=$1
    local n=$2
    result=()
    for i in $(seq 1 $n); do
        result+=("${@:3}")
        if (( i < n )); then
            result+=("-and")
        fi
    done
}

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18; do
        for rep in 0 1 2 3 4; do
            if [[ $rep -le $s ]]; then
                local args
                repeat args $3 -kernel compute_bound -iter $(( 1 << (26-s) )) -type $4 -radix ${RADIX:-5} -steps ${STEPS:-1000} -width $(( $2 * cores ))
                $1 $2 "${args[@]}"
            fi
        done
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for g in ${NGRAPHS:-1}; do
        for t in ${PATTERN:-stencil_1d}; do
            for r in ${RADIX:-5}; do
                sweep launch $n $g $t > legion${VARIANT+_}${VARIANT}_ngraphs_${g}_type_${t}_radix_${r}_nodes_${n}.log
            done
        done
    done
done
