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
find_package(MPI)

include(GNUInstallDirs)

link_directories(${CMAKE_SOURCE_DIR}/../core)

# Build hpx_distributed only if MPI is available
if(MPI_FOUND)
  add_executable(hpx_distributed hpx_distributed.cc)
  target_include_directories(hpx_distributed PRIVATE ${CMAKE_SOURCE_DIR}/../core)
  target_link_libraries(hpx_distributed PUBLIC HPX::hpx HPX::wrap_main MPI::MPI_C core_s)
  set(INSTALL_TARGETS hpx_distributed)
  message(STATUS "MPI found - building hpx_distributed")
else()
  message(STATUS "MPI not found - skipping hpx_distributed")
  set(INSTALL_TARGETS "")
endif()

# New fork_join_executor implementation for intra-node parallelism
add_executable(hpx_task_bench hpx_task_bench.cpp)
target_include_directories(hpx_task_bench PRIVATE ${CMAKE_SOURCE_DIR}/../core)
target_link_libraries(hpx_task_bench PUBLIC HPX::hpx HPX::wrap_main core_s)
list(APPEND INSTALL_TARGETS hpx_task_bench)

if(INSTALL_TARGETS)
  install(
    TARGETS ${INSTALL_TARGETS}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
endif()
