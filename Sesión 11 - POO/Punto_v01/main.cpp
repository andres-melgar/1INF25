#include <assert.h>
#include <iostream>
#include <cassert>
#include <cmath>
#include "CPunto2D.h"

using namespace std;

void test01();
void test02();
void test03();

int main() {
    test01();
    test02();
    test03();
    return 0;
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