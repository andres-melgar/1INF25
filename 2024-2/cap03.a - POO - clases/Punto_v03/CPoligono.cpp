#include <iostream>
#include <cmath>
#include "CPoligono.hpp"

using namespace std;

CPoligono::CPoligono() {
    this->vertices = nullptr;
    this->cantidad_vertices = 0;
}

CPoligono::~CPoligono() {
    this->borrar_vertices();
}

void CPoligono::agregarVertice(int x, int y) {
    CPunto2D punto(x, y);
    this->agregarVertice(punto);
}

void CPoligono::agregarVertice(const CPunto2D &punto) {
    CPunto2D *puntos_antiguos = this->vertices;
    this->cantidad_vertices++;
    this->vertices = new CPunto2D[this->cantidad_vertices];
    for (int i = 0; i<this->cantidad_vertices - 1; i++)
        this->vertices[i] = puntos_antiguos[i];
    this->vertices[this->cantidad_vertices - 1] = punto;
    if (puntos_antiguos != nullptr)
        delete puntos_antiguos;
}

void CPoligono::borrar_vertices() {
    if (this->vertices != nullptr) {
        delete this->vertices;
        this->vertices = nullptr;
    }
    this->cantidad_vertices = 0;
}

double CPoligono::calcular_area() {
    if (this->cantidad_vertices <= 2)
        return 0;
    double sumatoria1 = 0, sumatoria2 = 0;
    CPunto2D p1, pa; //p1 es el punto1 y pa, es el punto anterior
    for (int i = 0; i<this->cantidad_vertices; i++) {
        if (i == 0)
            p1 = this->vertices[i];
        else {
            CPunto2D punto = this->vertices[i];
            sumatoria1 += pa.getX() * punto.getY();
            sumatoria2 += punto.getX() * pa.getY();

            if (i == this->cantidad_vertices - 1) {
                sumatoria1 += punto.getX() * p1.getY();
                sumatoria2 += p1.getX() * punto.getY();
            }
        }
        pa = this->vertices[i];
    }
    return fabs((sumatoria1 - sumatoria2) / 2);
}

int CPoligono::getCantidad_vertices() {
    return this->cantidad_vertices;
}

ostream &operator<<(ostream &out, const CPoligono &poligono) {
    out << "El polígono posee " << poligono.cantidad_vertices << endl;
    CPoligono p = poligono;
    out << "Su área es: " << p.calcular_area() << endl;
    return out;
}