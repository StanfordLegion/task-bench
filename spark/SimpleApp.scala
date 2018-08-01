import scala.collection.mutable.ArrayBuffer
import scala.collection.mutable.ListBuffer //keep depsRDD as int, list[Int] for now (no random access needed)
import org.apache.spark.sql.SparkSession
import org.apache.spark.HashPartitioner

object SimpleApp {
    //globals 
    val NUM_PARTITIONS = 20; //TODO: change to num cores*num nodes 
    val oldPartitioner = new HashPartitioner(NUM_PARTITIONS);
    val CHECKPOINT_INTERVAL = 5;
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

    def main(args: Array[String]) {
                
        val spark = SparkSession.builder.appName("SimpleApplication").config("spark.jars", "target/scala-2.11/SimpleProject-assembly-1.0.jar").getOrCreate(); //added config during stackoverflow debug-probably not necessary

        System.loadLibrary("core_c");
        //spark.sparkContext.setCheckpointDir("/scratch/users/emarx1/checkpoint" ); //maybe file:/// ?
        //spark.sparkContext.setCheckpointDir("file:///scratch/users/emarx1/checkpoint" ); 
        var argsToPass = new Array[String](args.length + 1);
        argsToPass(0) = "dummy";
        var i = 0;
        for (i <- 1 to args.length) {
                argsToPass(i) = args(i-1);
        }
        println("argsToPass:");
        var a=0;
        for (a <- argsToPass) {
            println(a);
        }

        val app = core_c.app_create(argsToPass); 
        core_c.app_display(app);
        println("Starting preprocessing");

        /*------PREPROCESSING-------*/
        var global_depsRDDListBuffer = new ArrayBuffer[ArrayBuffer[org.apache.spark.rdd.RDD[(Int, List[Int])]]](); //list of list of deps RDDs
        //var global_valsRDDListBuffer = new ArrayBuffer[org.apache.spark.rdd.RDD[(Int, Array[Byte])]](); //list of vals RDDs (must be mutable)
        //make valsRDD in timing 
        //ArrayBuffer and Array have constant-time update, append
        val taskGraphList = core_c.app_task_graphs(app);
        val numGraphs = core_c.task_graph_list_num_task_graphs(taskGraphList);
        var maxNumTimesteps = 0;
        var g = 0;

        for (g <- 0 until numGraphs) {
            var depsRDDListBuffer = new ArrayBuffer[org.apache.spark.rdd.RDD[(Int, List[Int])]]();
            val taskGraph = core_c.task_graph_list_task_graph(taskGraphList, g); 
            if (taskGraph.getTimesteps() > maxNumTimesteps) {
                maxNumTimesteps = taskGraph.getTimesteps();
            }
            val numDsetPatterns = core_c.task_graph_max_dependence_sets(taskGraph);
            var dset = 0;

            for (dset <- 0 until numDsetPatterns) {
                var kvpairsListBuffer = new ListBuffer[(Int, List[Int])];
                var point = 0;
                for (point <- 0 until taskGraph.getMax_width()) {
                    val intervalList = core_c.task_graph_dependencies(taskGraph, dset, point); //TODO: change to reverse for tree
                    val numIntervals = core_c.interval_list_num_intervals(intervalList);
                    var i = 0;
                    for (i <- 0 until numIntervals) {
                        val interval = core_c.interval_list_interval(intervalList, i);
                        val expandedInterval = (interval.getStart() to interval.getEnd()).toList; //interval is inclusive
                        val pair = (point, expandedInterval);
                        kvpairsListBuffer += pair;
                    }
                    core_c.interval_list_destroy(intervalList);
                }
                val kvpairsList = kvpairsListBuffer.toList;
                var depsRDD = spark.sparkContext.parallelize(kvpairsList); //is [(Int, List[Int])]
                println("DepsRDD: ");
                depsRDD.take(4).foreach(println);
                depsRDD = depsRDD.partitionBy(oldPartitioner).persist();
                depsRDDListBuffer += depsRDD;
            }
            //val depsRDDList = depsRDDListBuffer.toList;

            var a=0;
            for (a <- depsRDDListBuffer) {
                println("partitioner of each depsRDD (these should all be the same for each graph): ");
                println(a.partitioner);
            }

            //put depsRDDList and valsRDD in global list buffer
            //global_depsRDDListBuffer += depsRDDList;
            global_depsRDDListBuffer += depsRDDListBuffer;
            //global_valsRDDListBuffer += valsRDD; //moved this to timing
        }
        //conversion to list not needed
        //val global_depsRDDList = global_depsRDDListBuffer.toList;
        //val global_valsRDDList = global_valsRDDListBuffer.toList;
        

        /*------WARMUP AND TIMING-------*/
        println("Starting warmup");
        timing( spark, maxNumTimesteps, numGraphs, taskGraphList, global_depsRDDListBuffer); //warmup
        println("Starting timing");
        val start = System.nanoTime;
        timing( spark, maxNumTimesteps, numGraphs, taskGraphList, global_depsRDDListBuffer);
        val elapsed = (System.nanoTime - start) / 1e9d;
        core_c.app_report_timing(app, elapsed); //prints elapsed
        spark.stop();
    } //end of main

    /*------FUNCTIONS-------*/
    def timing( spark: SparkSession, maxNumTimesteps: Int, numGraphs:Int, taskGraphList:task_graph_list_t , global_depsRDDListBuffer:  ArrayBuffer[ArrayBuffer[org.apache.spark.rdd.RDD[(Int, List[Int])]]])  {  
        var ts = 0;
        var global_valsRDDListBuffer = new Array[org.apache.spark.rdd.RDD[(Int, Array[Byte])]](numGraphs);
        for (ts <- 0 until maxNumTimesteps) { //start at ts ZERO
            var g = 0;
            for (g <- 0 until numGraphs) {
                val taskGraph = core_c.task_graph_list_task_graph(taskGraphList, g);//need #ts for graph 
                val SERtaskGraph = new SERtask_graph_t(taskGraph);
                if (ts <= taskGraph.getTimesteps() - 1) {
                    execute_point(spark, SERtaskGraph, g,ts, global_valsRDDListBuffer, global_depsRDDListBuffer); 
                    //execute_point does joining etc, and task_graph_execute_point to get new valsRDD
                }
            }
        }
        //force computation
        var v = 0;
        for (v <- global_valsRDDListBuffer) {
            v.count();
        }
    }

    def execute_point(spark: SparkSession, SERtaskGraph: SERtask_graph_t, g: Int, ts: Int, global_valsRDDListBuffer:Array[org.apache.spark.rdd.RDD[(Int, Array[Byte])]], global_depsRDDListBuffer: ArrayBuffer[ArrayBuffer[org.apache.spark.rdd.RDD[(Int, List[Int])]]]) {
        
        val taskGraph = SERtaskGraph.toTaskGraph(); 
        val width = core_c.task_graph_width_at_timestep(taskGraph, ts);
        val dset = core_c.task_graph_dependence_set_at_timestep(taskGraph, ts);
        val depsRDD = global_depsRDDListBuffer(g)(dset); 
        var valsRDD = spark.sparkContext.emptyRDD[(Int, Array[Byte])]; //won't be used for anything--ts=0 makes the first valsRDD 
        val fakearr = new Array[Byte](1);
        if (ts != 0)  {
            valsRDD = global_valsRDDListBuffer(g); //don't try to access Array(0) before it's initialized 
        }
        //println("ts: "+ ts);
        val relevantDepsRDD = depsRDD.filter(kvpair=>kvpair._1 < width); //filter preserves partitioning
        //println("relevant");
        //relevantDepsRDD.take(4).foreach(println);
        //println("old vals (about to join)");
        //valsRDD.take(4).foreach(println);
        var valsRDDGrouped = spark.sparkContext.emptyRDD[(Int, Array[Byte])];
        if (ts == 0) valsRDDGrouped = relevantDepsRDD.mapValues( v=>fakearr); //needs to have all relevant points, can't be empty
        
        /*------CREATE INPUT DATA-------*/
        else { 
            valsRDDGrouped = relevantDepsRDD.join(valsRDD).flatMap{ //not for ts=0
                case (point, (deps, oldVal)) =>
                deps.map(dest => (dest, oldVal))
            }.partitionBy(oldPartitioner); 
        }
        //println("about to call map partitions, NEW");
        //for each point in graph at current width, call task_graph_execute_point to generate outputs
        
        /*------CREATE OUTPUT DATA-------*/
        valsRDD = valsRDDGrouped.groupByKey().mapPartitions( { v=>v.map {
            case (k,v) =>
            //println("starting mapPartitions"); 
            System.loadLibrary("core_c"); //maybe only for ts0? no, needs to be every time

            val taskGraph = SERtaskGraph.toTaskGraph(); //create on each worker
            val outputBytesPerTask = taskGraph.getOutput_bytes_per_task();
            val output_ptr = new Array[Byte](outputBytesPerTask.asInstanceOf[Int]); 
            val output_bytes = output_ptr.length;
            
            //input_ptr/input_bytes must be real array of array of bytes/array of size_t so typemap doesn't segfault
            var input_ptr = new Array[Array[Byte]](1); 
            input_ptr(0) = new Array[Byte](1); //needed
            if (ts != 0) {
                input_ptr = v.toArray.sorted(ordering);   //convert v to Array[Array[Byte]] rather than Iterable[Array[Byte]] for typemap
            }
            val n_inputs = input_ptr.length;
            val input_bytes = new Array[Long](n_inputs);  //make array where each elem is sizeof(inputptr array at that index)
            var b = 0;
            for (b <- 0 until input_bytes.length) {
                input_bytes(b) = input_ptr(b).length;
            }
            
            core_c.task_graph_execute_point(taskGraph, ts, k, output_ptr, output_bytes, input_ptr, input_bytes, n_inputs);
            (k,output_ptr)

        } },  preservesPartitioning = true);
        
        //println("about to cache");
        valsRDD.cache(); 
        if (ts % CHECKPOINT_INTERVAL == 0) { 
            //println("about to checkpoint");
            valsRDD.localCheckpoint();
        }
        //println("num points in new valsRDD: " +valsRDD.count())
        //println("printing vals in new valsRDD")
        //valsRDD.collect().foreach(v=>println("point: " + v._1 +  " value: " + v._2.toList)); 

        //valsRDD.take(4).foreach(v=>println(v._2.toList)); 
        //println("partitioner of new valsRDD (should be the same as depsRDD for each graph:)");
        //println(valsRDD.partitioner);
        //if (ts == 0) global_valsRDDListBuffer += valsRDD2; // () access only works after a += for arraybuffer
        //else global_valsRDDListBuffer(g) = valsRDD;
        global_valsRDDListBuffer(g) = valsRDD;
        //println("lineage graph:");
        //println(valsRDD.toDebugString); //errors when string gets too long
    }
} //end of object





