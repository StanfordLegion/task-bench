CHARM_DIR ?= ../deps/charm++
CHARMC ?= $(CHARM_DIR)/bin/charmc

default: all
all: subchare


subchare : main.o subchare.o core.o core_c.o core_kernel.o vectorWrapper.o
	$(CHARMC) -language charm++ -g -o benchmark main.o subchare.o core.o core_c.o core_kernel.o vectorWrapper.o

main.o : main.C main.h main.decl.h main.def.h subchare.decl.h ../core/core.h ../core/timer.h
	$(CHARMC) -optimize -o main.o main.C

main.decl.h main.def.h : main.ci
	$(CHARMC) main.ci

main.h : subchare.decl.h ../core/core.h

subchare.o : subchare.C subchare.h subchare.decl.h subchare.def.h main.h main.decl.h ../core/core.h
	$(CHARMC) -optimize -o subchare.o subchare.C

subchare.decl.h subchare.def.h : subchare.ci
	$(CHARMC) subchare.ci

vectorWrapper.o : vectorWrapper.h
	$(CHARMC) -optimize -o vectorWrapper.o -std=c++11 -c vectorWrapper.cc

core.o : ../core/core.h
	$(CHARMC) -optimize -o core.o -std=c++11 -c ../core/core.cc

core_c.o : ../core/core_c.h
	$(CHARMC) -optimize -o core_c.o -std=c++11 -c ../core/core_c.cc

core_kernel.o : ../core/core_kernel.h
	$(CHARMC) -optimize -o core_kernel.o -std=c++11 -c ../core/core_kernel.cc

clean:
	rm -f main.decl.h main.def.h main.o
	rm -f subchare.decl.h subchare.def.h subchare.o
	rm -f benchmark charmrun
	rm -rf benchmark.dSYM
	rm -f core.o core_c.o core_kernel.o vectorWrapper.o
	rm -f charmrun.*
