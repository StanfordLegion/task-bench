#!/bin/bash
#SBATCH --account=m2872
#SBATCH --qos=regular
#SBATCH --constraint=haswell
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

source ../../deps/swift/env.sh

total_cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))
cores=$(( $total_cores - 1 ))

export TURBINE_LAUNCH_OPTIONS="--cpu_bind=cores"

function launch {
    pushd ../../swift
    turbine -n $(( $1 * total_cores )) benchmark.tic "${@:2}" -width $(( $1 * cores ))
    popd
}

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13; do
        for rep in 0 1 2 3 4; do
            if [[ $rep -le $s ]]; then
                $1 $2 -kernel memory_bound -iter $(( 1 << (14-s) )) -scratch $((1024*1024*8)) -sample 1024 -type $3 -steps 1000
            fi
        done
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for t in stencil_1d; do
        sweep launch $n $t > swift_type_${t}_nodes_${n}.log
    done
done
