CC         = mpiCC

CFLAGS     = -g -O0 -g3 -std=c++11 -D_GNU_SOURCE -Wsubobject-linkage

CORE       = ../core/core.cc

all: nonblock basic broadcast alltoall

nonblock: nb_mpi_api.cc ../core/core.cc ../core/core.h
        $(CC) $(CFLAGS) $< $(CORE) -o $@

basic: basic_mpi_api.cc ../core/core.cc ../core/core.h
        $(CC) $(CFLAGS) $< $(CORE) -o $@

broad: broad_mpi_api.cc ../core/core.cc ../core/core.h
        $(CC) $(CFLAGS) $< $(CORE) -o $@

alltoall: alltoall_mpi_api.cc ../core/core.cc ../core/core.h
        $(CC) $(CFLAGS) $< $(CORE) -o $@

clean:
        rm -f *.o
        rm *~
        rm nonblock
        rm basic
        rm broad
        rm alltoall
