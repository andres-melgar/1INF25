#include "Nodo.hpp"

Nodo::Nodo() {
}

Nodo::Nodo(const Nodo& orig) {
}

Nodo::~Nodo() {
}

void Nodo::SetSig(Nodo* sig) {
    this->sig = sig;
}

Nodo* Nodo::GetSig() const {
    return sig;
}

double Nodo::GetPeso(){
    this->plibro->getPeso();
}
