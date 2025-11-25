cmake_minimum_required(VERSION 4.0)
project(code)

set(CMAKE_CXX_STANDARD 20)

add_executable(code main.cpp
        Infraccion.cpp
        Infraccion.h
        Vehiculo.cpp
        Vehiculo.h
        Multa.cpp
        Multa.h
        Empresa.cpp
        Empresa.h
        Comunes.cpp
        MinisterioDeTransporte.cpp
        MinisterioDeTransporte.h)
