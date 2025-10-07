cmake_minimum_required(VERSION 4.0)
project(Punto_v01)

set(CMAKE_CXX_STANDARD 20)

add_executable(Punto_v01 main.cpp
        CPunto2D.cpp
        CPunto2D.h
        CPoligono.cpp
        CPoligono.h)
