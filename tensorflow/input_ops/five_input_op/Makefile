five_input.so: five_input.cc
	bash -c "g++ -std=c++11 -shared five_input.cc -o five_input.so -fPIC $${TF_CFLAGS[@]} $${TF_LFLAGS[@]} -L../../../core -lcore -O2"

clean:
	rm -f five_input.so
