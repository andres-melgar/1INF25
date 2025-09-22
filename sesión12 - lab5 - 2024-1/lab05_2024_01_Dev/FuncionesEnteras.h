#ifndef LAB05_2024_01_FUNCIONESENTERAS_H
#define LAB05_2024_01_FUNCIONESENTERAS_H

#include <fstream>

using namespace std;

void *leenum(ifstream &archivo_de_enteros);

void imprimenum(ofstream &archivo_de_enteros, void *ptrEntero);

bool cmpnum(void *ptrEnteroA, void *ptrEnteroB);

#endif //LAB05_2024_01_FUNCIONESENTERAS_H