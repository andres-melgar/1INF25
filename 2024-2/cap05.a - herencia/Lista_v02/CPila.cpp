#include <iostream>
#include <cstdarg>
#include "CLista.hpp"
#include "CPila.hpp"

using namespace std;

CPila::CPila() : CLista() {
    cout << "constructor sin parámetros CPila" << endl;
}

CPila::CPila(int cantidad, ...) : CLista(AL_INICIO, 0) {
    cout << "constructor con parámetros CPila" << endl;

    va_list ap;
    va_start(ap, cantidad);
    for (int i = 0; i < cantidad; i++) {
        double valor = va_arg(ap, double);
        this->apilar(valor);
    }
}

void CPila::apilar(double elemento) {
    this->insertar(elemento);
}

double CPila::desapilar() {
    return this->eliminarCabeza();
}