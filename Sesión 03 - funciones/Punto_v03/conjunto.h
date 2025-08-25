#ifndef PUNTO_V03_CONJUNTO_H
#define PUNTO_V03_CONJUNTO_H
#include "punto.h"

typedef struct {
    TPunto valores[100];
    int cantidad;
} ConjuntoDatosPuntos;

void cargar_conjunto_de_puntos(ConjuntoDatosPuntos &conjunto, char *nombre_archivo);

void imprimir_conjunto_de_puntos(const ConjuntoDatosPuntos &conjunto);
#endif //PUNTO_V03_CONJUNTO_H