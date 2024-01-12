# A Task Benchmark [![CI](https://github.com/StanfordLegion/task-bench/actions/workflows/main.yml/badge.svg)](https://github.com/StanfordLegion/task-bench/actions/workflows/main.yml)

**Please contact the authors before publishing any results obtained
with Task Bench.**

Corresponding authors:

  * Elliott Slaughter <slaughter@cs.stanford.edu>
  * Wei Wu <weiwu@nvidia.com>

Task Bench is a configurable benchmark for evaluating the efficiency
and performance of parallel and distributed programming models,
runtimes, and languages. It is primarily intended for evaluating
task-based models, in which the basic unit of execution is a task, but
it can be implemented in any parallel system. The benchmark consists
of a configurable task graph (which can be thought of as an iteration
space with tasks at every point), with configurable dependencies
between tasks. Tasks execute a configurable set of kernels, which
allow the execution to be compute-bound, memory-bound,
communication-bound, or runtime overhead-bound (with empty tasks).

The following configurations are currently supported:

Implementations:
[Charm++](charm++),
[Chapel](chapel),
[Dask](dask),
[HPX](hpx),
[Legion](legion),
[MPI](mpi),
[MPI+OpenMP](mpi_openmp),
[OmpSs](ompss),
[OpenMP](openmp),
[PaRSEC](parsec),
[Pygion](pygion),
[Realm](realm),
[Regent](regent),
[Spark](spark),
[StarPU](starpu),
[Swift/T](swift),
[TensorFlow](tensorflow),
[X10](x10)

Dependence patterns:
trivial,
no_comm,
stencil_1d,
stencil_1d_periodic,
dom,
tree,
fft,
all_to_all,
nearest,
spread,
random_nearest

Kernels:
compute-bound,
memory-bound,
load-imbalanced compute-bound,
empty

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

## Experimental Configuration

For detailed instructions on configuring task bench for performance
experiments, see [EXPERIMENT.md](EXPERIMENT.md).

## Enhance

In generator directory, we add an DAG generator inspired by paper "Neural Topological Ordering for Computation Graphs".

Once the dag generated, we can import it into task bench to run simulation.

The command is as follow:

```bash
./main -type user_defined -kernel customize -schedule dmda -custom_dag dag_dot_prof_file_3840_dmda.txt -task_type_runtime cholesky2.runtime  -core 3 -ngpu 1 -output 3686400 
```

Use `user_defined` data dependency type, and use `customize` kernel type. Then appoint the DAG file and the file that contains the execution time of each task type. The task use the `std::this_thread::sleep_for` method to let task run specific time. Then use `ngpu` to set the GPU number used in the simulation.