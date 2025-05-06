#ifndef CPOLIGONO_HPP
#define CPOLIGONO_HPP
#include "CPunto2D.hpp"

class CPoligono{
private:    
    CPunto2D *vertices;
    int cantidad_vertices;
public:
    CPoligono();
    
    ~CPoligono();
    
    void agregarVertice(int x, int y);
    
    void agregarVertice(const CPunto2D &punto);
    
    double calcular_area();
    
    void borrar_vertices();
    
    int getCantidad_vertices();
private:
    void inicializar();    
};

#endif /* CPOLIGONO_HPP */

