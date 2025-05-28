#include <iostream>
#include <cmath>
#include <assert.h>
#include "CPunto2D.hpp"
#include "CPunto3D.hpp"
#include "CPoligono.hpp"

using namespace std;

void test01();
void test02();
void test03();
void test04();
void test05();
void test06();

int main(int argc, char** argv) {
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
    return 0;
}

void test06() {
    cout << "test06" << endl;
    CPunto2D * punto[5];
    punto[0] = new CPunto2D(3, 4);
    punto[1] = new CPunto3D(1, 2, 3);
    punto[2] = new CPunto2D(7, 8);
    punto[3] = new CPunto3D(5, 4, 9);
    punto[4] = new CPunto2D(4, 5);
    
    for(int i=0; i<5; i++)
        punto[i]->imprimir();
}

void test05() {
    cout << "test05" << endl;
    CPunto2D *punto;
    punto = new CPunto3D(10, 20, 30);
    punto->imprimir();
}

void test04() {
    cout << "test04" << endl;
    CPunto2D *punto;
    punto = new CPunto2D(10, 20);
    punto->imprimir();
}

void test03() {
    cout << "test03" << endl;
    CPunto2D punto2D;
    CPunto3D punto3D(10, 20, 30);
    punto2D = punto3D;
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







