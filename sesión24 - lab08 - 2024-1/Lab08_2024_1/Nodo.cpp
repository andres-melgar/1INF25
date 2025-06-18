#include "Nodo.hpp"
#include "Libro.hpp"
#include "Enciclopedia.hpp"
#include "Novela.hpp"
#include "Revista.hpp"

Nodo::Nodo(char tipo_libro) {
    Libro *ptrLibro = nullptr;
    switch (tipo_libro){
        case ENCICLOPEDIA:
            ptrLibro = new Enciclopedia();
            break;
        case NOVELA:
            ptrLibro = new Novela();
            break;
        case REVISTA:
            ptrLibro = new Revista();
            break;
    }
    this->plibro = ptrLibro;
    this->sig = nullptr;
}

Nodo::~Nodo() {
    if (this->plibro != nullptr)
        delete this->plibro;
    if (this->sig != nullptr)
        delete this->sig;
    this->plibro = nullptr;
    this->sig = nullptr;
}

Nodo* Nodo::GetSig() const {
    return sig;
}

