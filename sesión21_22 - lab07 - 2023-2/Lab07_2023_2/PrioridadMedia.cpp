#include "PrioridadMedia.hpp"
#include "Comunes.hpp"

PrioridadMedia::PrioridadMedia() {
    this->descripcion = nullptr;
    this->nueva_fecha_entrega = FECHA_INVALIDA;
}

PrioridadMedia::~PrioridadMedia() {
    libera_cadena(this->descripcion);
}

void PrioridadMedia::lee(ifstream &archivo_de_pedido){
    
}