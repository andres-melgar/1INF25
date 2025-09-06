/* 
 * Archivo: main.cpp
 * Autor: Andrés Melgar
 * Fecha: 18 de julio de 2024, 21:09
 */

#include <iostream>
#include <iomanip>
#include <assert.h>
#include "ConjuntoArreglos.h"

using namespace std;

/* 1. Se crea el TAD ConjuntoArreglos. Este conjunto de datos contendrá el arreglo
 *    de código, nombres y cursos. Se almacena la cantidad de elementos de los dos 
 *    primeros arreglos. En caso del último arreglo, no se almacenará la cantidad,
 *    se colocará una marca al final
 */

void test01();

int main(int argc, char** argv) {
    test01();
    return 0;
}

void test01(){
    ConjuntoArreglos conjuntoArreglos;
    cargar_conjunto_de_arreglos(conjuntoArreglos, "Alumnos-Cursos.csv");
    reporte_de_alumnos(conjuntoArreglos, "Reporte_de_alumnos.txt");
}