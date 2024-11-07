#include "Libro.hpp"

Libro::Libro() {
}

double Libro::getPeso() const {
    return peso;
}

Libro::Libro(const Libro& orig) {
}

Libro::~Libro() {
}

void Libro::lee(){
    //TODO
    //lectura de los campos: nombre, páginas y peso
    //que son comunes para todas las clases
}

void Libro::imprime(){
    //TODO
    //imprime los campos: nombre, páginas y peso
    //que son comunes para todas las clases
}

//void Libro::actualiza(){
    //¿Qué coloco acá si no tengo ni año ni vigencia??
    //no hay nada que colocar, entonces el método no puede tener 
    //implementación.
//}
