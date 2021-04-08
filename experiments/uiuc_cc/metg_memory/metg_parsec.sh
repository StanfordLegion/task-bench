#!/bin/bash
#SBATCH --partition=secondary-Eth
#SBATCH --exclusive
#SBATCH --time=02:00:00
#SBATCH --mail-type=ALL

cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))

function launch {
    srun -n $1 -N $1 --cpus-per-task=$(( cores * 2 )) --cpu_bind none ../../../parsec/main_buffer "${@:2}" -c $cores -p 1 -S $cores
}

function repeat {
    local result=$1
    local n=$2
    result=()
    for i in $(seq 1 $n); do
        result+=("${@:3}")
        if (( i < n )); then
            result+=("-and")
        fi
    done

    eval "$1=\"${result[*]}\""
}

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16; do
        for rep in 0 1 2 3 4; do
            if [[ $rep -le $s ]]; then
                srun -n $2 -N $2 --cpus-per-task=$(( cores * 2 )) --cpu_bind none ../../../parsec/main -kernel memory_bound -iter $(( 1 << (16-s) )) -scratch $(( 16 * 1024 * 1024 )) -sample 8192 -type $4 -radix ${RADIX:-5} -steps ${STEPS:-8192} -width $(( $2 * cores )) -field 2 -c $cores -p 1 -S $cores
            fi
        done
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for g in ${NGRAPHS:-1}; do
        for t in ${PATTERN:-stencil_1d}; do
            sweep launch $n $g $t > parsec_ngraphs_${g}_type_${t}_nodes_${n}.log
        done
    done
done
