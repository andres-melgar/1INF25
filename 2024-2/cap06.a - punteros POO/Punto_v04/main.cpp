#include <iostream>
#include <iomanip>
#include <cmath>
#include <assert.h>
#include "CPunto2D.hpp"
#include "CPunto3D.hpp"

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

void test06(){
    cout<<"test06"<<endl;
    CPunto2D *puntos[5];
    puntos[0] = new CPunto2D(3, 4);
    puntos[1] = new CPunto3D(81, 23, 45);
    puntos[2] = new CPunto2D(8, 9);
    puntos[3] = new CPunto3D(8, 41, 45);
    puntos[4] = new CPunto2D(67, 43);
    for(int i=0; i<5; i++)
        puntos[i]->imprimir();
}

void test05(){
    cout<<"test05"<<endl;
    CPunto2D *ptrPunto;
    ptrPunto = new CPunto3D(10, 20, 30);
    ptrPunto->imprimir();
}

void test04(){
    cout<<"test04"<<endl;
    CPunto2D *ptrPunto;
    ptrPunto = new CPunto2D(10, 20);
    ptrPunto->imprimir();
}

void test03(){
    cout<<"test03"<<endl;
    CPunto2D punto2D;
    CPunto3D punto3D(10, 20, 30);
    punto2D = punto3D;
    punto2D.imprimir();
}

void test02(){
    cout<<"test02"<<endl;
    CPunto3D punto(10, 20, 30);
    punto.imprimir();
}

void test01(){
    cout<<"test01"<<endl;
    CPunto2D punto(10, 20);
    punto.imprimir();
}