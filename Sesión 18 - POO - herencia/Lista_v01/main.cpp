#include <iostream>
#include <iomanip>
#include <assert.h>
#include "CLista.h"

using namespace std;

void test01();
void test02();
void test03();
void test04();
void test05();

int main(int argc, char** argv) {
    test01();
    test02();
    test03();
    test04();
    test05();
    return 0;
}

void test05() {
    CLista lista('f', 5, 20.0, 10.0, 50.0, 40.0, 30.0);

    assert(lista.estaVacia() == false);
    assert(lista.getLongitud() == 5);

    assert(lista.eliminarCabeza() == 20);
    assert(lista.getLongitud() == 4);

    assert(lista.eliminarCabeza() == 10);
    assert(lista.getLongitud() == 3);

    assert(lista.eliminarCabeza() == 50);
    assert(lista.getLongitud() == 2);
    assert(lista.eliminarCabeza() == 40);
    assert(lista.getLongitud() == 1);

    assert(lista.eliminarCabeza() == 30);
    assert(lista.getLongitud() == 0);

    cout << lista;
}

void test04() {
    CLista lista('f', 5, 20.0, 10.0, 50.0, 40.0, 30.0);

    assert(lista.estaVacia() == false);
    assert(lista.getLongitud() == 5);

    assert(lista.getElementoPorIndice(0) == 20);
    assert(lista.getElementoPorIndice(1) == 10);
    assert(lista.getElementoPorIndice(2) == 50);
    assert(lista.getElementoPorIndice(3) == 40);
    assert(lista.getElementoPorIndice(4) == 30);

    cout << lista;
}

void test03() {
    CLista lista('o', 5, 20.0, 10.0, 50.0, 40.0, 30.0);

    assert(lista.estaVacia() == false);
    assert(lista.getLongitud() == 5);

    assert(lista.getElementoPorIndice(0) == 10);
    assert(lista.getElementoPorIndice(1) == 20);
    assert(lista.getElementoPorIndice(2) == 30);
    assert(lista.getElementoPorIndice(3) == 40);
    assert(lista.getElementoPorIndice(4) == 50);

    cout << lista;
}

void test02() {
    CLista lista;

    assert(lista.estaVacia());
    assert(lista.getLongitud() == 0);

    lista.insertar(10);
    assert(lista.getLongitud() == 1);

    lista.insertar(20);
    assert(lista.getLongitud() == 2);

    lista.insertar(30);
    assert(lista.getLongitud() == 3);

    assert(lista.getElementoPorIndice(0) == 30);
    assert(lista.getElementoPorIndice(1) == 20);
    assert(lista.getElementoPorIndice(2) == 10);

    cout << lista;
}

void test01() {
    CLista lista;

    assert(lista.estaVacia());
    assert(lista.getLongitud() == 0);
}