#include "Drone.h"
#include "Comunes.h"

Drone::Drone() {
    this->inicializar();
}

Drone::~Drone() {
    this->liberar();
}

void Drone::inicializar() {
    this->id = nullptr;
    this->ubicacion = nullptr;
    this->capacidad = 0;
    this->cantidad_infraciones = 0;

}

void Drone::liberar() {
    liberar_cadena(this->id);
    liberar_cadena(this->ubicacion);
}
