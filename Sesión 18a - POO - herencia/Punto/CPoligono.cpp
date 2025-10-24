#include "CPoligono.h"

CPoligono::CPoligono() {
    //this->vertices = nullptr;
    //this->cantidad_vertices = 0;
    this->inicializar();
}

CPoligono::~CPoligono() {
    this->borrar_vertices();
}

void CPoligono::agregarVertice(int x, int y) {
    CPunto2D punto(x,y);
    this->agregarVertice(punto);
}

void CPoligono::agregarVertice(const CPunto2D &punto) {
    CPunto2D *puntos_antiguos = this->vertices;
    this->cantidad_vertices++;
    this->vertices = new CPunto2D[this->cantidad_vertices];
    for (int i=0; i<this->cantidad_vertices-1; i++)
        this->vertices[i] = puntos_antiguos[i];
    this->vertices[this->cantidad_vertices-1] = punto;
    if (puntos_antiguos != nullptr)
        delete []puntos_antiguos;
}

void CPoligono::borrar_vertices() {
    if (this->vertices != nullptr) {
        delete[] this->vertices;
    }
    this->inicializar();
}

int CPoligono::getCantidad_vertices() {
    return this->cantidad_vertices;
}

void CPoligono::inicializar() {
    this->vertices = nullptr;
    this->cantidad_vertices = 0;
}
