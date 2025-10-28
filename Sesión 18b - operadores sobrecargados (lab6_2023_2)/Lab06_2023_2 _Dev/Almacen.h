#ifndef LAB06_2023_2_ALMACEN_H
#define LAB06_2023_2_ALMACEN_H
#include "Cliente.h"
#include "Producto.h"

class Almacen {
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


#endif //LAB06_2023_2_ALMACEN_H