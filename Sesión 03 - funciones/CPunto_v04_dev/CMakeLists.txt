cmake_minimum_required(VERSION 4.0)
project(CPunto_v04_dev)

set(CMAKE_CXX_STANDARD 20)

#agreganos los componentes de la libreria
add_library(puntos STATIC LibreriaEstatica/punto.cpp
LibreriaEstatica/conjunto.cpp)

add_executable(CPunto_v04_dev main.cpp)

#le damos nombres a la librería, esta se llama
#puntos, que generará un archivo libpuntos.a
target_link_libraries(CPunto_v04_dev puntos)
