#include <fstream>
#include "Central.h"

#include <cstring>

#include "DroneEstacionamiento.h"
#include "DroneSemaforo.h"
#include "DroneVelocidad.h"

using namespace std;

void Central::carga() {
    ifstream arch("Drones.csv", ios::in);
    while (true) {
        char tipo_drone[50];
        arch.getline(tipo_drone, 50, ',');

        //POLIMORFIMO
        Drone *drone;
        //LIGADURA DINAMICA
        if (strcmp(tipo_drone, "Velocidad"))
            drone = new DroneVelocidad();
        else if (strcmp(tipo_drone, "Semaforo"))
            drone = new DroneSemaforo();
        else
            drone = new DroneEstacionamiento();
        drone->leer(arch);
    }
}

void Central::actualiza() {
}

void Central::muestra() {
}
