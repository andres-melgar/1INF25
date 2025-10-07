#include <assert.h>
#include <iostream>
#include <cassert>
#include <cmath>

#include "CPoligono.h"
#include "CPunto2D.h"

using namespace std;

void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();
void test08();

int main() {
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
    test07();
    test08();
    return 0;
}

void test08() {
    cout << "test08" << endl;
    CPoligono poligono;

    assert(poligono.getCantidad_vertices() == 0);

    poligono.agregarVertice(3,4);
    assert(poligono.getCantidad_vertices() == 1);

    poligono.agregarVertice(5,11);
    assert(poligono.getCantidad_vertices() == 2);

    poligono.agregarVertice(12,8);
    assert(poligono.getCantidad_vertices() == 3);

    poligono.agregarVertice(9,5);
    assert(poligono.getCantidad_vertices() == 4);

    poligono.agregarVertice(5,6);
    assert(poligono.getCantidad_vertices() == 5);
}

void test07() {
    cout << "test07" << endl;
    CPunto2D p1(2,1), p2(-3,1);
    assert(p1.es_igual(p2)==false);

    p1 = CPunto2D(5, 8);
    p2 = CPunto2D(5, 8);
    assert(p1.es_igual(p2)==true);
}

void test06() {
    cout << "test06" << endl;
    CPunto2D p1, p2;

    assert(p1.getX() == 0);
    assert(p1.getY() == 0);

    assert(p2.getX() == 0);
    assert(p2.getY() == 0);

    p1 = CPunto2D(2, 1);
    p2 = CPunto2D(-3, 2);

    assert(p1.getX() == 2);
    assert(p1.getY() == 1);

    assert(p2.getX() == -3);
    assert(p2.getY() == 2);

    assert(p1.distancia(p2) == sqrt(26));
}

void test05() {
    cout << "test05" << endl;
    CPunto2D p1(2,1), p2(-3,2);

    assert(p1.getX() == 2);
    assert(p1.getY() == 1);

    assert(p2.getX() == -3);
    assert(p2.getY() == 2);

    assert(p1.distancia(p2) == sqrt(26));
}

void test04() {
    cout << "test04" << endl;
    CPunto2D p1;

    assert(p1.getX() == 0);
    assert(p1.getY() == 0);
}

void test03() {
    cout << "test03" << endl;
    CPunto2D p1, p2;
    p1.setX(2);
    p1.setY(1);
    p2.setX(-3);
    p2.setY(2);
    double distancia_entre_puntos = p1.distancia(p2);
    assert(distancia_entre_puntos == sqrt(26));

    p1.setX(1);
    p1.setY(7);
    p2.setX(1);
    p2.setY(2);
    distancia_entre_puntos = p1.distancia(p2);
    assert(distancia_entre_puntos == 5);
}

void test02() {
    cout << "test02" << endl;
    CPunto2D p1, p2;
    p1.setX(10);
    p1.setY(20);

    p2.setX(15);
    p2.setY(35);

    p1.imprimir();
    p2.imprimir();
}

void test01() {
    cout << "test01" << endl;
    CPunto2D p1;
    p1.setX(10);
    p1.setY(20);

    assert(p1.getX() == 10);
    assert(p1.getY() == 20);
}