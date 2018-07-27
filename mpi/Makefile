MPICXX ?= mpicxx

CXXFLAGS ?=
CXXFLAGS += -std=c++11 -I../core
ifeq ($(strip $(DEBUG)),0)
	CXXFLAGS += -O3
else
	CXXFLAGS += -O0 -ggdb
endif

CORE       = ../core/core.cc ../core/core_kernel.cc

all: nonblock basic bcast alltoall buffered_send

nonblock: nonblocking.cc $(CORE) ../core/core.h ../core/core_kernel.h
	$(MPICXX) $(CXXFLAGS) $< $(CORE) -o $@

basic: basic.cc $(CORE) ../core/core.h ../core/core_kernel.h
	$(MPICXX) $(CXXFLAGS) $< $(CORE) -o $@

buffered_send: buffered_send.cc $(CORE) ../core/core.h ../core/core_kernel.h
	$(MPICXX) $(CXXFLAGS) $< $(CORE) -o $@

bcast: bcast.cc $(CORE) ../core/core.h ../core/core_kernel.h
	$(MPICXX) $(CXXFLAGS) $< $(CORE) -o $@

alltoall: alltoallv.cc $(CORE) ../core/core.h ../core/core_kernel.h
	$(MPICXX) $(CXXFLAGS) $< $(CORE) -o $@

clean:
	rm -f *.o
	rm -f nonblock
	rm -f basic
	rm -f bcast
	rm -f alltoall
