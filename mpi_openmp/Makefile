MPICXX ?= mpicxx

DEBUG ?= 0

CXXFLAGS ?=
CXXFLAGS += -fopenmp -std=c++11 -I../core

LDFLAGS ?=
LDFLAGS += -L../core -lcore_s

ifeq ($(strip $(DEBUG)),0)
	CXXFLAGS += -O3
else
	CXXFLAGS += -O0 -ggdb
endif

include ../core/make_blas.mk

BIN := forall

.PHONY: all
all:  $(BIN)

$(BIN): %:%.cc
	$(MPICXX) -o $@ $(CXXFLAGS) $< $(LDFLAGS)

.PHONY: clean
clean:
	rm -f *.o $(BIN)
