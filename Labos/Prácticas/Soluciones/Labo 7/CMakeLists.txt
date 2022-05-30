cmake_minimum_required(VERSION 3.22)
project(Labo7)

#set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)

set(CMAKE_CXX_FLAGS -std=c++17)

set(SOURCE_FILES main.cpp
        cases.cpp
        cases.h
        ejercicios.cpp
        ejercicios.h
        test/productoVectorialTEST.cpp
        test/traspuestaTEST.cpp
        test/multiplicarTEST.cpp
        test/promediarTEST.cpp
        test/contarPicosTEST.cpp
        test/esTriangularTEST.cpp
        test/hayAmenazaTEST.cpp
        test/diferenciaDiagonalesTEST.cpp
        test/tatetiTEST.cpp
        )

add_executable(Labo7 ${SOURCE_FILES})

target_link_libraries(Labo7 gtest gtest_main)
