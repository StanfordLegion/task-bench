# Experimental Configuration

**Please contact the authors before publishing any results obtained
with Task Bench.**

Corresponding authors:

  * Elliott Slaughter <slaughter@cs.stanford.edu>
  * Wei Wu <wwu@lanl.gov>

## Instructions for Specific Machines

### Cori

```
git clone https://github.com/StanfordLegion/task-bench.git
cd task-bench
USE_GASNET=1 CONDUIT=aries CHPL_COMM=ugni CHARM_VERSION=gni-crayxc ./get_deps.sh
THREADS=16 ./build_all.sh
cd experiment/cori_metg_compute
sbatch --nodes 1 metg_legion.sh
```

### Piz Daint

```
git clone https://github.com/StanfordLegion/task-bench.git
cd task-bench
USE_GASNET=1 CONDUIT=aries CHPL_COMM=ugni CHARM_VERSION=gni-crayxc ./get_deps.sh
./build_all.sh
cd experiment/daint_metg_compute
sbatch --nodes 1 metg_legion.sh
```

### Summit

Note: This configuration has not been tested for performance and has
been provided for informational purposes only.

```
git clone https://github.com/StanfordLegion/task-bench.git
cd task-bench
USE_GASNET=1 CONDUIT=ibv CHARM_VERSION="pamilrts-linux-ppc64le gcc" ./get_deps.sh
./build_all.sh
cd experiment/summit_metg_compute
sbatch --nodes 1 metg_legion.sh
```
