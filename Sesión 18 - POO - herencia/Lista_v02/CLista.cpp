#include "CLista.h"
#include <iostream>
#include <cstdarg>
#include <cctype>

using namespace std;

CLista::CLista() {
    cout << "CLista constructor sin parámetros" << endl;
    this->cabeza = nullptr;
    this->cola = nullptr;
    this->tipo_de_insercion = AL_INICIO;
    this->longitud = 0;
}

CLista::CLista(char tipo_de_insercion, int cantidad, ...) {
    cout << "CLista constructor con parámetros" << endl;
    this->cabeza = nullptr;
    this->cola = nullptr;
    this->setTipo_de_insercion(tipo_de_insercion);
    this->longitud = 0;

    va_list ap;
    va_start(ap, cantidad);

    for (int i = 0; i < cantidad; ++i) {
        double valor = va_arg(ap, double);
        this->insertar(valor);
    }
}

CLista::~CLista() {
    this->destruir();
}

void CLista::insertar(double valor) {
    this->longitud++;
    switch (this->tipo_de_insercion) {
        case AL_INICIO:
            this->insertar_al_inicio(valor);
            break;
        case EN_ORDEN:
            this->insertar_en_orden(valor);
            break;
        case AL_FINAL:
            this->insertar_al_final(valor);
            break;
    }
}

void CLista::insertar_al_inicio(double valor) {
    TNodo *ptrNuevo;
    ptrNuevo = new TNodo;
    ptrNuevo->valor = valor;
    ptrNuevo->sig = this->cabeza;
    this->cabeza = ptrNuevo;
}

void CLista::insertar_en_orden(double valor) {
    TNodo *ptrRecorrido, *ptrNuevo, *ptrAnterior;
    ptrNuevo = new TNodo;
    ptrNuevo->valor = valor;
    ptrRecorrido = this->cabeza;
    ptrAnterior = nullptr;
    while (ptrRecorrido != nullptr) {
        if (ptrRecorrido->valor > valor) break;
        ptrAnterior = ptrRecorrido;
        ptrRecorrido = ptrRecorrido->sig;
    }
    ptrNuevo->sig = ptrRecorrido;
    if (ptrAnterior != nullptr)
        ptrAnterior->sig = ptrNuevo;
    else
        this->cabeza = ptrNuevo;
}

void CLista::insertar_al_final(double valor) {
    TNodo *ptrNuevo;
    ptrNuevo = new TNodo;
    ptrNuevo->valor = valor;
    ptrNuevo->sig = nullptr;
    if (this->cola != nullptr)
        this->cola->sig = ptrNuevo;
    else {
        this->cabeza = ptrNuevo;
    }
    this->cola = ptrNuevo;
}

double CLista::eliminarCabeza() {
    TNodo* nodo_a_eliminar = this->cabeza;
    if (nodo_a_eliminar != NULL) {
        double valor = this->cabeza->valor;
        this->cabeza = this->cabeza->sig;
        delete nodo_a_eliminar;
        this->longitud--;
        return valor;
    } else {
        cout << "La lista está vacía, no se puede eliminar la cabeza" << endl;
        exit(0);
    }
}

ostream & CLista::imprimir(ostream &out) {
    out << "[";
    TNodo *ptrRecorrido = this->cabeza;
    while (ptrRecorrido != nullptr) {
        if (ptrRecorrido != this->cabeza)
            out << ",";
        out << ptrRecorrido->valor;
        ptrRecorrido = ptrRecorrido->sig;
    }
    out << "]" << endl;
    return out;
}

void CLista::destruir(void) {
    TNodo *ptrBorrar;
    while (this->cabeza) {
        ptrBorrar = this->cabeza;
        this->cabeza = this->cabeza->sig;
        delete ptrBorrar;
    }
    this->cabeza = nullptr;
    this->cola = nullptr;
    this->longitud = 0;
}

bool CLista::estaVacia(void) {
    return cabeza == nullptr;
}

int CLista::getLongitud() const {
    return this->longitud;
}

double CLista::getElementoPorIndice(int indice) {
    if (indice >= 0 and indice<this->longitud) {
        TNodo *ptrRecorrido = this->cabeza;
        for (int i = 0; i < indice; i++) {
            ptrRecorrido = ptrRecorrido->sig;
        }
        return ptrRecorrido->valor;
    } else
        cout << "índice no permitido" << endl;
    exit(1);
}

void CLista::setTipo_de_insercion(char tipo_de_insercion) {
    tipo_de_insercion = toupper(tipo_de_insercion);
    if (tipo_de_insercion != AL_INICIO and tipo_de_insercion != EN_ORDEN and tipo_de_insercion != AL_FINAL)
        this->tipo_de_insercion = AL_INICIO;
    else
        this->tipo_de_insercion = tipo_de_insercion;
}

ostream & operator<<(ostream &out, CLista &lista) {
    return lista.imprimir(out);
}