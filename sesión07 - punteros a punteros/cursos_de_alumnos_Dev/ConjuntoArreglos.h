#ifndef CURSOS_DE_ALUMNOS_CONJUNTOARREGLOS_H
#define CURSOS_DE_ALUMNOS_CONJUNTOARREGLOS_H

#include <fstream>

using namespace std;

typedef struct {
    int *codigo;
    char **nombre;
    char ***cursos;
    int cantidad;
} ConjuntoArreglos;

void cargar_conjunto_de_arreglos(ConjuntoArreglos &conjuntoArreglos, const char *nombre_archivo);

void reporte_de_alumnos(ConjuntoArreglos conjuntoArreglos, const char *nombre_archivo);

char *sacar_nombre(ifstream &archivo);

char **sacar_cursos(ifstream &archivo);

#endif //CURSOS_DE_ALUMNOS_CONJUNTOARREGLOS_H