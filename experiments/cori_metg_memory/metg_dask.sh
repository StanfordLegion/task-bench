#!/bin/bash
#SBATCH --account=m2294
#SBATCH --qos=regular
#SBATCH --constraint=haswell
#SBATCH --exclusive
#SBATCH --time=06:00:00
#SBATCH --mail-type=ALL

cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))

root_dir="$(dirname "$(dirname "$PWD")")"

source "$root_dir"/deps/dask/env.sh

export LD_LIBRARY_PATH="$root_dir"/core:"$LD_LIBRARY_PATH"
export PYTHONPATH="$root_dir"/dask:"$PYTHONPATH"

SCHEDULER_HOST=$(scontrol show hostname | head -n1)
SCHEDULER_PORT=8786
SCHEDULER_URL=$SCHEDULER_HOST:$SCHEDULER_PORT

mkdir -p $SCRATCH/dask_${SLURM_JOBID}
pushd $SCRATCH/dask_${SLURM_JOBID}

NUM_WORKERS=$(( SLURM_JOB_NUM_NODES - 1 ))
srun -n 1 -N 1 --cpu_bind none dask-scheduler --port $SCHEDULER_PORT &
srun -r 1 -n $NUM_WORKERS -N $NUM_WORKERS --cpu_bind none dask-worker --nthreads $cores --nprocs 1 $SCHEDULER_URL &

popd

function launch {
    python "$root_dir"/dask/task_bench_direct.py "${@:2}" -scheduler $SCHEDULER_URL -expect-workers $NUM_WORKERS -skip-graph-validation
}

function repeat {
    local -n result=$1
    local n=$2
    result=()
    for i in $(seq 1 $n); do
        result+=("${@:3}")
        if (( i < n )); then
            result+=("-and")
        fi
    done
}

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16; do
        for rep in 0 1 2 3 4; do
            if [[ $rep -le $s ]]; then
                local args
                repeat args $3 -kernel memory_bound -iter $(( 1 << (20-s) )) -scratch $(( 16 * 1024 * 1024 )) -sample 8192 -type $4 -radix ${RADIX:-5} -steps ${STEPS:-8192} -width $(( $2 * cores ))
                $1 $2 "${args[@]}"
            fi
        done
    done
}

for n in $(( SLURM_JOB_NUM_NODES - 1 )); do
    for g in ${NGRAPHS:-1}; do
        for t in ${PATTERN:-stencil_1d}; do
            sweep launch $n $g $t > dask_ngraphs_${g}_type_${t}_nodes_${n}.log
        done
    done
done

scancel ${SLURM_JOBID}.1
scancel ${SLURM_JOBID}.0
