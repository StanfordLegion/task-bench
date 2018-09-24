#!/bin/bash
#SBATCH --account=m2872
#SBATCH --qos=regular
#SBATCH --constraint=haswell
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))

function launch {
    srun -n $(( $1 * cores )) -N $1 --ntasks-per-node=$cores --cpus-per-task=1 --cpu_bind cores ../../mpi/nonblock "${@:2}" -width $(( $1 * cores ))
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
        sweep launch $n $t > mpi_nonblock_type_${t}_nodes_${n}.log
    done
done
