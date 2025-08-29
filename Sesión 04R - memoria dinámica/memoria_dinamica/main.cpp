#include <cassert>
#include "ConjuntoNumeros.h"

void test01();

int main() {
    test01();
    return 0;
}

void test01() {
    ConjuntoNumeros conjuntoNumeros;
    leer_con_asignacion_exacta(conjuntoNumeros, "numeros.txt");
    assert(conjuntoNumeros.cantidad==40);
    assert(conjuntoNumeros.conjunto[0]==34);
    assert(conjuntoNumeros.conjunto[1]==56);
    assert(conjuntoNumeros.conjunto[39]==27);
    imprimir_numeros(conjuntoNumeros);
}