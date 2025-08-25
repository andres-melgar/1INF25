cmake_minimum_required(VERSION 4.0)
project(Punto_v03)

set(CMAKE_CXX_STANDARD 20)

add_executable(Punto_v03 main.cpp)

#indicar los archivos cabecera
target_include_directories(Punto_v03 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaEstatica)

#indicar la librería
target_link_directories(Punto_v03 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaEstatica)

#enlazar la libreria
target_link_libraries(Punto_v03 PRIVATE puntos)
