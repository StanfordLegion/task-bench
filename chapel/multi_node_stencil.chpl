// number of elements the array will have
config const gridRows = 10;
// nodes are tasks in this case 
config const numTasks = /* numLocales; */ 4; 
config const gridCols = numTasks; 
config const depenGridRows = gridRows;
config const numNeighbors = 3;
config const tasksPerLocale = numTasks / numLocales;
config const numSteps = 1;

proc main() {
	writeln();
	// array of how many tasks that each node should ideally be using
	var tasksArray = find_tasks_num();
	writeln("tasksArray: ", tasksArray);

	var nodeGrid = init_env(tasksArray);
	// have an grid of atomic variables that are all set to 0
	var atomicGrid: [1..numTasks][1..numNeighbors][1..numSteps] atomic int;
	// a cube of all of the neighboring array
	var depenCube: [1..depenGridRows][1..numNeighbors][1..numTasks] int;

	// init the overall nodeGrid here
	print_grid(nodeGrid, gridRows, gridCols);

	// fill in the dependencies for the cube and have the atmoics waiting
	make_depen(depenCube, nodeGrid, atomicGrid, tasksArray);
	print_cube_slice(depenCube, gridRows, numNeighbors, numTasks);
	print_atomic_cube(atomicGrid, numTasks, numNeighbors, numSteps);
}

/*
 * Function: make_depen this method will run a 1d stencil on multiple nodes which makes 
 * 			 			dependencies. This works assuming that we have more than one node.
 * Param: depenCube a cube of data with the depencencies 
 * Param: nodeGrid a grid will of the information that each node contains
 * Param: atomicGrid a grid of atomic varibles fore eah node
 * Return: no return value 
 */
proc make_depen(depenCube, nodeGrid, atomicGrid, tasksArray) {
	coforall loc in Locales {
		on loc {
			var place = find_start_index(here.id, tasksArray);
			//writeln("the frist and second: ", place + 1, " and ", tasksArray[here.id] + place, " id: ", here.id);
			coforall i in (1 + place)..(tasksArray[here.id] + place) {
				writeln("Using locale ", here.id + 1, " of ", numLocales, " and task number ", i, " is running on node ", here.id + 1);
				// hard code two time steps but this is not really what i want
				for j in 1..numSteps {
					writeln("step number: ", j);
					// will alwyas need to bring down the current array
					var currArray = get_from_grid(nodeGrid, i, gridRows);
					if (i == 1) { // first task
						// working on this
						if (j != 1) {
							writeln("waiting on task: ", i);
							// wait for the send
							(atomicGrid[i][2][j-1]).waitFor(1);
							(atomicGrid[i][3][j-1]).waitFor(1);
							// wait for the recieve 
							(atomicGrid[i + 1][1][j-1]).waitFor(1); // after 
							writeln("done waiting on task: ", i);
						} 
						var empty: [1..gridRows] int; // prev is empty
						var nextArray = get_from_grid(nodeGrid, i + 1, gridRows);
						add_to_cube(depenCube, empty, currArray, nextArray, 
							gridRows, numNeighbors, i);
						// update atmoic grid 
						(atomicGrid[i][2][j]).write(1);
						(atomicGrid[i][3][j]).write(1);
					} else if (i == numTasks) { // the last task
						// working on this 
						if (j != 1) {
							writeln("waiting on task: ", i);
							// wait for the send 
							(atomicGrid[i][1][j-1]).waitFor(1);
							(atomicGrid[i][2][j-1]).waitFor(1);
							// wait for the recive
							(atomicGrid[i - 1][3][j-1]).waitFor(1); // before 
							writeln("done waiting on task: ", i);
						} 
						var prevArray = get_from_grid(nodeGrid, i - 1, gridRows);
						var empty: [1..gridRows] int; // next will be empty
						add_to_cube(depenCube, prevArray, currArray, empty,
							gridRows, numNeighbors, i);
						(atomicGrid[i][1][j]).write(1);
						(atomicGrid[i][2][j]).write(1);
					} else { // middle tasks
						// working on this
						if (j != 1) {
							writeln("waiting on task: ", i);
							// wait for the send
							(atomicGrid[i][1][j-1]).waitFor(1);
							(atomicGrid[i][2][j-1]).waitFor(1);
							(atomicGrid[i][3][j-1]).waitFor(1);
							// wait for the recieve 
							(atomicGrid[i - 1][3][j-1]).waitFor(1); // before 
							(atomicGrid[i + 1][1][j-1]).waitFor(1); // after
							writeln("done waiting on task: ", i);
						} 
						var prevArray = get_from_grid(nodeGrid, i - 1, gridRows);
						var nextArray = get_from_grid(nodeGrid, i + 1, gridRows);
						add_to_cube(depenCube, prevArray, currArray, nextArray, 
							gridRows, numNeighbors, i);
						(atomicGrid[i][1][j]).write(1);
						(atomicGrid[i][2][j]).write(1);
						(atomicGrid[i][3][j]).write(1);
					}
				}
			}
		}
	} 
}

proc find_start_index(node, tasksArray) {
	var result = 0;
	if node == 0 then return result;
	for i in 0..node - 1 {
		result += tasksArray[i];
	}
	return result;
}
/*
 * Function: find_tasks_num this method will find how many tasks each node should ideally be using
 * Return: returns an array of ints. each index has a value that reprsents a node and number of tasks
 */
proc find_tasks_num() {
	var result: [0..(numLocales - 1)] int;
	coforall i in 0..(numTasks - 1) {
		result[i % numLocales] += 1;
	}
	return result;
}

/*
 * Function: init_env this method will create a grid that stores the info for each node
 * Return: returns a grid of the inforamation
 */
 proc init_env(tasksArray) {

	var nodeGrid: [1..gridRows][1..gridCols] int; // x rows and y cols 
	for i in 1..numTasks {
		//init an array for this node 
		var tmp = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
		// assign nodeGrid[i] = array;
		add_to_grid(nodeGrid, tmp, i, gridRows);
		//currIndex.add(1);
	}
	return nodeGrid;
}

/*
 * Function: print_cube_slice this method will print each slice out of a cube of data 
 * Param: cube the cube that we want to read from 
 * Param: x the dimension of the cube going down 
 * Param: y the dimension of the cube going across
 * Param: z the dimension of the cube goind inwards
 * Return: no return 
 */
 proc print_cube_slice(cube, x, y, z) {
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

 proc print_atomic_cube(atomicGrid, x, y, z) {
 	writeln();
 	for k in 1..z {
 		writeln("This is what the atomic cube looks like for slice " + k + " ");
 		for i in 1..x {
 			var message = "";
 			for j in 1..y {
 				message += (atomicGrid[i][j][k]).read() + " ";
 			}
 			writeln(message);
 		}
 		writeln();
 	}
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
 * Function: print_grid this method will print a grid of data/ ints
 * Param: curr the grid of ints that we want to print 
 * Param: rows the number of rows in the grid of ints 
 * Param: cols the number of cols in the grid of ints 
 * Return: no return 
 */
 proc print_grid(curr, rows, cols) {
 	writeln();
 	writeln("This is what the grid looks like: ");
 	for i in 1..rows {
 		var message = "";
 		for j in 1..cols {	
 			message += curr[i][j] + " ";
 		}
 		writeln(message);
 	}
 	writeln();
 }

/*
 * Function: add_to_grid this method will add an array to a grid of ints 
 * Param: grid the grid that we want to add an array to
 * Param: currArray the array that we want to add the the grid
 * Param: currIndex the cols of the grid we are adding to 
 * Param: sz the rows of the grid we are adding to
 * Return: no reutrn but the grid is updated 
 */
 proc add_to_grid(grid, currArray, currIndex, sz) {
	// this loop is not as efficent as i would like it to be 
	// is there way to place the array in the grid directly?
 	for i in 1..sz {
 		grid[i][currIndex] = currArray[i];
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
 proc get_from_grid(grid, currIndex, sz) {
	// again this loop is not as efficent as i would like it to be 
	// is there a way to remove the array from the grid directly
 	var tmp: [1..sz] int;
 	for i in 1..sz {
 		tmp[i] = grid[i][currIndex];
 	}
 	return tmp;
 }

/*
 * Function: add_to_cube this method adds three arrays/ grid/ slice of cube to a cube of ints 
 * Param: the first array to add to the cube on the left side of a slice 
 * Param: the second array to add to the cube in the middle slice of a slice 
 * Param: the third array to add to the cube on the right slide of a slice 
 * Params: x, y, z the rows, cols, and depth of the sube respectively
 * Return: no return but the cube is updated
 */
 proc add_to_cube(cube, first, second, third, x, y, z) {
	// not efficent as i would like to it to be since it has to loop over everthing
 	for i in 1..x {
 		for j in 1..y {
 			if j == 1 then cube[i][j][z] = first[i];
 			if j == 2 then cube[i][j][z] = second[i];
 			if j == 3 then cube[i][j][z] = third[i];
 		}
 	}
 }
