#!/bin/bash
#SBATCH --partition=aaiken
#SBATCH --ntasks=1
#SBATCH --nodes=1
#SBATCH --cpus-per-task=20
#SBATCH --exclusive
#SBATCH --time=01:00:00
#SBATCH --mail-type=ALL

for flags in \
    "-ll:cpu 10 -lg:no_physical_tracing" \
    "-ll:cpu 10 -ll:util 1 -dm:memoize -lg:parallel_replay 1" \
    "-ll:cpu 10 -ll:util 1 -ll:pin_util -dm:memoize -lg:parallel_replay 1" \
    "-ll:cpu 10 -dm:memoize -ll:util 0 -lg:parallel_replay 10"; do
    for steps in 200 400 600 800 1000 1200 1400 1600; do
	outfile="legion_run_steps_${steps}_flags_${flags}.log"
	if [[ ! -e $outfile ]]; then
	    srun --cpu_bind none --output "$outfile" ../../legion/task_bench -type stencil_1d -width 20 -steps $steps -fields 2 $flags
	fi
    done

    find . -name "legion_run_steps_*_flags_${flags}.log" -print0 | sort -z -t_ -k4 -n | xargs -0 grep --no-filename 'Elapsed Time' | cut -d' ' -f 3 > "legion_summary_flags_${flags}.log"
done
