cmake_minimum_required (VERSION 3.14.5)
project (exercise_cpp11)


set(CMAKE_CXX_STANDARD 11)

add_executable(exercise_cpp11 std_forward_test.cpp)
add_executable(unique_lock_test unique_lock_test.cc)
add_executable(list_back_test list_back_test.cpp)