#ifndef FUNCIONESREGISTROS_HPP
#define FUNCIONESREGISTROS_HPP
#include <fstream>

using namespace std;

void * leeregistro(ifstream &archivo_de_registro);

void imprimeregistro(ofstream &archivo_de_registro, void *ptrRegistro);

bool cmpregistro(void *ptrRegistroA, void *ptrRegistroB);

#endif /* FUNCIONESREGISTROS_HPP */

