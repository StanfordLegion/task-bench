# Experimental Configuration

**Please contact the authors before publishing any results obtained
with Task Bench.**

Corresponding authors:

  * Elliott Slaughter <slaughter@cs.stanford.edu>
  * Wei Wu <wwu@lanl.gov>

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
cd experiment/cori_metg_compute
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
