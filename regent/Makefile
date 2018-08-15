LEGION_DIR ?= ../deps/legion
SHARD_SIZE ?= 20

main: main.rg
	SAVEOBJ=1 STANDALONE=1 INCLUDE_PATH=../core $(LEGION_DIR)/language/regent.py main.rg -fflow-spmd 1 -fflow-spmd-shardsize $(SHARD_SIZE)
