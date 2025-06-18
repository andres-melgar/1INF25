#include "Novela.hpp"
#include "Comunes.hpp"

Novela::Novela() {
    this->autor = nullptr;
}

Novela::~Novela() {
    libera_cadena(this->autor);
}

void Novela::lee(ifstream &archivo_de_libros){
    
}
    
void Novela::actualiza(){
    
}
    
void Novela::imprime(){
    
}