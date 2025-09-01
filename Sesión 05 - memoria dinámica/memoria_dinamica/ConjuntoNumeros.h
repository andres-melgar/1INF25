#ifndef MEMORIA_DINAMICA_CONJUNTONUMEROS_H
#define MEMORIA_DINAMICA_CONJUNTONUMEROS_H

typedef struct {
    int *conjunto;
    int cantidad;
} ConjuntoNumeros;

void leer_con_asignacion_exacta(ConjuntoNumeros &conjuntoNumeros, const char *nombre_archivo);

void imprimir_numeros(const ConjuntoNumeros &conjuntoNumeros);

void leer_con_incremento_en_uno(ConjuntoNumeros &conjuntoNumeros, const char *nombre_archivo);

void operator++(ConjuntoNumeros &conjuntoNumeros);

void operator<<(ConjuntoNumeros &conjuntoNumeros, int dato);

#endif //MEMORIA_DINAMICA_CONJUNTONUMEROS_H
