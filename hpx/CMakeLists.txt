# Copyright (c) 2021 Nanmiao Wu
# Copyright (c) 2021 Nikunj Gupta

cmake_minimum_required(VERSION 3.17)

project(TaskBench CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

# Setting up dependencies
find_package(HPX REQUIRED)

link_directories(${CMAKE_SOURCE_DIR}/../core)


add_executable(hpx_distributed hpx_distributed.cc)
target_link_libraries(hpx_distributed PUBLIC HPX::hpx HPX::wrap_main core_s)
