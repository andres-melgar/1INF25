#include <assert.h>
#include <iostream>
#include <cassert>
#include <cmath>

#include "CPoligono.h"
#include "CPunto2D.h"
#include "CPunto3D.h"

using namespace std;

void test01();
void test02();
void test03();
void test04();
void test05();
void test06();

int main() {
    //test01();
    //test02();
    //test03();
    //test04();
    //test05();
    test06();
    return 0;
}

void test06() {
    cout << "test06" << endl;
    CPunto2D *puntos[5];
    puntos[0] = new CPunto2D(2,3);
    puntos[1] = new CPunto3D(6,8, 5);
    puntos[2] = new CPunto2D(12,35);
    puntos[3] = new CPunto3D(48, 24,53);
    puntos[4] = new CPunto2D(29,47);

    for (int i=0; i < 5; i++)
        puntos[i]->imprimir();
}

void test05() {
    cout << "test05" << endl;
    CPunto2D *punto; //<-- IGUAL
    punto = new CPunto3D(10, 20, 30); //<-- DIFERENTE
    punto->imprimir(); //<-- IGUAL
}

void test04() {
    cout << "test04" << endl;
    CPunto2D *punto; //<-- IGUAL
    punto = new CPunto2D(10, 20); //<-- DIFERENTE
    punto->imprimir(); //<-- IGUAL
}

void test03() {
    cout << "test03" << endl;
    CPunto2D punto2D;
    CPunto3D punto3D(10, 20, 30);
    punto2D=punto3D;
    punto2D.imprimir();
}

void test02() {
    cout << "test02" << endl;
    CPunto3D punto(10, 20, 30);
    punto.imprimir();
}

void test01() {
    cout << "test01" << endl;
    CPunto2D punto(10, 20);
    punto.imprimir();
}