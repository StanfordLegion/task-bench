TaskBench: TaskBench.x10
	x10c++ -O -x10rt mpi $< -post '# # -I../core -std=c++11 # -L../core -lcore_s'

.PHONY: clean
clean:
	rm a.out *.h *.cc
