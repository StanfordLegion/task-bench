LEGION_DIR ?= ../deps/legion
SHARD_SIZE ?= 20
OUTFILE := main.shard$(SHARD_SIZE)

$(OUTFILE): main.rg
	SAVEOBJ=1 STANDALONE=1 OBJNAME=$(OUTFILE) INCLUDE_PATH=../core $(LEGION_DIR)/language/regent.py main.rg -fflow-spmd 1 -fflow-spmd-shardsize $(SHARD_SIZE) -fskip-empty-tasks 0

.PHONY: clean
clean:
	rm -f $(OUTFILE) *.so
