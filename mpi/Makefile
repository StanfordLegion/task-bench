Cxx         = mpicxx

CxxFLAGS     = -g -O0 -g3 -std=c++11 -DMPI_TIMING

CORE       = ../core/core.cc ../core/core_kernel.cc

all: nonblock basic bcast alltoall buffered_send

nonblock: nonblocking.cc $(CORE) ../core/core.h ../core/core_kernel.h
	$(Cxx) $(CxxFLAGS) $< $(CORE) -o $@

basic: basic.cc $(CORE) ../core/core.h ../core/core_kernel.h
	$(Cxx) $(CxxFLAGS) $< $(CORE) -o $@
	
buffered_send: buffered_send.cc $(CORE) ../core/core.h ../core/core_kernel.h
	$(Cxx) $(CxxFLAGS) $< $(CORE) -o $@

bcast: bcast.cc $(CORE) ../core/core.h ../core/core_kernel.h
	$(Cxx) $(CxxFLAGS) $< $(CORE) -o $@

alltoall: alltoallv.cc $(CORE) ../core/core.h ../core/core_kernel.h
	$(Cxx) $(CxxFLAGS) $< $(CORE) -o $@

clean:
	rm -f *.o
	rm -f nonblock
	rm -f basic
	rm -f bcast
	rm -f alltoall
