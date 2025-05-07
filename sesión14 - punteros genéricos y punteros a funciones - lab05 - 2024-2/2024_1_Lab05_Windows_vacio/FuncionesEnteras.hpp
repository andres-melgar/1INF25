#ifndef FUNCIONESENTERAS_HPP
#define FUNCIONESENTERAS_HPP
#include <fstream>

using namespace std;

void *leenum(ifstream &archivo_de_enteros);

void imprimenum(ofstream &archivo_de_enteros, void *ptrEntero);

bool cmpnum(void *ptrEnteroA, void *ptrEnteroB);

#endif /* FUNCIONESENTERAS_HPP */

