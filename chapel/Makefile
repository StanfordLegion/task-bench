CHAPEL ?= chpl

BIN=task_benchmark
SRC=task_benchmark.chpl

CHAPEL_FLAGS ?=
ifeq ($(strip $(DEBUG)),0)
	CHAPEL_FLAGS += --fast
endif
CHAPEL_FLAGS += --static -I../core -L../core -lcore

.PHONY: all
all: $(BIN)

$(BIN): $(SRC)
	rm -f $@
	$(CHAPEL) $(CHAPEL_FLAGS) -o $@ $<

.PHONY: clean
clean:
	rm -f $(BIN)
