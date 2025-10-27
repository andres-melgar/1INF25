#ifndef PUNTO_V01_CPOLIGONO_H
#define PUNTO_V01_CPOLIGONO_H
#include "CPunto2D.h"


class CPoligono {
private:
    CPunto2D *vertices;
    int cantidad_vertices;
public:
    CPoligono();

    ~CPoligono();

    void agregarVertice(int x, int y);

    void agregarVertice(const CPunto2D &punto);

    void borrar_vertices();

    int getCantidad_vertices();
private:
    void inicializar();
};


#endif //PUNTO_V01_CPOLIGONO_H