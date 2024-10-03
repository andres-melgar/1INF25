#ifndef CPOLIGONO_HPP
#define CPOLIGONO_HPP

#include <iostream>
#include "CPunto2D.hpp"

using namespace std;

class CPoligono{
private:
    CPunto2D *vertices; //agregación -> una atributo puede ser de una clase
    int cantidad_vertices;
public:
    CPoligono();
    
    ~CPoligono();
    
    void agregarVertice(int x, int y);

    void agregarVertice(const CPunto2D &punto);
    
    void borrar_vertices();
    
    double calcular_area();
    
    int getCantidad_vertices();    
    
    friend ostream &operator<<(ostream &out, const CPoligono &poligono);
};

#endif /* CPOLIGONO_HPP */

