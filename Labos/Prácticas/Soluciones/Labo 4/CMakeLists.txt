cmake_minimum_required(VERSION 3.22)
project(laboDebugging)

set(CMAKE_CXX_STANDARD 14)

add_executable(laboDebugging
        cases.cpp
        cases.h
        ejercicios.cpp
        ejercicios.h
        main.cpp)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})