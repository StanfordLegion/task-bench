#!/bin/bash
#SBATCH --nodes=2 
#SBATCH --partition=aaiken
#SBATCH --cpus-per-task=10 
#SBATCH --ntasks-per-node=2
#SBATCH --exclusive
#SBATCH --time=04:00:00

if [[ ! -d deps ]]; then
    echo "The directory deps does not exist."
    echo "Please run task-bench/get_deps.sh and try again."
    exit 1
fi
# don't assume running in taskbench/scripts/sherlock just in case
source $SPARK_PROJ_DIR/../deps/env.sh
export LD_LIBRARY_PATH=$SPARK_SWIG_DIR:$LD_LIBRARY_PATH
## --------------------------------------
## 0. Preparation
## --------------------------------------

# identify the Spark cluster with the Slurm jobid
export SPARK_IDENT_STRING=$SLURM_JOBID

# prepare directories
export SPARK_WORKER_DIR=${SPARK_WORKER_DIR:-$HOME/.spark/worker}
export SPARK_LOG_DIR=${SPARK_LOG_DIR:-$HOME/.spark/logs}
export SPARK_LOCAL_DIRS=${SPARK_LOCAL_DIRS:-/tmp/spark}
mkdir -p $SPARK_LOG_DIR $SPARK_WORKER_DIR

## --------------------------------------
## 1. Start the Spark cluster master
## --------------------------------------
set -x 
$SPARK_SRC_DIR/sbin/start-master.sh
sleep 5 #changed to hopefully prevent issue with empty master URL
MASTER_URL=$(grep -Po '(?=spark://).*' \
                    $SPARK_LOG_DIR/spark-${SPARK_IDENT_STRING}-org.*master*.out)
echo "master url:"
echo $MASTER_URL

## --------------------------------------
## 2. Start the Spark cluster workers
## --------------------------------------

# get the resource details from the Slurm job
export SPARK_WORKER_CORES=${SLURM_CPUS_PER_TASK:-1}
export SPARK_MEM=$(( ${SLURM_MEM_PER_CPU:-4096} * ${SLURM_CPUS_PER_TASK:-1} ))M
export SPARK_DAEMON_MEMORY=$SPARK_MEM
export SPARK_WORKER_MEMORY=$SPARK_MEM
export SPARK_EXECUTOR_MEMORY=$SPARK_MEM

# start the workers on each non-master node allocated to the job
export SPARK_NO_DAEMONIZE=1
nWorkerNodes=$((SLURM_JOB_NUM_NODES - 1))
srun  -r1 --nodes=$nWorkerNodes --ntasks=$((2 * $nWorkerNodes)) --output=$SPARK_LOG_DIR/spark-%j-workers.out --label \
    $SPARK_SRC_DIR/sbin/start-slave.sh ${MASTER_URL} & 

function sweep {
    #for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18; do 
       $SPARK_SRC_DIR/bin/spark-submit --class "Main" \
                    --master ${MASTER_URL} \
                    --total-executor-cores $(((SLURM_NTASKS - 2) * SLURM_CPUS_PER_TASK)) \
                    --files $SPARK_SWIG_DIR/libcore_c.so \
                    --conf spark.scheduler.listenerbus.eventqueue.capacity=20000 \
                    ../../spark/target/scala-2.11/Taskbench-assembly-1.0.jar -kernel busy_wait -type $1
    #done
}
#-iter $(( 1 << (26-s) )) -type $1 -steps 1000 -width 20
for n in $SLURM_JOB_NUM_NODES; do
    for t in stencil_1d no_comm; do
        realNodeCount=$(($n - 1))
        sweep $t > spark_type_${t}_nodes_${realNodeCount}.log
    done
done

## --------------------------------------
## 4. Clean up
## --------------------------------------

# stop the workers
scancel ${SLURM_JOBID}.0

# stop the master
$SPARK_SRC_DIR/sbin/stop-master.sh

# this should be done at least every few runs on Sherlock to avoid filling up disk space; 
# each run takes ~0.83G even with logging turned off
# (there are also stdout and stderr in the worker directory, but they are smaller and useful for debugging)
rm -r ~/.spark/worker/*/*/*.jar && rm -r ~/.spark/worker/*/*/*.so
#TODO: change # of nodes for multi; add reps if desired (change time limit); remove set -x
