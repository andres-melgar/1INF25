#include <iostream>
#include <cmath>
#include "CPunto2D.hpp"

using namespace std;

CPunto2D::CPunto2D(int x, int y) {
    this->x = x;
    this->y = y;
}

void CPunto2D::imprimir() {
    cout << "(" << this->x << "," << this->y << ")" << endl;
}

double CPunto2D::distancia(const CPunto2D &punto) {
    double diferencia_abcisas = pow(this->x - punto.x, 2);
    double diferencia_ordenadas = pow(this->y - punto.y, 2);
    return sqrt(diferencia_abcisas + diferencia_ordenadas);
}

void CPunto2D::setX(int x) {
    this->x = x;
}

void CPunto2D::setY(int y) {
    this->y = y;
}

int CPunto2D::getX() {
    return this->x;
}

int CPunto2D::getY() {
    return this->y;
}