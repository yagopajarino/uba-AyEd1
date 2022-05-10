cmake_minimum_required(VERSION 3.22)
project(laboCiclos)

add_executable(laboCiclos
        cases.cpp
        cases.h
        ejercicios.cpp
        ejercicios.h
        main.cpp)

set(CMAKE_CXX_FLAGS -std=c++17)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})