#ifndef HERENCIA_FLOTA_H
#define HERENCIA_FLOTA_H
#include "DroneEstacionamiento.h"
#include "DroneSemaforo.h"
#include "DroneVelocidad.h"


class Flota {
private:
    //Drone *drones[20]; <-- si me pidieran esto, sería polimorfismo
    DroneVelocidad drones_velocidad[20];
    DroneSemaforo drones_semaforo[20];
    DroneEstacionamiento drones_estacionamiento[20];
    int n_drones_velocidad;
    int n_drones_semaforo;
    int n_drones_estacionamiento;
public:
    Flota();
};


#endif //HERENCIA_FLOTA_H