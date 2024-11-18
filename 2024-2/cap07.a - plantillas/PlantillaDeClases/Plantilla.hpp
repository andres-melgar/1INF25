#ifndef PLANTILLA_HPP
#define PLANTILLA_HPP

#include <iostream>

using namespace std;

template <typename T>
class Plantilla {
private:
    T dato;
public:
    void SetDato(T dato);

    T GetDato();

    void leer();

    void imprimir();
};

template <typename T>
void Plantilla<T>::SetDato(T dato){
    this->dato = dato;
}

template <typename T>
T Plantilla<T>::GetDato(){
    return this->dato;
}

template <typename T>
void Plantilla<T>::leer(){
    cin >> this->dato;
}

template <typename T>
void Plantilla<T>::imprimir(){
    cout << this->dato;
    cout << endl;
}

#endif /* PLANTILLA_HPP */

