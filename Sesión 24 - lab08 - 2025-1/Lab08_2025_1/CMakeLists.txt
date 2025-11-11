cmake_minimum_required(VERSION 4.0)
project(Lab08_2025_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab08_2025_1 main.cpp
        Drone.h
        Drone.cpp
        Comunes.cpp
        DroneSemaforo.h
        DroneSemaforo.cpp
        DroneEstacionamiento.h
        DroneEstacionamiento.cpp
        DroneVelocidad.h
        DroneVelocidad.cpp
        Nodo.cpp
        Nodo.h
        Arbol.cpp
        Arbol.h
        Central.cpp
        Central.h)
