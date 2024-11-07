#include "Lista.hpp"

Lista::Lista() {
    this->ini = nullptr;
    this->fin = nullptr;
    this->peso = 0;
}

Lista::Lista(const Lista& orig) {
}

Lista::~Lista() {
    Nodo *ptrRecorrido = this->ini;
    while (ptrRecorrido != nullptr) {
        Nodo *ptrEliminar = ptrRecorrido;
        ptrEliminar = ptrEliminar->GetSig();
        delete ptrEliminar;
    }
    this->ini = nullptr;
    this->fin = nullptr;
    this->peso = 0;
}

void Lista::insertar(char tipo_libro, int capacidad, ifstream &archivo_de_libros) {
    Nodo *ptrNuevoNodo = new Nodo(tipo_libro);
    ptrNuevoNodo->leer_datos_del_libro(archivo_de_libros);

    if ((this->peso + ptrNuevoNodo->GetPeso()) <= capacidad) {
        //lo insertaré en la lista pues hay capacidad
        if (this->fin != nullptr)
            this->fin->SetSig(ptrNuevoNodo);
        else
            this->ini = ptrNuevoNodo;
        this->fin = ptrNuevoNodo;
    } else{
        //no se puede insertar en la lista pues no hay capacidad
        //hay que buscar otra lista en otro estante
    }
}

