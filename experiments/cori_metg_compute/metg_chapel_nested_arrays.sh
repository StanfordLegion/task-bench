#!/bin/bash
#SBATCH --account=m2872
#SBATCH --nodes=2
#SBATCH --qos=debug
#SBATCH --constraint=haswell
#SBATCH --exclusive
#SBATCH --time=00:30:00
#SBATCH --mail-type=ALL

cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))

# Assumes binary build with craype-hugepages16M
module load craype-hugepages16M
export HUGETLB_NO_RESERVE=yes
export CHPL_JE_MALLOC_CONF=purge:decay,lg_chunk:24

function launch {
    # FIXME: The --exclusive flag which Chapel adds internally is causing a non-deterministic startup hang.
    # ../../chapel/task_benchmark -nl $1 -- "${@:2}" -width $(( $1 * cores ))
    srun --nodes=$1 --ntasks=$1 --ntasks-per-node=1 --cpus-per-task=$(( cores * 2 )) --kill-on-bad-exit  ../../chapel/task_benchmark_real -nl $1 -- "${@:2}" -width $(( $1 * cores ))
}

function launch_nested_arrays {
    # FIXME: The --exclusive flag which Chapel adds internally is causing a non-deterministic startup hang.
    # ../../chapel/task_benchmark -nl $1 -- "${@:2}" -width $(( $1 * cores ))
    srun --nodes=$1 --ntasks=$1 --ntasks-per-node=1 --cpus-per-task=$(( cores * 2 )) --kill-on-bad-exit  ../../chapel_nested_arrays/task_benchmark_real -nl $1 -- "${@:2}" -width $(( $1 * cores ))
}

function sweep {
    for rep in 0 1 2 3 4; do
        $1 $2 -kernel empty -type $3 -steps 100000
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for t in stencil_1d; do
        sweep launch $n $t > chapel_type_${t}_nodes_${n}.log
        sweep launch_nested_arrays $n $t > chapel_nested_arrays_type_${t}_nodes_${n}.log
    done
done
