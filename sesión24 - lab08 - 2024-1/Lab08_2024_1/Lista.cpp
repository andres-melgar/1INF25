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


void Lista::insertar(char tipo_libro, int capacidad, ifstream &archivo_de_libros){
    Nodo *ptrNodoNuevo = new Nodo(tipo_libro);
    ptrNodoNuevo->leer_datos_del_libro(archivo_de_libros); //llamada al polimorfismo
    if ((this->peso+ptrNodoNuevo->GetPeso()) <= capacidad){
        //insertamos en la lista
        if (this->fin != nullptr)
            this->fin = ptrNodoNuevo;
        else
            this->ini = ptrNodoNuevo;
        this->fin = ptrNodoNuevo;
    } else{
        //insertamos en otro estante
    }
}