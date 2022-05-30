cmake_minimum_required(VERSION 3.8)
project(Complejidad)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -ggdb3 -g  -Wno-deprecated-declarations")

set(SOURCE_FILES main.cpp ejercicios.cpp ejercicios.h)
add_executable(Complejidad ${SOURCE_FILES})