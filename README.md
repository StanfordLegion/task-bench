# A Task Benchmark [![Build Status](https://travis-ci.org/StanfordLegion/task-bench.svg?branch=master)](https://travis-ci.org/StanfordLegion/task-bench)

Implementations:
[Charm++](charm++),
[Chapel](chapel),
[Legion](legion),
[MPI](mpi),
[OmpSs](ompss),
[OpenMP](openmp),
[PaRSEC](parsec),
[Realm](realm),
[Regent](regent),
[Spark](spark),
[StarPU](starpu),
[Swift/T](swift),
[TensorFlow](tensorflow)

## Quickstart

To build and run just the Legion implementation, run:

```
git clone https://github.com/StanfordLegion/task-bench.git
cd task-bench
DEFAULT_FEATURES=0 USE_LEGION=1 ./get_deps.sh
./build_all.sh
```

(Remove `DEFAULT_FEATURES=0` to build all the implementations.)

The benchmark supports various dependence types:

```
./legion/task_bench -steps 4 -width 4 -type trivial
./legion/task_bench -steps 4 -width 4 -type no_comm
./legion/task_bench -steps 4 -width 4 -type stencil_1d
./legion/task_bench -steps 4 -width 4 -type fft
./legion/task_bench -steps 9 -width 4 -type dom
./legion/task_bench -steps 4 -width 4 -type all_to_all
```

And different kernels can be plugged in to the execution:

```
./legion/task_bench -kernel compute_bound -iter 1024
./legion/task_bench -kernel memory_bound -scratch 8192 -iter 16
./legion/task_bench -kernel load_imbalance -iter 1024
```

## Instructions for Specific Machines

### Cori

Place the following into `~/.bashrc.ext`:

```
module unload PrgEnv-intel
module load PrgEnv-gnu
module load python/3.6-anaconda-4.4
module load cmake
module load pcre
export CC=cc
export CXX=CC
export MPICXX=CC
```

Then run:

```
git clone https://github.com/StanfordLegion/task-bench.git
cd task-bench
USE_GASNET=1 CONDUIT=aries CHPL_COMM=ugni CHARM_VERSION=gni-crayxc ./get_deps.sh
./build_all.sh
cd scripts/cori
sbatch --nodes 1 emtg_legion.sh
```

### Sherlock

Place the following into `~/.bashrc`:

```
module load cmake/3.8.1
module load gcc/6.3.0
module load openmpi/2.1.1
module load python/3.6.1
module load pcre
```

Then run:

```
git clone https://github.com/StanfordLegion/task-bench.git
cd task-bench
CONDUIT=ibv USE_GASNET=1 CHARM_VERSION=verbs-linux-x86_64 ./get_deps.sh
sbatch ./scripts/sherlock/build.sh
cd scripts/sherlock
sbatch --nodes 1 emtg_legion.sh
```
