#ifndef LAB05_2024_01_FUNCIONESREGISTROS_H
#define LAB05_2024_01_FUNCIONESREGISTROS_H

#include <fstream>

using namespace std;

void * leeregistro(ifstream &archivo_de_registro);

void imprimeregistro(ofstream &archivo_de_registro, void *ptrRegistro);

bool cmpregistro(void *ptrRegistroA, void *ptrRegistroB);

#endif //LAB05_2024_01_FUNCIONESREGISTROS_H