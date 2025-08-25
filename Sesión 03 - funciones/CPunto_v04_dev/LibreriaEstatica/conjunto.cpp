#include <fstream>
#include "conjunto.h"

using namespace std;

void cargar_conjunto_de_puntos(ConjuntoDatosPuntos &conjunto, char *nombre_archivo) {
    ifstream arch(nombre_archivo, ios::in);
    if (not arch.is_open()) {
        cout << "No se puede abrir el archivo " << nombre_archivo << endl;
        exit(10);
    }

    conjunto.cantidad = 0;
    while (not arch.eof()) {
        arch >> conjunto.valores[conjunto.cantidad++];
    }
}

void imprimir_conjunto_de_puntos(const ConjuntoDatosPuntos &conjunto) {
    for (int i=0; i<conjunto.cantidad; i++) {
        cout << conjunto.valores[i] << endl;
    }
}