Cxx         = mpicxx

CxxFLAGS     = -g -O0 -g3 -std=c++11 -DMPI_TIMING

CORE       = ../core/core.cc

all: nonblock basic bcast alltoall

nonblock: nonblock.cc ../core/core.cc ../core/core.h
	$(Cxx) $(CxxFLAGS) $< $(CORE) -o $@

basic: basic.cc ../core/core.cc ../core/core.h
	$(Cxx) $(CxxFLAGS) $< $(CORE) -o $@

bcast: bcast.cc ../core/core.cc ../core/core.h
	$(Cxx) $(CxxFLAGS) $< $(CORE) -o $@

alltoall: alltoall.cc ../core/core.cc ../core/core.h
	$(Cxx) $(CxxFLAGS) $< $(CORE) -o $@

clean:
	rm -f *.o
	rm -f nonblock
	rm -f basic
	rm -f bcast
	rm -f alltoall
