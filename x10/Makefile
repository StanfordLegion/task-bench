X10FLAGS ?=
X10FLAGS += -x10rt mpi

ifeq ($(strip $(DEBUG)),0)
	X10FLAGS += -O
endif

CXXFLAGS ?=
CXXFLAGS += -std=c++11 -I../core

LDFLAGS ?=
LDFLAGS += -L../core -lcore_s

main: TaskBench.x10
	x10c++ $(X10FLAGS) $< -post "# -o $@ # $(CXXFLAGS) # $(LDFLAGS)"

.PHONY: clean
clean:
	rm -f main *.h *.cc
