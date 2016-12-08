cmake_minimum_required(VERSION 3.5)
project(Triangle)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Triangle.cpp Triangle.h)
add_executable(Triangle ${SOURCE_FILES})
