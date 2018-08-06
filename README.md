# A Task Benchmark [![Build Status](https://travis-ci.org/StanfordLegion/task-bench.svg?branch=master)](https://travis-ci.org/StanfordLegion/task-bench)

## Quickstart

### Local

```
git clone https://github.com/StanfordLegion/task-bench.git
cd task-bench
./get_deps.sh
./build_all.sh
./legion/task_bench -steps 9 -type dom

./task_bench -steps 4 -type fft -width 4 -kernel compute_bound -max_power 200 -iter 20
./task_bench -steps 4 -type fft -width 4 -kernel memory_bound -scratch 8192 -jump 256 -iter 20
./task_bench -steps 4 -type fft -width 4 -kernel load_imbalance -max_power 200 -iter 20
./task_bench -steps 4 -type fft -width 4 -kernel compute_dgemm -scratch $((3*256*256*8)) -iter 10
```

### Sherlock

Place the following into `~/.bashrc`:

```
module load cmake/3.8.1
module load gcc/6.3.0
module load openmpi/2.1.1
module load python/3.6.1
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

### Cori

Place the following into `~/.bashrc`:

```
module unload PrgEnv-intel
module load PrgEnv-gnu
module load craype-hugepages8M
module load python/3.6-anaconda-4.4
export CC=cc
export CXX=CC
export MPICXX=CC
```

Then run:

```
git clone https://github.com/StanfordLegion/task-bench.git
cd task-bench
CONDUIT=aries USE_GASNET=1 CHARM_VERSION=gni-crayxc ./get_deps.sh
DEBUG=0 ./build_all.sh
cd scripts/cori
sbatch --nodes 1 emtg_legion.sh
```
