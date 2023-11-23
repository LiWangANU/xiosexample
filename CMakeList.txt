cmake_minimum_required(VERSION 3.0)
project(xios_example)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# Source files
set(SRC src/xios_example.cpp)

# Executable
add_executable(xios_example ${SRC})
