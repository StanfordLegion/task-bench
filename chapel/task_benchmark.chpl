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

use Time;
use BlockDist;
config const quiet: bool = false;
var t: Timer;

 /*
  * Extern block for the 'core_c.h' file.
  * The file 'core_c.h' contains the functions for 
  * creating and running variious task graphs
  */
  extern {

    #include "core_c.h"

  }

 // command line to build and run program  
 // chpl core_c.h -lcore -L. task_benchmark.chpl
 // LD_LIBRARY_PATH=$LD_LIBRARY_PATH:. ./task_benchmark -nl 1 -type trivial
 // bebug line: compilerError( "tmp.type: ", (tmp.type : string ) );

 
  proc main(args: [] string) {
    var argc = args.numElements;
    var app = app_create(argc:int(32), convert_args_to_c_args(argc, args));
    var graphs = app_task_graphs(app); // array of tasks grapsh 
    app_display(app);

    var totalWidth = find_number_of_tasks(graphs);
    var totalSteps = find_number_of_steps(graphs);
    var tasksArray = find_tasks_per_node(graphs, totalWidth);
      
    // loop over the vector of task graphs to execute
    for i in 0..task_graph_list_num_task_graphs(graphs) - 1 {
      var graph = task_graph_list_task_graph(graphs, i);
      var atomicGrid = init_atomicGrid(totalWidth, totalSteps);
      var depenGrid = init_depenGrid(totalWidth, (graph.output_bytes_per_task):int, totalSteps); // grid to recieve from 
      var tasksGrid = init_tasksGrid(totalWidth, (graph.output_bytes_per_task):int, totalSteps); // grid to send from
      var executeGrid = init_executeGrid(totalWidth, totalSteps);
      
      execute_task_graph(task_graph_list_task_graph(graphs, i), depenGrid, tasksGrid, atomicGrid, executeGrid,
        tasksArray, totalWidth, totalSteps, app);

      // writeln("tasksGrid: ");
      // writeln(tasksGrid);
      // writeln("atomic grid: ");
      // writeln(atomicGrid);
      // writeln("executeGrid: ");
      // writeln(executeGrid);
      // writeln("depen grid: ");
      // writeln(depenGrid);
    }
  }

  proc execute_task_graph(graph, depenGrid, tasksGrid, atomicGrid, 
    executeGrid, tasksArray, totalWidth, totalSteps, app) {
      var maxDepen = get_reverse_depenencies(graph, totalWidth); // where to send
      run_depenencies(app, graph, depenGrid, tasksGrid, atomicGrid, executeGrid, tasksArray, totalWidth, totalSteps, maxDepen);

  }
  
  proc run_depenencies(app, graph, depenGrid, tasksGrid, atomicGrid, executeGrid, tasksArray, totalWidth, totalSteps, maxDepen) {
    t.start();
    coforall loc in Locales { 
      on loc {
        var place = find_start_index(here.id, tasksArray);
        //writeln("the frist and second: ", place + 1, " and ", tasksArray[here.id] + place, " id: ", here.id);
        coforall i in (1 + place)..(tasksArray[here.id] + place) {
          //writeln("Using locale ", here.id + 1, " of ", numLocales, " and task number ", i, " is running on node ", here.id + 1);
          for j in 1..totalSteps {
            var input_ptr = get_input_space(maxDepen, graph.output_bytes_per_task);
            var tmpArray: [1..totalWidth][1..((graph.output_bytes_per_task):int)*totalSteps] int(8);
            // print_grid(tmpArray, totalWidth, totalSteps, (graph.output_bytes_per_task):int);
            // writeln("step number: ", j);
            if (j != 1) { // wait for stuff before sending
             // writeln("waiting on task: ", i);
              var depenSet = task_graph_dependence_set_at_timestep(graph, j - 2);
              var list = task_graph_reverse_dependencies(graph, depenSet, i - 1); // get interval list 
              var size = interval_list_num_intervals(list);
              for k in 0..size - 1 {
                var interval = interval_list_interval(list, k);
                // writeln("interval on location (", i - 1, ",", j - 1, ") is waiting on ", size, " location(s) at [", interval.start, ",", interval.end, "]");
                for points in interval.start..interval.end {
                  (atomicGrid[(i,(points + 1 + totalWidth*(j-2)))]).waitFor(1);
                }
              }
              // writeln("done waiting on task: ", i);
            }        

            var depenSet = task_graph_dependence_set_at_timestep(graph, j - 1 );
            var list = task_graph_reverse_dependencies(graph, depenSet, i - 1);
            var size = interval_list_num_intervals(list);
            assert(size == 1); // The code below is going to break with size > 1
            for k in 0..size - 1 {
              var interval = interval_list_interval(list, k);
              // writeln("interval on location (", i - 1, ",", j - 1, ") is sending to ", size, " location(s) at [", interval.start, ",", interval.end, "]");
              var output_ptr = get_output_ptr(depenGrid, i, j, graph.output_bytes_per_task);
              update_input_ptr(tasksGrid, tmpArray, input_ptr, interval, (graph.output_bytes_per_task):int, j, size);
              var input_bytes = get_input_bytes(graph, interval, maxDepen, size);
              // before doing execute point make sure the priors have what they need 
              task_graph_execute_point_nonconst(graph, j - 1, i - 1, output_ptr, graph.output_bytes_per_task, 
                input_ptr, input_bytes, (((interval.end - interval.start) + size):uint));

              // should be waiting for the other people that are expexting the same thing your getting
              add_to_tasksGrid(tasksGrid, tmpArray, depenGrid, (graph.output_bytes_per_task):int, i, j);
              for points in interval.start..interval.end { 
                (atomicGrid[(i,(points + 1 + totalWidth*(j-1)))]).write(1);
              }

              (executeGrid[(i,j)]).write(1);
              for points in interval.start..interval.end {
                  (executeGrid[(points + 1,j)]).waitFor(1);
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

  proc print_grid(tmpArray, totalWidth, totalSteps, dataSize) {
    var num: atomic int;
    writeln();
      writeln("This is what the grid looks like: ");
      for i in 1..totalWidth {
       var message = "";
        for j in 1..(dataSize:int)*totalSteps {  
          message += tmpArray[i][j] + " ";
        }
        writeln(message);
      } 
      writeln();
      num.write(1);
      num.waitFor(1);
  }

  proc find_start_index(node, tasksArray) {
    var result = 0;
    if node == 0 then return result;
    for i in 0..node - 1 {
      result += tasksArray[i];
    }
    return result;
  }

  proc get_input_bytes(graph, interval, maxDepen, size) {
    var array: [0..maxDepen - 1] uint;
    var count = 0;
    for k in 0..size - 1 {
      for points in interval.start..interval.end {
        // get the acutual size of the input and assigne that to the array instead  
        array[count] = graph.output_bytes_per_task;
        count += 1;
      }
    }
    return c_ptrTo(array);
  }

  proc update_input_ptr(tasksGrid, tmpArray, input_ptr, interval, dataSize, step, size) {
    var count = 0;
    for k in 0..size - 1 {
      for points in interval.start..interval.end {
        forall i in 1..dataSize {
          tmpArray[points + 1][i + (dataSize:int*(step-1))] = tasksGrid[(points + 1,i + (dataSize:int*(step-1)))];
       }
        // input_ptr[count] = c_ptrTo(tasksGrid[(points + 1,1 + (dataSize:int*(step-1)))]);
        input_ptr[count] = c_ptrTo(tmpArray[points + 1][1 + (dataSize:int*(step-1))]);
        count += 1;
      }
    }
  }
  
  // make room for the maximum number of dependencies in the dependent set and each elememnt is the size of a pointer
  proc get_input_space(maxDepen, outputBytes) {
    return c_malloc(c_ptr(int(8)), maxDepen);
  }

  // returns a pointer to the row int the grid we are looking at 
  proc get_output_ptr(depenGrid, currWidth, step, dataSize) {
    return c_ptrTo(depenGrid[(currWidth, 1 + (dataSize:int*(step)))]);
  }

  proc get_reverse_depenencies(graph, totalWidth) {
    // writeln("where to send to: ");
    var maxDepen = 0;
    var size = 0;
    for tasks in 0..totalWidth - 1 {
      for steps in 0..graph.timesteps - 1 {
        var depenSet = task_graph_dependence_set_at_timestep(graph, steps);
        var list = task_graph_reverse_dependencies(graph, depenSet, tasks); // get interval list 
        size = interval_list_num_intervals(list);
        for i in 0..size - 1{
          var interval = interval_list_interval(list, i);
          // write("interval on location (", tasks, ",", steps, ")");
          // writeln(" is sending to ", size, " location(s) at [", interval.start, ",", interval.end, "]");
          var count = 0;
          for points in interval.start..interval.end {
            count += 1;
            if count*size > maxDepen then maxDepen = count*size;
          }
        }
      }
    } 
    return maxDepen;
    // writeln();
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
  proc init_tasksGrid(totalWidth, dataSize, totalSteps) {
    const tasksSpace = {1..totalWidth, 1..dataSize*totalSteps}; 
    const localTasksSpace = {1..numLocales, 1..1};
    var targets: [localTasksSpace] locale;
    forall i in 1..numLocales {
      targets[(i,1)] = Locales[i - 1];
    }
    const D: domain(2) dmapped Block(boundingBox=tasksSpace, targetLocales=targets) = tasksSpace;
    var tasksGrid: [D] int(8);
    return tasksGrid;
  }

  proc init_executeGrid(totalWidth, totalSteps) {
    const executeSpace = {1..totalWidth, 1..totalSteps};
    const localexecuteSpace = {1..numLocales, 1..1};
    var targets: [localexecuteSpace] locale;
    forall i in 1..numLocales {
      targets[(i,1)] = Locales[i - 1];
    }
    const D: domain(2) dmapped Block(boundingBox=executeSpace, targetLocales=targets) = executeSpace;
    var executeGrid: [D] atomic int(8);
    return executeGrid;
  }

  proc init_atomicGrid(totalWidth, totalSteps) {
    const atomicSpace = {1..totalWidth, 1..totalSteps*totalWidth};
    const localAtomicSpace = {1..numLocales, 1..1};
    var targets: [localAtomicSpace] locale;
    forall i in 1..numLocales {
      targets[(i,1)] = Locales[i - 1];
    }
    const D: domain(2) dmapped Block(boundingBox=atomicSpace, targetLocales=targets) = atomicSpace;
    var atomicGrid: [D] atomic int(8);
    return atomicGrid;
  }

  proc init_depenGrid(totalWidth, dataSize, totalSteps) {
    const depenSpace = {1..totalWidth, 1..dataSize*totalSteps};
    const localDepenSpace = {1..numLocales, 1..1};
    var targets: [localDepenSpace] locale;
    forall i in 1..numLocales {
      targets[(i,1)] = Locales[i - 1];
    }
    const D: domain(2) dmapped Block(boundingBox=depenSpace, targetLocales=targets) = depenSpace;
    var depenGrid: [D] int(8);
    return depenGrid;
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
      assert(j == args[i].length);
      curr[j] = 0;
      result[i] = curr;
    }
    result[argc] = nil;
    return result;
  }

/*
 * Function: add_to_cube this method adds three arrays/ grid/ slice of cube to a cube of ints 
 * Return: no return but the cube is updated
 */
 proc add_to_tasksGrid(tasksGrid, tmpArray, depenGrid, dataSize, currWidth, step) {
  forall i in 1..dataSize {
    tasksGrid[(currWidth,i + (dataSize:int*(step)))] = depenGrid[(currWidth,i + (dataSize:int*(step)))];
  } 
 }

