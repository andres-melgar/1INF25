#include "Estante.hpp"

Estante::Estante() {
    this->clase = ESTANTE_HORIZONTAL;
    this->id = ID_INVALIDO;
    this->capacidad = 0;    
}

Estante::Estante(char clase, int id, double capacidad){
    this->clase = clase;
    this->id = id;
    this->capacidad = capacidad;    
}

