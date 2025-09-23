#include <iostream>
#include <fstream>
#include "FuncionesEnteras.h"
#include "comunes.h"

using namespace std;

void * leenum(ifstream &archivo_de_enteros) {
    int dato;
    archivo_de_enteros >> dato;
    if (archivo_de_enteros.eof())
        return nullptr;
    return retorna_referencia_a_entero(dato);
}

void imprimenum(ofstream &archivo_de_enteros, void *ptrEntero) {
    if (ptrEntero != nullptr) {
        archivo_de_enteros << *(int*)ptrEntero<<endl;
    }
}

bool cmpnum(void *ptrEnteroA, void *ptrEnteroB) {
    //TODO
    return false;
}