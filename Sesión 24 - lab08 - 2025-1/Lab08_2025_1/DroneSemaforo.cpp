#include "DroneSemaforo.h"

DroneSemaforo::DroneSemaforo() {
    this->luz_roja = 0;
}

void DroneSemaforo::leer(ifstream &arch) {
    Drone::leer(arch);
}
