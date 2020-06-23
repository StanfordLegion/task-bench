#==============================================================
#
# Copyright 2020 Los Alamos National Laboratory
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

CC := g++
ST_CFLAGS := -fopenmp -O3 -DMKL_ILP64 -m64 -I${MKLROOT}/include
ST_LDFLAGS := -fopenmp -L${MKLROOT}/lib/intel64 -Wl,--no-as-needed -lmkl_intel_ilp64 -lmkl_sequential -lmkl_core -lpthread -lm -ldl

MT_CFLAGS := -fopenmp -O3 -DMKL_ILP64 -m64 -I${MKLROOT}/include
MT_LDFLAGS :=  -L${MKLROOT}/lib/intel64 -Wl,--no-as-needed -lmkl_intel_ilp64 -lmkl_gnu_thread -lmkl_core -lgomp -lpthread -lm -ldl

all: st_dgemm mt_dgemm

.PRECIOUS: %.c %.o

st_dgemm.o: st_dgemm.cc
	$(CC) -c $(ST_CFLAGS) $<

st_dgemm: st_dgemm.o
	$(CC) $^ $(LIB) $(ST_LDFLAGS) -o $@ 
	
mt_dgemm.o: mt_dgemm.cc
	$(CC) -c $(MT_CFLAGS) $<

mt_dgemm: mt_dgemm.o
	$(CC) $^ $(LIB) $(MT_LDFLAGS) -o $@ 


clean:
	rm -f *.o
	rm -f $(TARGET)

.PHONY: all clean
