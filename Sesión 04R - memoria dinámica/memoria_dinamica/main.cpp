#include <cassert>
#include <cstring>
#include "ConjuntoNumeros.h"
#include "ConjuntoNombres.h"

void test01();
void test02();
void test03();

int main() {
    //test01();
    //test02();
    test03();
    return 0;
}

void test03() {
    ConjuntoNombres conjuntoNombres;
    leer_con_incrementos(conjuntoNombres, "nombres.txt");

    assert(conjuntoNombres.cantidad==105);
    assert(strcmp(conjuntoNombres.conjunto[0], "Abel")==0);
    assert(strcmp(conjuntoNombres.conjunto[1], "Abigail")==0);
    assert(strcmp(conjuntoNombres.conjunto[31], "Gianina")==0);
    assert(strcmp(conjuntoNombres.conjunto[104], "Zulma")==0);

    imprimir_nombres(conjuntoNobrmes);
}

void test02() {
    ConjuntoNumeros conjuntoNumeros;
    leer_con_incremento_en_uno(conjuntoNumeros, "numeros.txt");
    assert(conjuntoNumeros.cantidad==40);
    assert(conjuntoNumeros.conjunto[0]==34);
    assert(conjuntoNumeros.conjunto[1]==56);
    assert(conjuntoNumeros.conjunto[39]==27);
    imprimir_numeros(conjuntoNumeros);
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