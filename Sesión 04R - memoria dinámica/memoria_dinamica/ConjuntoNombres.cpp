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



    archivoNombres.close();
}