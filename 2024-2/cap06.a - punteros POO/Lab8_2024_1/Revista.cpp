#include "Revista.hpp"

Revista::Revista() {
}

Revista::Revista(const Revista& orig) {
}

Revista::~Revista() {
}

void Revista::lee(){
    Libro::lee();
    //TODO: luego viene la lectura específica de revista
}

void Revista::imprime(){
    Libro::imprime();
    //TODO: luego viene la impresión específica de revista
}

void Revista::actualiza() {
    if (this->anho <= 2020)
        this->vigencia = 0;
}
