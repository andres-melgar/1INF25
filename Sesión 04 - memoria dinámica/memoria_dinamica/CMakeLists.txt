cmake_minimum_required(VERSION 4.0)
project(memoria_dinamica)

set(CMAKE_CXX_STANDARD 20)

add_executable(memoria_dinamica main.cpp
        ConjuntoNumeros.h
        ConjuntoNumeros.cpp)
