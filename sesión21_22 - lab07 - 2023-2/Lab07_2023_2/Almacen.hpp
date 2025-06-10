#ifndef ALMACEN_HPP
#define ALMACEN_HPP
#include "OrdenVenta.hpp"

class Almacen{
private:
    OrdenVenta ordenes[600];
    int cantidad_ordenes;
public:
    Almacen();
    
    void cargar_pedidos();
    
    void actualizar_pedidos();
    
    void imprimir_ordenes_venta();
};

#endif /* ALMACEN_HPP */

