cmake_minimum_required(VERSION 4.0)
project(Lab06_2023_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab06_2023_2 main.cpp
        Cliente.cpp
        Cliente.h
        Comunes.cpp
        Comunes.h
        Pedido.cpp
        Pedido.h
        Producto.cpp
        Producto.h
        ProductoEntregado.cpp
        ProductoEntregado.h
        AperturaDeArchivos.cpp
        AperturaDeArchivos.h
        Almacen.cpp
        Cliente.h
        Almacen.h
)
