#ifndef LAB06_2023_2_APERTURADEARCHIVOS_H
#define LAB06_2023_2_APERTURADEARCHIVOS_H

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Funciones para abrir un archivo y verificar su apertura

// ********************************************************
// LA VARIABLE DE ARCHIVO NO DEBE INVOCAR AL CONSTUCTOR
// ********************************************************

void AperturaDeUnArchivoDeTextosParaLeer(ifstream &archivo,
                                         const char*nombreDelArchivo);

void AperturaDeUnArchivoDeTextosParaEscribir(ofstream &archivo,
                                             const char*nombreDelArchivo);

#endif //LAB06_2023_2_APERTURADEARCHIVOS_H