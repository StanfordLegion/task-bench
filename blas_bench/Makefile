#==============================================================
#
# Copyright 2018 Los Alamos National Laboratory
# Copyright 2009-2018 The Purdue University and Purdue University
#                     Research Foundation
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# =============================================================

ifndef MKLROOT
$(error MKLROOT variable is not defined, aborting build)
endif

CC := gcc
CFLAGS := -fopenmp -O3 -DMKL_ILP64 -m64 -I${MKLROOT}/include
LDFLAGS := -fopenmp -L${MKLROOT}/lib/intel64 -Wl,--no-as-needed -lmkl_intel_ilp64 -lmkl_sequential -lmkl_core -lpthread -lm -ldl

all: parallel_dgemm

.PRECIOUS: %.c %.o

parallel_dgemm.o: parallel_dgemm.c
	$(CC) -c $(CFLAGS) $<

parallel_dgemm: parallel_dgemm.o
	$(CC) $^ $(LIB) $(LDFLAGS) -o $@ 


clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean