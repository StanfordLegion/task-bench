#!/bin/bash
#SBATCH --partition=secondary-Eth
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

total_cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))
cores=$(( $total_cores - 2 ))

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18; do
        for rep in 0 1 2 3 4; do
            if [[ $rep -le $s ]]; then
		memoize="-dm:memoize -lg:parallel_replay $cores"
		srun -n $2 -N $2 --cpus-per-task=$(( total_cores * 2 )) --cpu_bind none ../../../../legion/task_bench -kernel dist_imbalance -dist cauchy -dist-beta $(( 1 << (26-s-2) )) -iter $(( 1 << (26-s) )) -type $4 -radix ${RADIX:-5} -steps ${STEPS:-1000} -width $(( $2 * cores )) -fields 2 -ll:cpu $cores -ll:util 0 $memoize -nodes $SLURM_JOB_NUM_NODES -output 16
                #$1 $2 "${args[@]}"
            fi
        done
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for g in ${NGRAPHS:-1}; do
        for t in ${PATTERN:-stencil_1d}; do
            sweep launch_util_0 $n $g $t > legion_util_0_ngraphs_${g}_type_${t}_nodes_${n}.log
        done
    done
done

# ./scripts/chart_metg.py -g 1 -n 1 -c 16 experiments/cori_metg_compute/legion_util_0_ngraphs_1_type_stencil_1d_nodes_1.log

