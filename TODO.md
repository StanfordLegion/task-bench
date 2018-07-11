# To Do

  * Core API
      * Specify the result type and size of tasks
      * Load imbalanced tasks
      * Load imbalanced task output
      * Other dependence types
          * Random
          * W/V cycles
      * Other kernel types
          * Compute bound
          * Memory bound
          * I/O bound
      * Recursive task graphs?
      * GPUs?
      * Measure memory usage of runtimes
  * Legion Implementation
      * Dynamic control replication
      * Profile and tune at scale
  * Build system
      * Is there a reasonable way to build without N build systems?
          * Maybe CMake?
  * Test suite
  * Potential Implementations
      * MPI
          * Send/recv
          * Gather/scatter
          * All-to-all
      * PaRSEC
      * StarPU
      * OmpSs
      * DARMA
      * Realm
      * OCR
      * Charm++
      * X10
      * Chapel
      * Apache Spark
      * TensorFlow
      * Dask
      * Ray
