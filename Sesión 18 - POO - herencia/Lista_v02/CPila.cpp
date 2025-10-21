#include "CPila.h"

#include <cstdarg>
#include <iostream>

using namespace std;

CPila::CPila() {
    cout << "CPila constructor sin parámetros" << endl;
}

CPila::CPila(int cantidad, ...): CLista(AL_INICIO, 0) {
    cout << "CPila constructor con parámetros" << endl;
    va_list ap;
    va_start(ap, cantidad);
    for (int i = 0; i < cantidad; i++) {
        double valor = va_arg(ap, double);
        this->insertar(valor);
    }
}
