#ifndef CONJUNTODEDATOS_HPP
#define CONJUNTODEDATOS_HPP
#include <fstream>

using namespace std;

typedef struct{
    int *codigo;
    char **nombre;
    char ***cursos;
    int cantidad;
} ConjuntoAlumnoYCursos;

void cargar_conjunto_de_alumnos_y_cursos(ConjuntoAlumnoYCursos &conjuntoAlumnoYCursos, const char *nombre_archivo);

char *sacar_nombre(ifstream &archivo);

char **sacar_cursos(ifstream &archivo);

void reporte_de_alumnos(ConjuntoAlumnoYCursos conjuntoAlumnoYCursos, const char *nombre_archivo);

#endif /* CONJUNTODEDATOS_HPP */

