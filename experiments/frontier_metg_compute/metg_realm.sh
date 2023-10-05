#!/bin/bash
#SBATCH --account=CHM137
#SBATCH --partition=batch
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

total_cores=56
cores=$(( $total_cores - 2 ))

function launch {
    srun_flags=
    if (( $1 == 1 )); then
        srun_flags="--network=single_node_vni"
    fi
    srun -n $1 -N $1 --cpus-per-task=$total_cores --cpu_bind none $srun_flags ../../realm${VARIANT+_}$VARIANT/task_bench "${@:2}" -ll:cpu $cores -field 6 -ll:util 0 -ll:rsize 512
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
            sweep launch $n $g $t > realm${VARIANT+_}${VARIANT}_ngraphs_${g}_type_${t}_nodes_${n}.log
        done
    done
done
