/* Copyright 2018 Stanford University
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "vectorWrapper.h"

VectorWrapper::VectorWrapper(std::vector<std::string> vec) : vec(vec), live(false) { }
VectorWrapper::VectorWrapper() : live(false) { }

char** VectorWrapper::toArgv() {
  argv = new char *[vec.size()];
  for (size_t i = 0; i < vec.size(); i++)
    argv[i] = &vec[i][0];
  live = true;
  return argv;
}

void VectorWrapper::pup(PUP::er &p) { p|vec; }

VectorWrapper::~VectorWrapper() {
  if (live) delete[] argv;
}