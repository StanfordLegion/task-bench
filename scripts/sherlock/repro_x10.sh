#!/bin/bash
#SBATCH --nodes 2
#SBATCH --partition=aaiken
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

cores=$(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1)

set -x

srun -n $(( cores * 2 )) -N 2 ../../x10/main -kernel busy_wait -iter 16 -type stencil_1d -steps 1000 -width $(( cores * 2 ))
