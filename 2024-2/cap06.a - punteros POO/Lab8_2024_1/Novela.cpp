#include "Novela.hpp"

Novela::Novela() {
}

Novela::Novela(const Novela& orig) {
}

Novela::~Novela() {
}

void Novela::lee(){
    Libro::lee();
    //TODO: luego viene la lectura específica de novela
}

void Novela::imprime(){
    Libro::imprime();
    //TODO: luego viene la impresión específica de novela
}

void Novela::actualiza(){
    
}