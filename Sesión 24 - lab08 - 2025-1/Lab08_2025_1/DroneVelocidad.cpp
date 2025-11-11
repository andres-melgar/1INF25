#include "DroneVelocidad.h"

DroneVelocidad::DroneVelocidad() {
    this->velocidad_maxima_permitida = 0;
}

void DroneVelocidad::leer(ifstream &arch) {
    Drone::leer(arch);
}
