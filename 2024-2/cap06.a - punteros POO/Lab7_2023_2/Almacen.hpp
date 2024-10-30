#ifndef ALMACEN_HPP
#define ALMACEN_HPP

#include "OrdenVenta.hpp"

class Almacen {
private:
    OrdenVenta ordenes[600];
    int cantidad_ordenes;
public:
    Almacen();
    
    Almacen(const Almacen& orig);
    
    virtual ~Almacen();
    
    void cargar_pedido();
    
    void actualizar_pedido();
    
    void imprimir_ordenes_venta();
private:

};

#endif /* ALMACEN_HPP */

