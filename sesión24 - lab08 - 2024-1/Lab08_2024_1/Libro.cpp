#include "Libro.hpp"
#include "Comunes.hpp"

Libro::Libro() {
    this->nombre = nullptr;
    this->paginas = 0;
    this->peso = 0;
}

Libro::~Libro() {
    libera_cadena(this->nombre);
}

void Libro::lee(ifstream &archivo_de_libros){
    
}
    
void Libro::imprime(){
    
}

