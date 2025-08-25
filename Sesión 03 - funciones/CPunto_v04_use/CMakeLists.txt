cmake_minimum_required(VERSION 4.0)
project(CPunto_v04_use)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPunto_v04_use main.cpp)

target_include_directories(CPunto_v04_use PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaEstatica)

target_link_directories(CPunto_v04_use PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LibreriaEstatica)

target_link_libraries(CPunto_v04_use PRIVATE puntos)


