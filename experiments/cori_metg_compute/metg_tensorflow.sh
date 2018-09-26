#!/bin/bash
#SBATCH --account=m2872
#SBATCH --qos=regular
#SBATCH --constraint=haswell
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))

source ../../deps/tensorflow/env.sh

export LD_LIBRARY_PATH="$PWD"/../../core:"$PWD"/../../tensorflow/ops:"$LD_LIBRARY_PATH"

function launch {
    pushd ../../tensorflow
    srun -n $1 -N $1 --cpus-per-task=$cores --cpu_bind none python task_bench.py "${@:2}" -width $(( $1 * cores ))
    popd
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
    for t in stencil_1d; do
        sweep launch $n $t > tensorflow_type_${t}_nodes_${n}.log
    done
done
