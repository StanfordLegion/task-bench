#!/bin/bash
#SBATCH --account=m2294
#SBATCH --qos=regular
#SBATCH --constraint=haswell
#SBATCH --exclusive
#SBATCH --time=02:00:00
#SBATCH --mail-type=ALL

total_cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))
cores=$(( $total_cores - 4 ))

function launch_util_0 {
    memoize="-dm:memoize -lg:parallel_replay $cores"
    srun -n $(( $1 * 2 )) -N $1 --cpus-per-task=$(( total_cores * 2 / 2 )) --cpu_bind cores ../../regent${VARIANT+_}$VARIANT/main.shard$(( cores / 2 )) "${@:2}" -ll:cpu $(( cores / 2 )) -ll:io 1 -ll:util 0 -lg:replay_on_cpus $memoize -scratch 64
}

function launch_util_1 {
    memoize="-dm:memoize"
    srun -n $(( $1 * 2 )) -N $1 --cpus-per-task=$(( total_cores * 2 / 2 )) --cpu_bind cores ../../regent${VARIANT+_}$VARIANT/main.shard$(( cores / 2 )) "${@:2}" -ll:cpu $(( cores / 2 )) -ll:io 1 -ll:util 1 -ll:pin_util $memoize -scratch 64
}

function launch_util_2 {
    memoize="-dm:memoize -lg:parallel_replay 2"
    srun -n $(( $1 * 2 )) -N $1 --cpus-per-task=$(( total_cores * 2 / 2 )) --cpu_bind cores ../../regent${VARIANT+_}$VARIANT/main.shard$(( cores / 2 )) "${@:2}" -ll:cpu $(( cores / 2 )) -ll:util 2 $memoize -scratch 64
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
    for rep in 0 1 2 3 4; do
        for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18; do
            if [[ $rep -le $s ]]; then
                local args
                repeat args $3 -kernel compute_bound -iter $(( 1 << (26-s) )) -type $4 -output $5 -radix ${RADIX:-5} -steps ${STEPS:-1000} -width $(( $2 * cores ))
                $1 $2 "${args[@]}"
            fi
        done
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for g in ${NGRAPHS:-1}; do
        for t in ${PATTERN:-stencil_1d}; do
            # sweep launch_util_0 $n $g $t > regent${VARIANT+_}${VARIANT}_util_0_socket_ngraphs_${g}_type_${t}_nodes_${n}.log
            # sweep launch_util_1 $n $g $t > regent${VARIANT+_}${VARIANT}_util_1_socket_ngraphs_${g}_type_${t}_nodes_${n}.log
            sweep launch_util_2 $n $g $t > regent${VARIANT+_}${VARIANT}_util_2_socket_ngraphs_${g}_type_${t}_nodes_${n}.log
        done
    done
done
