LEGION_DIR ?= ../deps/legion
OUTFILE := task_bench

$(OUTFILE): main.rg
	SAVEOBJ=1 STANDALONE=1 OBJNAME=$(OUTFILE) INCLUDE_PATH=../core $(LEGION_DIR)/language/regent.py main.rg

.PHONY: clean
clean:
	rm -f $(OUTFILE) *.so
