#!/bin/bash
#SBATCH --nodes=1
#SBATCH --partition=aaiken
#SBATCH --cpus-per-task=10 
#SBATCH --ntasks-per-node=2
#SBATCH --exclusive
#SBATCH --time=02:00:00

cores=$SLURM_JOB_CPUS_PER_NODE

## --------------------------------------
## 0. Preparation
## --------------------------------------

# load the Spark module
module load spark

#ADDED (should modify java.library.path): 
#export SPARK_LIBRARY_PATH=/home/users/emarx1/swigPractice/core
export LD_LIBRARY_PATH=/home/users/emarx1/swigPractice/coreNEW:$LD_LIBRARY_PATH 

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

start-master.sh
sleep 2 #changed to hopefully prevent issue with empty master URL
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

# start the workers on each node allocated to the tjob
export SPARK_NO_DAEMONIZE=1
srun  --output=$SPARK_LOG_DIR/spark-%j-workers.out --label \
              start-slave.sh ${MASTER_URL} &

function sweep {
    for s in 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18; do
        spark-submit --class "SimpleApp" \
                    --master ${MASTER_URL} \
                    --total-executor-cores $((SLURM_NTASKS * SLURM_CPUS_PER_TASK)) \
                    --conf "spark.executor.extraJavaOptions=-Djava.library.path=/home/users/emarx1/swigPractice/coreNEW" \
                    target/scala-2.11/SimpleProject-assembly-1.0.jar -kernel busy_wait -iter $(( 1 << (26-s) )) -type $1 -steps 1000 -width 20
    done
}

for n in $SLURM_JOB_NUM_NODES; do
    for t in stencil_1d; do
        sweep $t > spark_type_${t}_nodes_${n}.log
    done
done

## --------------------------------------
## 4. Clean up
## --------------------------------------

# stop the workers
scancel ${SLURM_JOBID}.0

# stop the master
stop-master.sh
