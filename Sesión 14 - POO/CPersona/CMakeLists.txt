cmake_minimum_required(VERSION 4.0)
project(CPersona)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPersona main.cpp
        CPersona.cpp
        CPersona.h
        comunes.cpp
        comunes.h)
