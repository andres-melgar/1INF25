cmake_minimum_required(VERSION 4.0)
project(Punto_v03)

set(CMAKE_CXX_STANDARD 20)

add_executable(Punto_v03 main.cpp
        punto.cpp
        conjunto.h
        conjunto.cpp)
