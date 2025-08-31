#include <iostream>
#include <iomanip>
#include <fstream>
#include "ConjuntoNumeros.h"

using namespace std;

void leer_con_asignacion_exacta(ConjuntoNumeros &conjuntoNumeros, const char *nombre_archivo) {
    ifstream archivoNumeros(nombre_archivo, ios::in);
    if (not archivoNumeros.is_open()) {
        cout << "El archivo " << nombre_archivo << " no ha podido ser aperturado." << endl;
        exit(10);
    }

    //paso 1 del slide 35
    int buffer[500];
    int cantidad = 0;

    //paso 2 del slide 35
    while (true) {
        int dato;
        archivoNumeros >> dato;
        if (archivoNumeros.eof())
            break;
        buffer[cantidad] = dato;
        cantidad++;
    }

    //paso 3 del slide 35
    conjuntoNumeros.conjunto = new int[cantidad];
    conjuntoNumeros.cantidad = cantidad;

    //paso 4 del slide 35
    for (int i = 0; i < conjuntoNumeros.cantidad; i++) {
        conjuntoNumeros.conjunto[i] = buffer[i];
    }

    archivoNumeros.close();
}

void imprimir_numeros(const ConjuntoNumeros &conjuntoNumeros) {
    for (int i = 0; i < conjuntoNumeros.cantidad; i++) {
        cout << setw(8) << conjuntoNumeros.conjunto[i] << endl;
    }
}

void leer_con_incremento_en_uno(ConjuntoNumeros &conjuntoNumeros, const char *nombre_archivo) {
    ifstream archivoNumeros(nombre_archivo, ios::in);
    if (not archivoNumeros.is_open()) {
        cout << "El archivo " << nombre_archivo << " no ha podido ser aperturado." << endl;
        exit(10);
    }

    //paso 1 del slide 40
    conjuntoNumeros.conjunto = nullptr;
    conjuntoNumeros.cantidad = 0;

    //paso 2 del slide 40
    //  --> se leen todos los datos.
    //  --> En cada iteración se leerá un dato.
    while (true) {
        int dato;
        archivoNumeros >> dato;
        if (archivoNumeros.eof())
            break;
        //paso 2A del slide 40
        //si fuera una funcion: incrementar_bloque_en_uno
        ++conjuntoNumeros;


        //si fuera una funcion: copia bloque y dato
        conjuntoNumeros << dato;
    }

    archivoNumeros.close();
}

void operator++(ConjuntoNumeros &conjuntoNumeros) {
    int *conjunto_anterior = conjuntoNumeros.conjunto;
    conjuntoNumeros.cantidad++;
    conjuntoNumeros.conjunto = new int[conjuntoNumeros.cantidad];

    //paso 2B del slide 40
    for (int i=0; i<conjuntoNumeros.cantidad-1; i++) {
        conjuntoNumeros.conjunto[i] = conjunto_anterior[i];
    }

    //paso 2C del slide 40
    delete [] conjunto_anterior;
}

void operator<<(ConjuntoNumeros &conjuntoNumeros, int dato) {
    conjuntoNumeros.conjunto[conjuntoNumeros.cantidad-1] = dato;
}