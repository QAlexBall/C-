cmake_minimum_required(VERSION 3.8)
project(NetWorkC)
set(CMAKE_CXX_STANDARD 11)

set(OpenGL_GL_PREFERENCE "GLVND")
find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})

find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIR})

find_package(glfw3 3.2 REQUIRED)
include_directories(${glfw3_INCLUDE_DIR})


set(CMAKE_CXX_FLAGS "-g -Wall")

set(SOURCE_FILES opengl.cpp)
add_executable(NetWorkC opengl.cpp)
target_include_directories(NetWorkC PUBLIC ${OPENGL_INCLUDE_DIR})
target_link_libraries(NetWorkC ${GLUT_LIBRARY} ${OPENGL_LIBRARY} glfw GLEW)
#target_link_libraries(NetWorkC ${GLUT_LIBRARY} ${OPENGL_LIBRARY} glfw GLEW GLU GL)

