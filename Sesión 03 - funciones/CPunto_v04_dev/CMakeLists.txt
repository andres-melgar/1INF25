cmake_minimum_required(VERSION 4.0)
project(CPunto_v04_dev)

set(CMAKE_CXX_STANDARD 20)

add_library(puntos STATIC LibreriaEstatica/punto.cpp
LibreriaEstatica/conjunto.cpp)

add_executable(CPunto_v04_dev main.cpp)

target_link_libraries(CPunto_v04_dev puntos)
