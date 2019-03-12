#!/bin/bash
#SBATCH --account=m2294
#SBATCH --qos=regular
#SBATCH --constraint=haswell
#SBATCH --exclusive
#SBATCH --time=06:00:00
#SBATCH --mail-type=ALL

cores=$(( $(echo $SLURM_JOB_CPUS_PER_NODE | cut -d'(' -f 1) / 2 ))

source ../../deps/spark/env.sh #no SPARK_PROJ_DIR at this point...assume running in taskbench/scripts/sherlock
export SPARK_PROJ_DIR=$PWD/../../spark
export CORE_DIR=$PWD/../../core

# need core_dir to load libcore.so
export LD_LIBRARY_PATH="$SPARK_PROJ_DIR:$CORE_DIR:$LD_LIBRARY_PATH"

## --------------------------------------
## 0. Preparation
## --------------------------------------

# identify the Spark cluster with the Slurm jobid
export SPARK_IDENT_STRING=$SLURM_JOBID

# prepare directories
export SPARK_WORKER_DIR=${SPARK_WORKER_DIR:-$SCRATCH/spark/worker}
export SPARK_LOG_DIR=${SPARK_LOG_DIR:-$SCRATCH/spark/logs}
export SPARK_LOCAL_DIRS=${SPARK_LOCAL_DIRS:-/tmp/spark}
mkdir -p $SPARK_LOG_DIR $SPARK_WORKER_DIR

## --------------------------------------
## 1. Start the Spark cluster master
## --------------------------------------
set -x 
$SPARK_SRC_DIR/sbin/start-master.sh
sleep 60 #changed to hopefully prevent issue with empty master URL
MASTER_URL=$(grep -Po '(?=spark://).*' \
    $SPARK_LOG_DIR/spark-${SPARK_IDENT_STRING}-org.*master*.out)
echo "master url:"
echo $MASTER_URL

## --------------------------------------
## 2. Start the Spark cluster workers
## --------------------------------------

# get the resource details from the Slurm job
export SPARK_WORKER_CORES=$(( cores / 2 ))
export SPARK_MEM=$(( ${SLURM_MEM_PER_CPU:-4096} * $SPARK_WORKER_CORES ))M
export SPARK_DAEMON_MEMORY=$SPARK_MEM
export SPARK_WORKER_MEMORY=$SPARK_MEM
export SPARK_EXECUTOR_MEMORY=$SPARK_MEM

# start the workers on each non-master node allocated to the job
export SPARK_NO_DAEMONIZE=1
nWorkerNodes=$(( SLURM_JOB_NUM_NODES - 1 ))
srun -r1 -n $(( nWorkerNodes * 2 )) -N $nWorkerNodes --cpus-per-task=$(( cores * 2 / 2 )) --ntasks-per-node=2 --cpu_bind cores --output=$SPARK_LOG_DIR/spark-%j-workers.out --label \
    $SPARK_SRC_DIR/sbin/start-slave.sh ${MASTER_URL} & 

function launch {
    $SPARK_SRC_DIR/bin/spark-submit --class "Main" \
        --master ${MASTER_URL} \
        --total-executor-cores $(( $1 * cores )) \
        --files $SPARK_PROJ_DIR/libcore_c.so \
        --conf "spark.executor.heartbeatInterval=360000" \
        --conf "spark.network.timeout=420000" \
        --conf spark.scheduler.listenerbus.eventqueue.capacity=20000 \
        $SPARK_PROJ_DIR/target/scala-2.11/Taskbench-assembly-1.0.jar \
        "${@:2}"
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
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18; do
        for rep in 0 1 2 3 4; do
            if [[ $rep -le $s ]]; then
                local args
                repeat args $3 -kernel compute_bound -iter $(( 1 << (28-s) )) -type $4 -output $5 -radix ${RADIX:-5} -steps ${STEPS:-1000} -width $(( $2 * cores ))
                $1 $2 "${args[@]}"
            fi
        done
    done
}

for n in $(( SLURM_JOB_NUM_NODES - 1 )); do
    for g in ${NGRAPHS:-1}; do
        for t in ${PATTERN:-stencil_1d}; do
            for comm in ${COMM:-16}; do
                sweep launch $n $g $t $comm > spark_ngraphs_${g}_type_${t}_comm_${comm}_nodes_${n}.log
            done
        done
    done
done

## --------------------------------------
## 4. Clean up
## --------------------------------------

# stop the workers
scancel ${SLURM_JOBID}.0

# stop the master
$SPARK_SRC_DIR/sbin/stop-master.sh
