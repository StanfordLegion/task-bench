# A Task Benchmark [![Build Status](https://travis-ci.org/StanfordLegion/task-bench.svg?branch=master)](https://travis-ci.org/StanfordLegion/task-bench)

## Quickstart

### Local

```
git clone https://github.com/StanfordLegion/task-bench.git
cd task-bench
./get_deps.sh
./build_all.sh
./legion/task_bench -steps 9 -type dom
```

### Sherlock

```
git clone https://github.com/StanfordLegion/task-bench.git
cd task-bench
CONDUIT=ibv USE_GASNET=1 CHARM_VERSION=verbs-linux-x86_64 ./get_deps.sh
sbatch ./scripts/sherlock/build.sh
cd scripts/sherlock
sbatch --nodes 1 emtg_legion.sh
```
