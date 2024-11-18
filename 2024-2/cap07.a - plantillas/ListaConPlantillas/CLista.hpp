#ifndef CLISTA_HPP
#define CLISTA_HPP

#include <iostream>
#include <fstream>
#include "CNodo.hpp"
#include "AperturaDeArchivos.h"

using namespace std;

template <typename T>
class CLista {
private:
    class CNodo<T> *cabeza;
    class CNodo<T> *cola;
public:
    CLista();
    
    CLista(const char *nombre_archivo);

    virtual ~CLista();

    void insertar(T &dato);

    void imprimir();

    void eliminar();
private:
    void inicializar();
};

template <typename T>
CLista<T>::CLista() {
    this->inicializar();
}

template <typename T>
CLista<T>::CLista(const char *nombre_archivo){
    this->inicializar();
    ifstream archivo;
    AperturaDeUnArchivoDeTextosParaLeer(archivo, nombre_archivo);
    T dato;
    while (true){
        archivo >> dato;
        if (archivo.eof())
            break;
        this->insertar(dato);
    }
    archivo.close();
}

template <typename T>
CLista<T>::~CLista() {
    this->eliminar();
}

template <typename T>
void CLista<T>::insertar(T &dato) {
    class CNodo<T> *ptrNuevo = new CNodo<T>();
    ptrNuevo->dato = dato; //podemos hacer esto por que CLista es amigo de CNodo
    ptrNuevo->siguiente = nullptr;
    if (this->cola != nullptr)
        this->cola->siguiente = ptrNuevo;
    else
        this->cabeza = ptrNuevo;
    this->cola = ptrNuevo;
}

template <typename T>
void CLista<T>::imprimir() {
    class CNodo<T> *ptrRecorrido = this->cabeza;
    while (ptrRecorrido != nullptr) {
        cout << ptrRecorrido->dato;
        cout << endl;
        ptrRecorrido = ptrRecorrido->siguiente;
    }
}

template <typename T>
void CLista<T>::eliminar() {
    class CNodo<T> *ptrSale;
    while (this->cabeza != nullptr) {
        ptrSale = this->cabeza;
        this->cabeza = this->cabeza->siguiente;
        delete ptrSale;
    }
    this->inicializar();
}

template <typename T>
void CLista<T>::inicializar() {
    this->cabeza = nullptr;
    this->cola = nullptr;
}

#endif /* CLISTA_HPP */

