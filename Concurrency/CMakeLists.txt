cmake_minimum_required(VERSION 3.13)
project(Concurrency)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-g -Wall")
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Threads)
add_executable(Concurrency main.cpp)
target_link_libraries(Concurrency ${CMAKE_THREAD_LIBS_INIT})

add_executable(example1 ThreadManage/example1.cpp)