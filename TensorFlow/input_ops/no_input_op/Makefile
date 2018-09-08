three_input.so: no_input.cc
	bash -c "g++ -std=c++11 -shared no_input.cc -o no_input.so -fPIC $${TF_CFLAGS[@]} $${TF_LFLAGS[@]} -L../../../core -lcore -O2"

clean:
	rm -f no_input.so
