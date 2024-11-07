#include "Enciclopedia.hpp"

Enciclopedia::Enciclopedia() {
}

Enciclopedia::Enciclopedia(const Enciclopedia& orig) {
}

Enciclopedia::~Enciclopedia() {
}

void Enciclopedia::lee(){
    Libro::lee();
    //TODO: luego viene la lectura específica de enciclopedia
}

void Enciclopedia::imprime(){
    Libro::imprime();
    //TODO: luego viene la impresión específica de enciclopedia
}

void Enciclopedia::actualiza(){
    if (this->anho <= 2020)
        this->vigencia = 0;
}