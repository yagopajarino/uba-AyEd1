cmake_minimum_required(VERSION 3.6)
project(labo10)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)

set(SOURCE_FILES main.cpp
        src/ejercicios.cpp
        src/ejercicios.h
        tests/busquedaBinariaTEST.cpp
        tests/jumpSearchTEST.cpp
        tests/sortTEST.cpp
        tests/menorMasGrandeTEST.cpp
        tests/insertionSortTEST.cpp
        tests/countigSortTEST.cpp
        )

set(CMAKE_CXX_FLAGS -std=c++17)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(labo10 ${SOURCE_FILES})

target_link_libraries(labo10 gtest gtest_main)

