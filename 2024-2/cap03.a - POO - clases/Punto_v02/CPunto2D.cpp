/* 
 * Archivo: CPunto2D.cpp
 * Autor: Andrés Melgar
 * Fecha: 26 de septiembre de 2024, 07:24
 */

#include <iostream>
#include <cmath>
#include "CPunto2D.hpp"

using namespace std;

//CPunto2D::CPunto2D(){
//    this->x = 1;
//    this->y = 2;
//}

CPunto2D::CPunto2D(int x, int y){
    this->x = x;
    this->y = y;
}

void CPunto2D::imprimir() {
    cout << "(" << this->x << "," << this->y << ")" << endl;
}

double CPunto2D::distancia(const CPunto2D &punto) {
    double diferencia_abscisas = pow(this->x - punto.x, 2);
    double diferencia_ordenadas = pow(this->y - punto.y, 2);
    return sqrt(diferencia_abscisas + diferencia_ordenadas);
}

bool CPunto2D::es_igual(const CPunto2D &punto){
    return this->x==punto.x and this->y==punto.y;
}

void CPunto2D::setX(double x) {
    this->x = x;
}

double CPunto2D::getX() {
    return this->x;
}

void CPunto2D::setY(double y) {
    this->y = y;
}

double CPunto2D::getY() {
    return this->y;
}