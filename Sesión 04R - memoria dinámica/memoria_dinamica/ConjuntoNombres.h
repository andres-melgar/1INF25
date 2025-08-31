#ifndef MEMORIA_DINAMICA_CONJUNTONOMBRES_H
#define MEMORIA_DINAMICA_CONJUNTONOMBRES_H
#define TAMAÑO_BLOQUE_INICIAL 5

typedef struct {
    char **conjunto; //representa a un arreglo dinámico de char*
    int cantidad; //cantidad de nombres almacenados
    int capacidad; //cantidad de nombres que se pueden almacenar
} ConjuntoNombres;

void leer_con_incrementos(ConjuntoNombres &conjuntoNombres, const char *nombre_archivo);

#endif //MEMORIA_DINAMICA_CONJUNTONOMBRES_H
