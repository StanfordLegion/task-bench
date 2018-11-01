/* Copyright 2018 Stanford University
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import scala.collection.mutable.ListBuffer 
import org.apache.spark.sql.SparkSession
import org.apache.spark.HashPartitioner
import org.apache.spark.SparkFiles

object Main {
    //globals 
    var NUM_PARTITIONS = 10;  
    var oldPartitioner = new HashPartitioner(NUM_PARTITIONS);
    val CHECKPOINT_INTERVAL = 5;
    val MATERIALIZE_INTERVAL = 90;
    val ordering = new math.Ordering[Array[Byte]] {
        def compare(a: Array[Byte], b: Array[Byte]): Int = {
            if (a eq null) {
                if (b eq null) 0
                else -1
            }
            else if (b eq null) 1
            else {
                val L = math.min(a.length, b.length)
                var i = 0
                while (i < L) {
                    if (a(i) < b(i)) return -1
                    else if (b(i) < a(i)) return 1
                    i += 1
                }
                if (L < b.length) -1
                else if (L < a.length) 1
                else 0
            }
        }
    }
    
    object LibraryLoader {
        lazy val load = System.load(SparkFiles.get("libcore_c.so"))
        //lazy val load = System.loadLibrary("core_c");
    }

    def main(args: Array[String]) {  
        val spark = SparkSession.builder.appName("SimpleApplication").getOrCreate();
        val numSlurmNodes = sys.env.get("SLURM_JOB_NUM_NODES");
        if (numSlurmNodes != None) {    //otherwise, in CI, presumably
            val numWorkerNodes = numSlurmNodes.get.toInt - 1; //NOTE: this only works for SLURM; assumes separate node for master
            val numWorkerCores = sys.env("SLURM_CPUS_ON_NODE").toInt * numWorkerNodes / 2;
            //val numWorkerCores = spark.sparkContext.getConf.get("spark.cores.max").toInt;
            NUM_PARTITIONS = numWorkerCores - 2 * numWorkerNodes; 
            //NUM_PARTITIONS = 30;
        }
        println("Num partitions: " +  NUM_PARTITIONS);
        oldPartitioner = new HashPartitioner(NUM_PARTITIONS);
        spark.sparkContext.setLogLevel("ERROR");

        System.loadLibrary("core_c");
        
        var argsToPass = new Array[String](args.length + 1);
        argsToPass(0) = "dummy";
        var i = 0;
        for (i <- 1 to args.length) {
            argsToPass(i) = args(i-1);
        }

        val app = core_c.app_create(argsToPass); 
        core_c.app_display(app);
        println("Starting preprocessing");

        /*------PREPROCESSING-------*/
               
        val taskGraphList = core_c.app_task_graphs(app);
        val numGraphs = core_c.task_graph_list_num_task_graphs(taskGraphList);
        var maxNumTimesteps = 0;
        var maxWidth = 0;
        var g = 0;
        val fakeArr = new Array[Byte](1);
        for (g <- 0 until numGraphs) {
            val taskGraph = core_c.task_graph_list_task_graph(taskGraphList, g); 
            if (taskGraph.getTimesteps() > maxNumTimesteps) {
                maxNumTimesteps = taskGraph.getTimesteps();
            }
            if (taskGraph.getMax_width() > maxWidth) {
                maxWidth = taskGraph.getMax_width();
            }
        }
        val fakeValsRDD = spark.sparkContext.parallelize(0 to maxWidth - 1).map(point=>(point,fakeArr)).partitionBy(oldPartitioner);
              
        /*------WARMUP AND TIMING-------*/
        println("Starting warmup");
        timing( spark, maxNumTimesteps, numGraphs, taskGraphList,  fakeValsRDD ); //warmup
        println("Starting timing");
        val start = System.nanoTime;
        val end = timing( spark, maxNumTimesteps, numGraphs, taskGraphList, fakeValsRDD ); 
        val elapsed = (end - start) / 1e9d;
        
        core_c.app_report_timing(app, elapsed); //prints elapsed
        core_c.task_graph_list_destroy(taskGraphList);
        core_c.app_destroy(app);
        spark.stop();

    } //end of main

    /*------FUNCTIONS-------*/
    def timing( spark: SparkSession, maxNumTimesteps: Int, numGraphs:Int, taskGraphList:task_graph_list_t , fakeValsRDD: org.apache.spark.rdd.RDD[(Int, Array[Byte])] ) : Long = {  
        var ts = 0;
        var global_valsRDDList = new Array[org.apache.spark.rdd.RDD[(Int, Array[Byte])]](numGraphs); 
        for (ts <- 0 until maxNumTimesteps) { //start at ts ZERO
            var g = 0;
            for (g <- 0 until numGraphs) {
                val taskGraph = core_c.task_graph_list_task_graph(taskGraphList, g);//need #ts for graph 
                val SERtaskGraph = new SERtask_graph_t(taskGraph);
                if (ts <= taskGraph.getTimesteps() - 1) {
                    execute_timestep(spark, SERtaskGraph, g, ts, global_valsRDDList, fakeValsRDD); 
                    //execute_timestep does joining etc, and task_graph_execute_timestep to get new valsRDD
                }
            }
        }
        //force computation
        var v = 0;
        var end = 0L;
        for (v <- global_valsRDDList) {
            val numVals = v.count();
            end = System.nanoTime;
            if (numVals == 0) {
                println("ERROR: No values in valsRDD -- execute_point section skipped");
            }
        //DEBUG: print last valsRDD -- don't time this part
        //println("printing 5 random vals in final valsRDD for last graph");
        //v.take(5).foreach(v=>println("point: " + v._1 +  " value: " + v._2.toList)); //for large # points, change collect to take
        }

        end; 
    }

    def call_execute_point (SERtaskGraph: SERtask_graph_t, ts: Int, point:Int, inputsOrVal: Any, simple: Boolean) : Array[Byte] = { 
        LibraryLoader.load;
        val taskGraph = SERtaskGraph.toTaskGraph(); //create on each worker
        val depType = taskGraph.getDependence().toString(); 
        val outputBytesPerTask = taskGraph.getOutput_bytes_per_task();
        val output_ptr = new Array[Byte](outputBytesPerTask.asInstanceOf[Int]); 
        val output_bytes = output_ptr.length;
        var input_ptr = new Array[Array[Byte]](1); 
        input_ptr(0) = new Array[Byte](1); //use fake populated input_ptr on ts0 in case I change ts0 RDD in future
        if (simple && ts != 0) {
            input_ptr(0) = inputsOrVal.asInstanceOf[Array[Byte]]; 
        }
        else if (!simple && ts != 0) { //not simple 
            input_ptr = inputsOrVal.asInstanceOf[Iterable[Array[Byte]]].toArray.sorted(ordering);
            if (depType == "STENCIL_1D_PERIODIC" && point + 1 >= taskGraph.getMax_width()) {
                input_ptr = input_ptr.drop(1) ++ input_ptr.take(1);
            } //PERIODIC: move input from 0th point to front if needed (array)
        }
        val n_inputs = input_ptr.length;
        val input_bytes = new Array[Long](n_inputs);  
        var b = 0;
        for (b <- 0 until input_bytes.length) {
            input_bytes(b) = input_ptr(b).length;
        }

        val scratchBytesPerTask = taskGraph.getScratch_bytes_per_task();
        if (scratchBytesPerTask > 0) { //memory-bound
            val scratch_ptr = new Array[Byte](scratchBytesPerTask.asInstanceOf[Int]);
            for (c <- 0 until scratch_ptr.length) { //this may be needed for typemap
                scratch_ptr(c) = 1;
            }

            core_c.task_graph_execute_point_scratch(taskGraph, ts, point, output_ptr, output_bytes, 
                input_ptr, input_bytes, n_inputs, scratch_ptr, scratchBytesPerTask);
        }
        else {
            core_c.task_graph_execute_point(taskGraph, ts, point, output_ptr, output_bytes, 
                input_ptr, input_bytes, n_inputs);
        }
        output_ptr;
    }

    def execute_timestep(spark: SparkSession, SERtaskGraph: SERtask_graph_t, g: Int, ts: Int, global_valsRDDList:Array[org.apache.spark.rdd.RDD[(Int, Array[Byte])]], fakeValsRDD: org.apache.spark.rdd.RDD[(Int, Array[Byte])]) {
        val taskGraph = SERtaskGraph.toTaskGraph();
        val curOffset = core_c.task_graph_offset_at_timestep(taskGraph, ts);  //0 for non-DOM
        val prevWidth = core_c.task_graph_width_at_timestep(taskGraph, math.max(0, ts - 1));
        val prevOffset = core_c.task_graph_offset_at_timestep(taskGraph, math.max(0, ts - 1));  //0 for non-DOM
        val curDset = core_c.task_graph_dependence_set_at_timestep(taskGraph, ts); 
        val depType = taskGraph.getDependence().toString();

        var valsRDD = fakeValsRDD;
        val fakearr = new Array[Byte](1);
        if (ts != 0)  {
            valsRDD = global_valsRDDList(g);  
        }
        //where to send from (prev ts)
        val relevantValsRDD = valsRDD.filter(kvpair=>kvpair._1 >= prevOffset && kvpair._1 < prevOffset + prevWidth); 
        
        /* println("ts: "+ ts); //DEBUG
        println("relevant vals, points should be ok even on 0th ts");
        relevantValsRDD.collect().foreach(v=>println("point: " + v._1 +  " value: " + v._2.toList)); */
  
        //inputsRDDUngrouped needs to have all relevant points, can't be empty; vals don't matter for ts0, just needs (k,v) pairs
        var inputsRDDUngrouped = spark.sparkContext.emptyRDD[(Int, Array[Byte])];
        if (ts == 0) inputsRDDUngrouped = relevantValsRDD.mapValues( v=>fakearr); 

        /*------CREATE INPUT DATA, NO JOIN: send prev ts values to cur ts to get cur ts inputs-------*/
        if (depType != "NO_COMM" && depType != "TRIVIAL" && !(depType == "NEAREST" && taskGraph.getRadix() == 0)) { //only send if ts != 0
            if (ts != 0) {
                inputsRDDUngrouped = relevantValsRDD.flatMap { 
                    case (point, oldVal) =>
                        LibraryLoader.load;
                        val taskGraph = SERtaskGraph.toTaskGraph(); //create on each worker
                        val intervalList = core_c.task_graph_reverse_dependencies(taskGraph, curDset, point); //where to send from prev ts
                        val numIntervals = core_c.interval_list_num_intervals(intervalList);
                        var toReturn = ListBuffer.empty[(Int,Array[Byte])]; 
                        var i = 0; //map returns a new collection
                        for (i <- 0 until numIntervals) {
                            val interval = core_c.interval_list_interval(intervalList, i);
                            var expandedInterval = (interval.getStart() to interval.getEnd()).toList; //interval is inclusive
                            if (expandedInterval(0) < curOffset) expandedInterval = expandedInterval.drop(1); //DOM
                            val mapped = expandedInterval.map(dest=>(dest,oldVal));
                            toReturn = toReturn ++ mapped;
                        }
                        core_c.interval_list_destroy(intervalList);
                    toReturn;
                }.partitionBy(oldPartitioner); 
                  
                /* println("num points in new inputsRDDUngrouped: " +inputsRDDUngrouped.count()); //DEBUG
                println("printing vals in new inputsRDDUngrouped");
                inputsRDDUngrouped.collect().foreach(v=>println("point: " + v._1 +  " value: " + v._2.toList)); 
                println("about to call map partitions, non-simple"); */
            }
            
            //for each point in graph at current width, call task_graph_execute_timestep to generate outputs
        
            /*------CREATE OUTPUT DATA-------*/
            valsRDD = inputsRDDUngrouped.groupByKey().mapPartitions( { iter=>iter.map {  
                case (point, inputs) =>
                val output_ptr = call_execute_point(SERtaskGraph, ts, point, inputs, false);
                (point, output_ptr)
            } }, preservesPartitioning = true); 
        }
                    
        else { //trivial or no comm, or nearest with radix = 0
            if (ts % MATERIALIZE_INTERVAL == 0) {
                relevantValsRDD.count(); //materialize to avoid stack overflow
            }
            valsRDD = relevantValsRDD.mapPartitions( { iter=>iter.map {
                case (point, oldVal) =>
                val output_ptr = call_execute_point(SERtaskGraph, ts, point, oldVal, true);
                (point, output_ptr)
            } }, preservesPartitioning = true); 

        }

        valsRDD.cache(); 
        if (ts % CHECKPOINT_INTERVAL == 0) { 
            valsRDD.localCheckpoint();
        }
        
        /* println("num points in new valsRDD: " +valsRDD.count()); //DEBUG
        println("printing vals in new valsRDD");
        valsRDD.collect().foreach(v=>println("point: " + v._1 +  " value: " + v._2.toList)); */ //for large # points, change collect to take 
        
        if ((depType == "NO_COMM" || depType == "TRIVIAL" || (depType == "NEAREST" && taskGraph.getRadix() == 0) ) 
            && ts % MATERIALIZE_INTERVAL == 0) { //leave this after cache/checkpoint
            valsRDD.count();
        }
        global_valsRDDList(g) = valsRDD;

    }
} //end of object





