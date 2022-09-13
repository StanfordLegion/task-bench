# Copyright 2021 Nanmiao Wu and Nikunj Gupta
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

cmake_minimum_required(VERSION 3.17)

project(TaskBench C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(HPX REQUIRED)
find_package(MPI REQUIRED)

include(GNUInstallDirs)

link_directories(${CMAKE_SOURCE_DIR}/../core)

add_executable(hpx_distributed hpx_distributed.cc)
target_link_libraries(hpx_distributed PUBLIC HPX::hpx HPX::wrap_main MPI::MPI_C core_s)

install(
  TARGETS hpx_distributed
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
