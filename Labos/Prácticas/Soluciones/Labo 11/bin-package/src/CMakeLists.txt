cmake_minimum_required(VERSION 3.9)
project(bin-package)

set(CMAKE_CXX_STANDARD 11)

add_executable(bin-package main.cpp)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
