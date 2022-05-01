cmake_minimum_required(VERSION 3.22)
project(Labo_3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)


add_executable(Labo_3
        generador.cpp
        generador.h
        main.cpp
        vectores.cpp
        vectores.h)
