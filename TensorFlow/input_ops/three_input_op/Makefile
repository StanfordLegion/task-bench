three_input.so: three_input.cc
	bash -c "g++ -std=c++11 -shared three_input.cc -o three_input.so -fPIC $${TF_CFLAGS[@]} $${TF_LFLAGS[@]} -L../../../core -lcore -O2"

clean:
	rm -f three_input.so
