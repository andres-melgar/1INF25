#include "PrioridadMedia.hpp"
#include "Comunes.hpp"

PrioridadMedia::PrioridadMedia() {
    this->descripcion = nullptr;
    this->nueva_fecha_entrega = 0;
}

PrioridadMedia::PrioridadMedia(const PrioridadMedia& orig) {
}

PrioridadMedia::~PrioridadMedia() {
    libera_cadena(this->descripcion);
}

