#include "DroneEstacionamiento.h"

DroneEstacionamiento::DroneEstacionamiento() {
    this->zona_carga = 0;
}

void DroneEstacionamiento::leer(ifstream &arch) {
    Drone::leer(arch);
    int zona_carga_buffer;
    arch >> zona_carga_buffer;
    this->zona_carga = zona_carga_buffer;
}
