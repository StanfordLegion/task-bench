cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(TaskBenchRealm)

find_package(Realm REQUIRED)

add_executable(task_bench main.cc)
target_link_libraries(task_bench PRIVATE Realm::Realm)
target_include_directories(task_bench PRIVATE ${CMAKE_SOURCE_DIR}/../core)
target_link_directories(task_bench PRIVATE ${CMAKE_SOURCE_DIR}/../core)
target_link_libraries(task_bench PRIVATE core_s)
set_target_properties(task_bench PROPERTIES CXX_STANDARD 11 CXX_STANDARD_REQUIRED ON)
