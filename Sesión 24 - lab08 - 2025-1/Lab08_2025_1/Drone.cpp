#include <fstream>
#include "Drone.h"
#include "Comunes.h"

using namespace std;

Drone::Drone() {
    this->inicializar();
}

Drone::~Drone() {
    this->liberar();
}

char * Drone::getId() {
    return mi_strdup(this->id);
}

void Drone::leer(ifstream &arch) {
    char codigo_buffer[6];
    char ubicacion_buffer[100];
    int capacidad_buffer;

    arch.getline(codigo_buffer, 6, ',');
    arch.getline(ubicacion_buffer, 6, ',');
    arch >> capacidad_buffer;
    arch.get();
    this->id = mi_strdup(codigo_buffer);
    this->ubicacion = mi_strdup(ubicacion_buffer);
    this->capacidad = capacidad_buffer;
}

void Drone::inicializar() {
    this->id = nullptr;
    this->ubicacion = nullptr;
    this->capacidad = 0;

}

void Drone::liberar() {
    liberar_cadena(this->id);
    liberar_cadena(this->ubicacion);
}
