# A Task Benchmark [![Build Status](https://travis-ci.org/StanfordLegion/task-bench.svg?branch=master)](https://travis-ci.org/StanfordLegion/task-bench)

## Quickstart

```
git clone https://github.com/StanfordLegion/task-bench.git
cd task-bench
./get_deps.sh
./build_all.sh
./legion/task_bench -steps 9 -type dom

./task_bench -steps 4 -type fft -width 4 -kernel compute_bound -max_power 200 -iter 20
./task_bench -steps 4 -type fft -width 4 -kernel memory_bound -size 8192 -jump 256 -iter 20
```
