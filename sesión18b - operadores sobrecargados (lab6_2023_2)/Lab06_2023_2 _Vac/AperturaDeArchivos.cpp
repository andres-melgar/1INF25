#include <iostream>
#include <fstream>
#include "AperturaDeArchivos.h"

using namespace std;

void AperturaDeUnArchivoDeTextosParaLeer(ifstream &archivo,
        const char*nombreDelArchivo) {
    archivo.open(nombreDelArchivo, ios::in);
    if (not archivo.is_open()) {
        cout << "ERROR: No se pudo abrir el archivo " << nombreDelArchivo << endl;
        exit(1);
    }
}

void AperturaDeUnArchivoDeTextosParaEscribir(ofstream &archivo,
        const char*nombreDelArchivo) {
    archivo.open(nombreDelArchivo, ios::out);
    if (not archivo.is_open()) {
        cout << "ERROR: No se pudo abrir el archivo " << nombreDelArchivo << endl;
        exit(1);
    }
}