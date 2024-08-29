#include <iostream>
#include <iomanip>
#include <assert.h>
#include "ConjuntoDeDatos.hpp"

using namespace std;

void test01();

int main(int argc, char** argv) {
    test01();
    return 0;
}

void test01(){
    ConjuntoAlumnoYCursos conjuntoAlumnoYCursos;
    cargar_conjunto_de_alumnos_y_cursos(conjuntoAlumnoYCursos, "Alumnos-Cursos.csv");
    reporte_de_alumnos(conjuntoAlumnoYCursos, "Reporte_de_alumnos.txt");
}