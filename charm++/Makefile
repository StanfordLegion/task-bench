BIN=benchmark

CHARM_DIR ?= ../deps/charm++
CHARMC ?= $(CHARM_DIR)/bin/charmc

.PHONY: all
all: $(BIN)


$(BIN): main.o subchare.o vectorWrapper.o
	$(CHARMC) -language charm++ -o $@ main.o subchare.o vectorWrapper.o -L../core -lcore_s

main.o : main.C main.h main.decl.h main.def.h subchare.decl.h
	$(CHARMC) -optimize -o main.o main.C

main.decl.h main.def.h : main.ci
	$(CHARMC) main.ci

main.h : subchare.decl.h

subchare.o : subchare.C subchare.h subchare.decl.h subchare.def.h main.h main.decl.h
	$(CHARMC) -optimize -o subchare.o subchare.C

subchare.decl.h subchare.def.h : subchare.ci
	$(CHARMC) subchare.ci

vectorWrapper.o : vectorWrapper.h vectorWrapper.cc
	$(CHARMC) -optimize -o vectorWrapper.o -std=c++11 -c vectorWrapper.cc

clean:
	rm -f main.decl.h main.def.h main.o
	rm -f subchare.decl.h subchare.def.h subchare.o
	rm -f $(BIN) charmrun
	rm -rf $(BIN).dSYM
	rm -f charmrun.*
