cmake_minimum_required(VERSION 4.0)
project(codigo_dev)

set(CMAKE_CXX_STANDARD 20)

add_executable(codigo_dev main.cpp
        Canal.cpp
        Canal.h
        Categoria.cpp
        Categoria.h
        Etiqueta.cpp
        Etiqueta.h
        Comunes.cpp
        Comunes.h
        GestorCanales.cpp
        GestorCanales.h)
