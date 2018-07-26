use Time;
config const quiet: bool = false;
var t: Timer;

config const dataSize = 10;
config const numNeighbors = 3;

 /*
  * Extern block for the 'core_c.h' file.
  * The file 'core_c.h' contains the nessicary functions for 
  * creating and running variious task graphs
  */
  extern {

    #include "core_c.h"

  }

 // command line to build and run program  
 // chpl core_c.h -lcore -L. task_benchmark.chpl
 // LD_LIBRARY_PATH=$LD_LIBRARY_PATH:. ./task_benchmark -nl 1 -type trivial
  // bebug line           compilerError( "tmp.type: ", (tmp.type : string ) );


  proc main(args: [] string) {
    var argc = args.numElements;
    var app = app_create(argc:int(32), convert_args_to_c_args(argc, args));
    var graphs = app_task_graphs(app); // array of tasks grapsh 
    app_display(app);

    var totalWidth = find_number_of_tasks(graphs);
    //writeln("totalWidth: ", totalWidth);
    var totalSteps = find_number_of_steps(graphs);
    //writeln("totalSteps: ", totalSteps);

    var tasksArray = find_tasks_per_node(graphs, totalWidth);
    //writeln("tasksArray: ", tasksArray);

    var tasksGrid = init_env(totalWidth);
    // have an grid of atomic variables that are all set to 0
    var atomicCube: [1..totalWidth][1..totalWidth][1..totalSteps] atomic int;
    // a cube of all of the neighboring array
    var depenCube: [1..dataSize][1..totalWidth][1..totalSteps] int;

    //print_grid(tasksGrid, dataSize, totalWidth);

    
    // loop over the vector of task graphs to execute
    for i in 0..task_graph_list_num_task_graphs(graphs) - 1 {
      // pass in the first graph to execute
      execute_task_graph(task_graph_list_task_graph(graphs, i), depenCube, tasksGrid, 
        atomicCube, tasksArray, totalWidth, totalSteps, app);
    }

    // each slice is a tasks
    //print_cube(depenCube, dataSize, totalWidth, totalSteps);
    //print_atomic_cube(atomicCube, totalWidth, totalWidth, totalSteps);
  }

  proc execute_task_graph(graph, depenCube, tasksGrird, 
    atomicCube, tasksArray, totalWidth, totalSteps, app) {
      //print_depenencies(graph, totalWidth); // where to receive 
      //print_reverse_depenencies(graph, totalWidth); // where to send
      run_depenencies(graph, depenCube, tasksGrird, atomicCube, tasksArray, totalWidth, totalSteps, app);

  }
  
  proc run_depenencies(graph, depenCube, tasksGrird, atomicCube, tasksArray, totalWidth, totalSteps, app) {
    t.start();
    coforall loc in Locales { 
      on loc {
        var place = find_start_index(here.id, tasksArray);
        //writeln("the frist and second: ", place + 1, " and ", tasksArray[here.id] + place, " id: ", here.id);
        coforall i in (1 + place)..(tasksArray[here.id] + place) {
          //writeln("Using locale ", here.id + 1, " of ", numLocales, " and task number ", i, " is running on node ", here.id + 1);
          for j in 1..totalSteps - 1 {
            //writeln("step number: ", j);
            var currArray = get_from_grid(tasksGrird, i);
            var depenSet = task_graph_dependence_set_at_timestep(graph, j - 1);
            if (j != 1) { // wait for stuff before sending
             // writeln("waiting on task: ", i);
              var list = task_graph_dependencies(graph, depenSet, i - 1); // get interval list 
              var size = interval_list_num_intervals(list);
              for k in 0..size - 1 {
                var interval = interval_list_interval(list, k);
                //writeln("interval on location (", i, ",", j, ") is waiting on ", size, " location(s) at [", interval.start, ",", interval.end, "]");
                for points in interval.start..interval.end {
                  (atomicCube[i][points + 1][j - 1]).waitFor(1);
                }
              }
              //writeln("done waiting on task: ", i);
            }
            kernel_execute(graph.kernel);
            var revList = task_graph_reverse_dependencies(graph, depenSet, i - 1);
            var revSize = interval_list_num_intervals(revList);
            for k in 0..revSize - 1 {
              var interval = interval_list_interval(revList, k);
              //writeln("interval on location (", i, ",", j, ") is sending to ", size, " location(s) at [", interval.start, ",", interval.end, "]");
              for points in interval.start..interval.end {
                add_to_cube(depenCube, currArray, dataSize, points + 1, j + 1);
                (atomicCube[i][points + 1][j]).write(1);
              }
            }
          }
        }
      }
    }
    t.stop();
    app_report_timing(app, t.elapsed());
    writeln();
  }

  proc find_start_index(node, tasksArray) {
    var result = 0;
    if node == 0 then return result;
    for i in 0..node - 1 {
      result += tasksArray[i];
    }
    return result;
  }

  proc print_depenencies(graph, totalWidth) {
    writeln("where to recieve from: ");
    for tasks in 0..totalWidth - 1 {
      for steps in 0..graph.timesteps - 1 {
        var depenSet = task_graph_dependence_set_at_timestep(graph, steps);
        var list = task_graph_dependencies(graph, depenSet, tasks); // get interval list 
        var size = interval_list_num_intervals(list);
        for i in 0..size - 1{
          var interval = interval_list_interval(list, i);
          write("interval on location (", tasks, ",", steps, ")");
          writeln(" is replying on ", size, " location(s) at [", interval.start, ",", interval.end, "]");
        }
      }
    } 
    writeln();
  }

  proc print_reverse_depenencies(graph, totalWidth) {
    writeln("where to send to: ");
    for tasks in 0..totalWidth - 1 {
      for steps in 0..graph.timesteps - 1 {
        var depenSet = task_graph_dependence_set_at_timestep(graph, steps);
        var list = task_graph_reverse_dependencies(graph, depenSet, tasks); // get interval list 
        var size = interval_list_num_intervals(list);
        for i in 0..size - 1{
          var interval = interval_list_interval(list, i);
          write("interval on location (", tasks, ",", steps, ")");
          writeln(" is replying on ", size, " location(s) at [", interval.start, ",", interval.end, "]");
        }
      }
    } 
    writeln();
  }
    

  /*
 * Function: find_tasks_per_node this method will find how many tasks each node should ideally be using
 * Return: returns an array of ints. each index has a value that represents a node and number of tasks
 */
 proc find_tasks_per_node(graphs, totalWidth) {
  var result: [0..(numLocales - 1)] int;
  coforall i in 0..(totalWidth - 1) {
    result[i % numLocales] += 1;
  }
  return result;
}

proc find_number_of_tasks(graphs) {
  var totalWidth = 0;
  // loop to add up all of the graphs widths
  for i in 0..task_graph_list_num_task_graphs(graphs) - 1 {
    var graph = task_graph_list_task_graph(graphs, i);
    totalWidth += graph.max_width;
  }
  return totalWidth;
}

proc find_number_of_steps(graphs) {
  var totalSteps = 0;
  // loop to add up all of the graphs widths
  for i in 0..task_graph_list_num_task_graphs(graphs) - 1 {
    var graph = task_graph_list_task_graph(graphs, i);
    totalSteps += graph.timesteps;
  }
  return totalSteps;
}

 /*
  * Function: init_env this method will create a grid that stores the info for each node
  * Return: returns a grid of the inforamation
  */
  proc init_env(totalWidth) {
    var tasksGrid: [1..totalWidth][1..dataSize] int; // x rows and y cols 
    for i in 1..totalWidth {
      //init an array for this node 
      var tmp = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
      // assign tasksGrid[i] = array;
      add_to_grid(tasksGrid, tmp, i);
    }
    return tasksGrid;
  }

  /*
   * Function: add_to_grid this method will add an array to a grid of ints 
   * Param: grid the grid that we want to add an array to
   * Param: currArray the array that we want to add the the grid
   * Param: currIndex the cols of the grid we are adding to 
   * Return: no reutrn but the grid is updated 
   */
  proc add_to_grid(grid, currArray, currIndex) {
     grid[currIndex] = currArray;
  }

 /* 
  * Function: convert_args_to_c_args this method will change a chapel array of 
  *           strings to a c array of strings
  * Param: argc the number of elements in the array
  * Param: args the array of chapel strigs that we are converting 
  * Return: returns an array of c strings
  */
  proc convert_args_to_c_args(argc, args) {
    var result = c_malloc(c_ptr(int(8)), argc + 1);
 	  // not efficent but needed to convert args
    for i in 0..argc - 1 {
 		  // make c memeory for each word
      var curr = c_malloc(int(8), args[i].length + 1);
 		  // loop over each character to add it to a string 
      var j = 0;
      for chr in args[i] {
        curr[j] = ascii(chr):int(8);
        j += 1;
      }
      result[i] = curr;
    }
    result[argc] = nil;
    return result;
  }

  /*
   * Function: print_grid this method will print a grid of data/ ints
   * Param: curr the grid of ints that we want to print 
   * Param: rows the number of rows in the grid of ints 
   * Param: cols the number of cols in the grid of ints 
   * Return: no return 
   */
   proc print_grid(curr, rows, cols) {
    writeln();
    writeln("This is what the grid looks like: ");
    for i in 1..cols {
      var message = "";
      for j in 1..rows {  
        message += curr[i][j] + " ";
      }
      writeln(message);
    }
    writeln();
   }

/*
 * Function: print_cube this method will print each slice out of a cube of data 
 * Param: cube the cube that we want to read from 
 * Param: x the dimension of the cube going down 
 * Param: y the dimension of the cube going across
 * Param: z the dimension of the cube goind inwards
 * Return: no return 
 */
 proc print_cube(cube, x, y, z) {
  writeln();
  for k in 1..z {
    writeln("This is what the depen cube looks like for slice " + k + " ");
    for i in 1..x {
      var message = "";
      for j in 1..y {
        message += cube[i][j][k] + " ";
      }
      writeln(message);
    }
    writeln();
  }
 }

 proc print_atomic_cube(atomicCube, x ,y ,z) {
  writeln();
  for k in 1..z {
    writeln("This is what the atomic cube looks like for slice " + k + " ");
    for i in 1..y {
      var message = "";
      for j in 1..z {
        message += (atomicCube[i][j][k]).read() + " ";
      }
      writeln(message);
    }
    writeln();
  }
 }

 /*
 * Fucntion: get_from_grid this method will return an array in a grid without 
 *                         updating the grid 
 * Param: grid the grid that we want information from 
 * Param: currIndex the cols of the grid we are looking at 
 * Param: sz the rows of the grid we are looking at 
 * Return: returns the array that was in the grid
 */
 proc get_from_grid(grid, currIndex) {
  return grid[currIndex];
 }



/*
 * Fucntion: print_atomic_grid this method will print a grid of atomic ints 
 * Param: atomicGrid the grid of atomic ints that we want to print
 * Param: rows the number of rows in the grid of atomics 
 * Param: cols the number of cols in the grid of atomics 
 * Return: no return
 */
 proc print_atomic_grid(atomicGrid, rows, cols) {
  writeln();
  writeln("this is what the atomic grid looks like: ");
  for i in 1..rows {
    var message = "";
    for j in 1..cols {
      message += (atomicGrid[i][j]).read() + " ";
    }
    writeln(message);
  }
  writeln();
 }

/*
 * Function: add_to_cube this method adds three arrays/ grid/ slice of cube to a cube of ints 
 * Return: no return but the cube is updated
 */
 proc add_to_cube(cube, currArray, x, y, z) {
  for i in 1..x {
    cube[i][y][z] += currArray[i];
  }
 }

