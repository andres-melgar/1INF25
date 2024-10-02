/* 
 * Archivo: main.cpp
 * Autor: Andrés Melgar
 * Fecha: 26 de septiembre de 2024, 07:20
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <assert.h>
#include "CPunto2D.hpp"

using namespace std;

void test01();
void test02();
void test03();

int main(int argc, char** argv) {
    test01();
    test02();
    test03();
    return 0;
}

void test03() {
    CPunto2D p1, p2;

    p1.setX(2);
    p1.setY(1);
    p2.setX(-3);
    p2.setY(2);
    assert(p1.distancia(p2) == sqrt(26));
    
    p1.setX(1);
    p1.setY(7);
    p2.setX(1);
    p2.setY(2);
    assert(p1.distancia(p2) == 5);
}

void test02() {
    CPunto2D p1;

    p1.setX(15);
    p1.setY(35);
    p1.imprimir();

    p1.setX(10);
    p1.setY(50);
    p1.imprimir();
}

void test01() {
    CPunto2D p1;
    /* El código comentado no se puede hacer pues rompe el encapsulamiento!!!
    p1.x = 10;
    p1.y = 20;
     */
    p1.setX(10);
    p1.setY(20);
    assert(p1.getX() == 10);
    assert(p1.getY() == 20);
}