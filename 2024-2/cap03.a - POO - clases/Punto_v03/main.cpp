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
#include "CPoligono.hpp"

using namespace std;

void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();
void test08();
void test09();

int main(int argc, char** argv) {
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
    test07();
    test08();
    test09();
    return 0;
}

void test09(){
    CPoligono poligono;
    
    assert(poligono.getCantidad_vertices()==0);
    poligono.agregarVertice(3,4);
    poligono.agregarVertice(5,11);
    poligono.agregarVertice(12,8);
    poligono.agregarVertice(9,5);
    poligono.agregarVertice(5,6);
    
    cout<<poligono;
}

void test08(){
    CPoligono poligono;
    
    assert(poligono.getCantidad_vertices()==0);
    poligono.agregarVertice(3,4);
    assert(poligono.getCantidad_vertices()==1);
    poligono.agregarVertice(5,11);
    assert(poligono.getCantidad_vertices()==2);
    poligono.agregarVertice(12,8);
    assert(poligono.getCantidad_vertices()==3);
    poligono.agregarVertice(9,5);
    assert(poligono.getCantidad_vertices()==4);
    poligono.agregarVertice(5,6);
    assert(poligono.getCantidad_vertices()==5);
    assert(poligono.calcular_area()==30);
    
    poligono.borrar_vertices();
    assert(poligono.getCantidad_vertices()==0);
    poligono.agregarVertice(-2,-4);
    assert(poligono.getCantidad_vertices()==1);
    poligono.agregarVertice(6,-2);
    assert(poligono.getCantidad_vertices()==2);
    poligono.agregarVertice(7,4);
    assert(poligono.getCantidad_vertices()==3);
    poligono.agregarVertice(-8,2);
    assert(poligono.getCantidad_vertices()==4);
    assert(poligono.calcular_area()==74);
    
    poligono.borrar_vertices();
    assert(poligono.getCantidad_vertices()==0);
    poligono.agregarVertice(2,4);
    assert(poligono.getCantidad_vertices()==1);
    poligono.agregarVertice(3,-8);
    assert(poligono.getCantidad_vertices()==2);
    poligono.agregarVertice(1,2);
    assert(poligono.getCantidad_vertices()==3);    
    assert(poligono.calcular_area()==7);
}

void test07(){
    CPoligono poligono;
    
    assert(poligono.getCantidad_vertices()==0);
    poligono.agregarVertice(3,4);
    assert(poligono.getCantidad_vertices()==1);
    poligono.agregarVertice(5,11);
    assert(poligono.getCantidad_vertices()==2);
    poligono.agregarVertice(12,8);
    assert(poligono.getCantidad_vertices()==3);
    poligono.agregarVertice(9,5);
    assert(poligono.getCantidad_vertices()==4);
    poligono.agregarVertice(5,6);
    assert(poligono.getCantidad_vertices()==5);
}

void test06() {
    CPunto2D p1(6, 8), p2(6, 8);

    assert(p1.es_igual(p2) == true);
    assert(p2.es_igual(p1) == true);
}

void test05() {
    CPunto2D p1(4, 6), p2(-6, 8);

    assert(p1.getX() == 4);
    assert(p1.getY() == 6);

    assert(p2.getX() == -6);
    assert(p2.getY() == 8);
}

void test04() {
    CPunto2D p;

    assert(p.getX() == 1);
    assert(p.getY() == 2);
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