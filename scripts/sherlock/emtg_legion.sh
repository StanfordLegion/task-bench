#!/bin/bash
#SBATCH --partition=aaiken
#SBATCH --ntasks=1
#SBATCH --nodes=1
#SBATCH --cpus-per-task=20
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

(for s in 0 1 2 3 4 5 6 7 8 9 10 11 12; do
     srun --cpu_bind none ./task_bench -kernel busy_wait -iter $(( 1 << (24-s) )) -type stencil_1d -steps 100 -width 18 -fields 2 -ll:cpu 18 -ll:util 0 -dm:memoize -lg:parallel_replay 18
 done) | tee scaling_memoize.txt

grep Elapsed scaling_memoize.txt | cut -d' ' -f 3
