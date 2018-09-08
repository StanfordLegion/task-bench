two_input.so: two_input.cc
	bash -c "g++ -std=c++11 -shared two_input.cc -o two_input.so -fPIC $${TF_CFLAGS[@]} $${TF_LFLAGS[@]} -L../../../core -lcore -O2"

clean:
	rm -f two_input.so
