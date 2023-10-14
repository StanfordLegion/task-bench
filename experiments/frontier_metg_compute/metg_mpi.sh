#!/bin/bash
#SBATCH --account=CHM137
#SBATCH --partition=batch
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

cores=56

function launch {
    srun -n $(( $1 * cores )) -N $1 --ntasks-per-node=$cores --cpus-per-task=1 --cpu_bind cores ../../mpi/$VARIANT "${@:2}"
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
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21; do
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
            sweep launch $n $g $t > mpi_${VARIANT}_ngraphs_${g}_type_${t}_nodes_${n}.log
        done
    done
done
