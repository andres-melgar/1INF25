#ifndef CONJUNTONUMEROS_HPP
#define CONJUNTONUMEROS_HPP

typedef struct{
    int *conjunto;
    int cantidad;
} ConjuntoNumeros;

void leer_numeros_metodo_exacto(ConjuntoNumeros &conjuntoNumeros, const char *nombreDeArchivo);

void leer_numeros_metodo_incremento_en_uno(ConjuntoNumeros &conjuntoNumeros, const char *nombreDeArchivo);

void operator++(ConjuntoNumeros &conjuntoNumeros);

void operator<<(ConjuntoNumeros &conjuntoNumeros, int dato);

#endif /* CONJUNTONUMEROS_HPP */

