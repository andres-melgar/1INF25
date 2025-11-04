cmake_minimum_required(VERSION 4.0)
project(Herencia)

set(CMAKE_CXX_STANDARD 20)

add_executable(Herencia main.cpp
        Infraccion.cpp
        Infraccion.h
        Comunes.cpp
        Drone.cpp
        Drone.h
        DroneVelocidad.cpp
        DroneVelocidad.h
        DroneSemaforo.cpp
        DroneSemaforo.h
        DroneEstacionamiento.cpp
        DroneEstacionamiento.h
        Flota.cpp
        Flota.h
        CentralDeMonitoreo.cpp
        CentralDeMonitoreo.h
        MinisterioDeTransportes.cpp
        MinisterioDeTransportes.h)
