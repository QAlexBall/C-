cmake_minimum_required(VERSION 3.13)
project(OpenCV)

find_package( OpenCV REQUIRED )
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(OpenCV_DIR /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/cmake/opencv4)
add_executable(OpenCV main.cpp)
include_directories( ${OpenCV_INCLUDE_DIRS})
target_link_libraries(OpenCV ${OpenCV_LIBS})
