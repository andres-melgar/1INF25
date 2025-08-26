#include <iostream>
#include "ConjuntoNumeros.h"

void test01();

int main() {
    test01();
    return 0;
}

void test01() {
    ConjuntoNumeros conjuntoNumeros;
    leer_con_asignacion_exacta(conjuntoNumeros, "numeros.txt");
    imprimir_numeros(conjuntoNumeros);
}