#!/bin/bash
#SBATCH --account=m2294
#SBATCH --qos=regular
#SBATCH --constraint=haswell
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))

function launch_util_0 {
    total_cores_per_rank=$2
    cores_per_rank=$(( total_cores_per_rank - 1 ))
    ranks_per_node=$(( cores / total_cores_per_rank ))

    memoize="-dm:memoize -lg:parallel_replay $cores_per_rank"
    srun -n $(( $1 * ranks_per_node )) -N $1 --cpus-per-task=$(( total_cores_per_rank * 2 )) --cpu_bind cores ../../regent${VARIANT+_}$VARIANT/main.shard$cores_per_rank "${@:3}" -ll:cpu $cores_per_rank -ll:io 1 -ll:util 0 -lg:replay_on_cpus $memoize -scratch 64
}

function launch_util_1 {
    total_cores_per_rank=$2
    cores_per_rank=$(( total_cores_per_rank - 1 ))
    ranks_per_node=$(( cores / total_cores_per_rank ))

    memoize="-dm:memoize"
    srun -n $(( $1 * ranks_per_node )) -N $1 --cpus-per-task=$(( total_cores_per_rank * 2 )) --cpu_bind cores ../../regent${VARIANT+_}$VARIANT/main.shard$cores_per_rank "${@:3}" -ll:cpu $cores_per_rank -ll:io 1 -ll:util 1 $memoize -scratch 64
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
    total_cores_per_rank=$5
    ranks_per_node=$(( cores / total_cores_per_rank ))

    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18; do
        for rep in 0 1 2 3 4; do
            if [[ $rep -le $s ]]; then
                local args
                repeat args $3 -kernel compute_bound -iter $(( 1 << (26-s) )) -type $4 -radix ${RADIX:-5} -steps ${STEPS:-1000} -width $(( $2 * (cores - ranks_per_node) ))
                $1 $2 $5 "${args[@]}"
            fi
        done
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for g in ${NGRAPHS:-1}; do
        for t in ${PATTERN:-stencil_1d}; do
            for c in ${CORES_PER_RANK:-1}; do
                sweep launch_util_0 $n $g $t $c > regent${VARIANT+_}${VARIANT}_util_0_ngraphs_${g}_type_${t}_coresperrank_$(( c - 1 ))_nodes_${n}.log
                # sweep launch_util_1 $n $g $t $c > regent${VARIANT+_}${VARIANT_}_util_1_ngraphs_${g}_type_${t}_coresperrank_$(( c - 1 ))_nodes_${n}.log
            done
        done
    done
done
