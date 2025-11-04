#include "MinisterioDeTransportes.h"

#include "Comunes.h"

MinisterioDeTransportes::MinisterioDeTransportes() {
    for (int i=0; i<MAX_ZONAS; i++) {
        this->zonas[i] = nullptr;
    }
}

MinisterioDeTransportes::~MinisterioDeTransportes() {
    for (int i=0; i<MAX_ZONAS; i++) {
        liberar_cadena(this->zonas[i]);
    }
}
