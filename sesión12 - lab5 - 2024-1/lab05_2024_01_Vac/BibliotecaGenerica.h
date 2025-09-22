#ifndef LAB05_2024_01_BIBLIOTECAGENERICA_H
#define LAB05_2024_01_BIBLIOTECAGENERICA_H

#include <fstream>

using namespace std;

void crealista(void *&pedidos, void *(*funcion_de_lectura)(ifstream &), const char *nombre_de_archivo);

void insertalista(void *&pedidos, void *ptrDato);

void imprimelista(void *pedidos, void(*funcion_de_impresion)(ofstream &, void *) , const char *nombre_de_archivo);

void combinalista(void *pedidos1, void *pedidos2, void *&pedidosfinal, bool(*funcion_de_comparacion)(void *, void*));

#endif //LAB05_2024_01_BIBLIOTECAGENERICA_H