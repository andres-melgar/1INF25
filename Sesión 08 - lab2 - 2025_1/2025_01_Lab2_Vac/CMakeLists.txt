cmake_minimum_required(VERSION 4.0)
project(2025_01_Lab2)

set(CMAKE_CXX_STANDARD 20)

add_executable(2025_01_Lab2 main.cpp
        comunes.cpp
        conductores.cpp
        faltas.cpp
        infracciones.cpp)

#para indicar los headers
target_include_directories(2025_01_Lab2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaApertura)

#para indicar la libreria
target_link_directories(2025_01_Lab2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaApertura)

#para enlazar al libreria
target_link_libraries(2025_01_Lab2 PRIVATE apertura_archivos)