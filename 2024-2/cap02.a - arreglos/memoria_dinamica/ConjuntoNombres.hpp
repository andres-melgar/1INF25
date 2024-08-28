#ifndef CONJUNTONOMBRES_HPP
#define CONJUNTONOMBRES_HPP
#define TAMANHO_DE_BLOQUE 5

typedef struct{
    char **conjunto;
    int cantidad; //este campo indica el número de elementos usados en el conjunto de datos
    int capacidad; //este campo indica el número de elementos disponibles en el conjunto de datos
} ConjuntoNombres;

void leer_nombres_metodo_incremento(ConjuntoNombres &conjuntoNombres, const char *nombreDeArchivo);

void operator++(ConjuntoNombres &conjuntoNombres);

void operator<<(ConjuntoNombres &conjuntoNombres, char *nombre);

#endif /* CONJUNTONOMBRES_HPP */

