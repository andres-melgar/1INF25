#ifndef ALMACEN_HPP
#define ALMACEN_HPP

#include "Cliente.hpp"
#include "Producto.hpp"

class Almacen{
private:
    Cliente arreglo_clientes[200];
    int cantidad_clientes;
    Producto arreglo_productos[200];
    int cantidad_productos;
public:
    Almacen();
    
    void cargar_clientes();
    
    void cargar_productos();
    
    void cargar_pedidos();
    
    void mostrar_datos();
private:
    void atender_pedido(Pedido &pedido);
}; 

#endif /* ALMACEN_HPP */

