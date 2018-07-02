CC         = mpiCC

CFLAGS     = -g -O0 -g3 -std=c++11 -D_GNU_SOURCE -Wsubobject-linkage

CORE       = core.cc

all: nonblock basic broadcast alltoall

nonblock: nb_mpi_api.cc core.cc
        $(CC) $(CFLAGS) $^ -o $@

basic: basic_mpi_api.cc core.cc
        $(CC) $(CFLAGS) $^ -o $@

broad: broad_mpi_api.cc core.cc
        $(CC) $(CFLAGS) $^ -o $@

alltoall: alltoall_mpi_api.cc core.cc
        $(CC) $(CFLAGS) $^ -o $@

clean:
        rm -f *.o
        rm *~
