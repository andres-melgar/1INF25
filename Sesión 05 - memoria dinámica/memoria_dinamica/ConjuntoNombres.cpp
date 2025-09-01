#include <iostream>
#include <fstream>
#include <cstring>
#include "ConjuntoNombres.h"

using namespace std;

void leer_con_incrementos(ConjuntoNombres &conjuntoNombres, const char *nombre_archivo) {
    ifstream archivoNombres(nombre_archivo, ios::in);
    if (not archivoNombres.is_open()) {
        cout << "El archivo " << nombre_archivo << " no ha podido ser aperturado." << endl;
        exit(10);
    }

    //paso 1 del slide 43
    conjuntoNombres.cantidad = 0;
    conjuntoNombres.capacidad = TAMAÑO_BLOQUE_INICIAL;
    if (TAMAÑO_BLOQUE_INICIAL>0)
        conjuntoNombres.conjunto = new char* [conjuntoNombres.capacidad];
    else
        conjuntoNombres.conjunto = nullptr;

    //paso 2. Se lee cada dato
    char nombre[100];
    while (not archivoNombres.eof()) {
        archivoNombres >> nombre;

        //paso 2A
        ++conjuntoNombres;

        //paso 3A
        conjuntoNombres << nombre;
    }

    archivoNombres.close();
}

void operator++(ConjuntoNombres &conjuntoNombres) {
    conjuntoNombres.cantidad++;

    //paso 2A
    if (conjuntoNombres.cantidad>conjuntoNombres.capacidad) {
        char **conjunto_anterior = conjuntoNombres.conjunto;

        conjuntoNombres.capacidad += TAMANHO_INCREMENTO;
        //paso 2A-1
        conjuntoNombres.conjunto = new char* [conjuntoNombres.capacidad];

        //paso 2A-2
        for (int i=0; i<conjuntoNombres.cantidad-1; i++) {
            //versión 1
            conjuntoNombres.conjunto[i] = conjunto_anterior[i];

            //versión 2
            //conjuntoNombres.conjunto[i] = new char[strlen(conjunto_anterior[i])+1];
            //strcpy(conjuntoNombres.conjunto[i], conjunto_anterior[i]);
            //delete[] conjunto_anterior[i];
        }
        delete [] conjunto_anterior;
    }
}

void operator<<(ConjuntoNombres &conjuntoNombres, char *nombre) {
    conjuntoNombres.conjunto[conjuntoNombres.cantidad-1] = new char[strlen(nombre)+1];
    strcpy(conjuntoNombres.conjunto[conjuntoNombres.cantidad-1], nombre);
}

void imprimir_nombres(const ConjuntoNombres &conjuntoNombres) {
    for (int i=0; i<conjuntoNombres.cantidad; i++) {
        cout << conjuntoNombres.conjunto[i] << endl;
    }
}
