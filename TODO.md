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
  * Legion Implementation
      * Tracing
      * Dynamic control replication
      * Timing (Careful! Be sure to do this correctly)
          * Execute entire task graph multiple times to warm up
          * Execution fence, dummy task, block, start timer
          * Execute task graph desired number of times
          * Execution fence, dummy task, block, stop timer
      * Profile and tune at scale
  * Build system
      * Is there a reasonable way to build without N build systems?
          * Maybe CMake?
  * Potential Implementations
      * MPI
          * Send/recv
          * Gather/scatter
          * All-to-all
      * PaRSEC
      * StarPU
      * DARMA
      * Realm
      * OCR
      * Charm++
      * X10
      * Chapel
      * Apache Spark
      * TensorFlow
