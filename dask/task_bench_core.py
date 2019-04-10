#!/usr/bin/env python
#
# Copyright 2019 Stanford University
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

from __future__ import absolute_import, division, print_function

import cffi
import os
import subprocess

# Hack: This is in its own module to avoid having this get pickled, as
# the CFFI handles are (obviously) unpickleable. By default Dask uses
# cloudpickle to pickle tasks, which appears to do introspection on
# their ASTs to figure out what globals they capture. Fortunately
# cloudpickle does not also try to introspect the contents of locally
# imported modules....

root_dir = os.path.dirname(os.path.dirname(__file__))
core_header = subprocess.check_output(
    ["gcc", "-D", "__attribute__(x)=", "-E", "-P", os.path.join(root_dir, "core/core_c.h")]
).decode("utf-8")
ffi = cffi.FFI()
ffi.cdef(core_header)
c = ffi.dlopen("libcore.so")
