cmake_minimum_required(VERSION 4.0)
project(2024_01_Lab01_P1_dev)

set(CMAKE_CXX_STANDARD 20)

add_executable(2024_01_Lab01_P1_dev main.cpp
        cliente.cpp
        cliente.h
        libro.cpp
        libro.h
        libro_solicitado.cpp
        libro_solicitado.h
        Estructuras.h)

target_include_directories(2024_01_Lab01_P1_dev PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaApertura)

target_link_directories(2024_01_Lab01_P1_dev PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaApertura)

target_link_libraries(2024_01_Lab01_P1_dev PRIVATE apertura_archivos)