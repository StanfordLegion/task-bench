use BlockDist;


proc main() {
	// var array: [1..4][1..10] int;
	// writeln(array); 
	const Space = {1..4, 1..10};
	const D: domain(2) dmapped Block(boundingBox=Space) = Space;
	var A: [D] int;

	forall a in A {
		a = here.id;
	}

	
	writeln(A);
}