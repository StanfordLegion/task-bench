one_input.so: one_input.cc
	bash -c "g++ -std=c++11 -shared one_input.cc -o one_input.so -fPIC $${TF_CFLAGS[@]} $${TF_LFLAGS[@]} -L../../../core -lcore -O2"

clean:
	rm -f one_input.so
