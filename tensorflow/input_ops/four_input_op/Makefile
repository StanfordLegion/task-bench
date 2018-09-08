four_input.so: four_input.cc
	bash -c "g++ -std=c++11 -shared four_input.cc -o four_input.so -fPIC $${TF_CFLAGS[@]} $${TF_LFLAGS[@]} -L../../../core -lcore -O2"

clean:
	rm -f four_input.so
