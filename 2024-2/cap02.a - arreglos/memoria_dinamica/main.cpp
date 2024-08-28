#include <cstdlib>
#include <cstring>
#include <assert.h>
#include "ConjuntoNumeros.hpp"
#include "ConjuntoNombres.hpp"

using namespace std;

void test01();
void test02();
void test03();

int main(int argc, char** argv) {
    test03();
    return 0;
}

void test03(){
    ConjuntoNombres conjuntoNombres;
    
    leer_nombres_metodo_incremento(conjuntoNombres, "nombres.txt");
    
    assert(conjuntoNombres.cantidad==105);
    assert(strcmp(conjuntoNombres.conjunto[0], "Abel")==0);
    assert(strcmp(conjuntoNombres.conjunto[1], "Abigail")==0);
    assert(strcmp(conjuntoNombres.conjunto[31], "Gianina")==0);
    assert(strcmp(conjuntoNombres.conjunto[104], "Zulma")==0);
}

void test02(){
    ConjuntoNumeros conjuntoNumeros;
    leer_numeros_metodo_incremento_en_uno(conjuntoNumeros, "numeros.txt");
    
    assert(conjuntoNumeros.cantidad==40);
    assert(conjuntoNumeros.conjunto[0]==34);
    assert(conjuntoNumeros.conjunto[1]==56);
    assert(conjuntoNumeros.conjunto[39]==27);
}

void test01(){
    ConjuntoNumeros conjuntoNumeros;
    leer_numeros_metodo_exacto(conjuntoNumeros, "numeros.txt");
    
    assert(conjuntoNumeros.cantidad==40);
    assert(conjuntoNumeros.conjunto[0]==34);
    assert(conjuntoNumeros.conjunto[1]==56);
    assert(conjuntoNumeros.conjunto[39]==27);
}

