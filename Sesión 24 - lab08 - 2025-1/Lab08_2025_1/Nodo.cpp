#include "Nodo.h"

Nodo::Nodo() {
    this->drone = nullptr;
    this->izq = nullptr;
    this->der = nullptr;
}

Nodo::~Nodo() {
    if (this->drone != nullptr) {
        delete this->drone;
    }
    if (this->izq != nullptr) {
        delete this->izq;
    }
    if (this->der != nullptr) {
        delete this->der;
    }
}
