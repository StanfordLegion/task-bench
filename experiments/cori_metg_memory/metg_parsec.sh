#!/bin/bash
#SBATCH --account=m2294
#SBATCH --qos=regular
#SBATCH --constraint=haswell
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

module unload PrgEnv-intel
module load PrgEnv-gnu
#module load openmpi

cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))

function launch {
    srun -n $1 -N $1 --cpus-per-task=$cores --cpu_bind none ../../parsec/main "${@:2}" -width $(( $1 * cores )) -field 2 -c $cores -p 1 -S $cores
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
        sweep launch $n $t > parsec_type_${t}_nodes_${n}.log
    done
done
