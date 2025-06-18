#include "Lista.hpp"

Lista::Lista() {
    this->inicializar();
}

Lista::~Lista() {
    this->eliminar();
}

void Lista::inicializar(){
    this->ini = nullptr;
    this->fin = nullptr;
    this->peso = 0;
}

void Lista::eliminar(){
    Nodo *ptrRecorrido = this->ini;
    while (ptrRecorrido != nullptr){
        Nodo *ptrEliminar = ptrRecorrido;
        ptrRecorrido = ptrRecorrido->GetSig();
        delete ptrEliminar;
    }
    this->inicializar();
}
