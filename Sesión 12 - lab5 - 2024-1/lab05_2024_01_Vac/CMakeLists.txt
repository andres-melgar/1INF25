cmake_minimum_required(VERSION 4.0)
project(lab05_2024_01)

set(CMAKE_CXX_STANDARD 20)

add_executable(lab05_2024_01 main.cpp
        comunes.cpp
        comunes.h
        BibliotecaGenerica.cpp
        BibliotecaGenerica.h
        FuncionesEnteras.cpp
        FuncionesEnteras.h
        FuncionesRegistros.cpp
        FuncionesRegistros.h)

#para indicar los headers
#target_include_directories(lab05_2024_01 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaApertura)

#para indicar la libreria
target_link_directories(lab05_2024_01 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaApertura)

#para enlazar al libreria
target_link_libraries(lab05_2024_01 PRIVATE apertura_archivos)