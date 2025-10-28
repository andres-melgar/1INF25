//
// Created by Neo on 24/10/2025.
//

#ifndef LAB06_2023_2_PRODUCTO_H
#define LAB06_2023_2_PRODUCTO_H

#include <fstream>
#include "Pedido.h"

using namespace std;

class Producto{
private:
    char *codigo;
    char *descripcion;
    double precio;
    int stock;
    int clientes_servidos[200];
    int clientes_no_servidos[200];
    int cantidad_clientes_servidos;
    int cantidad_clientes_no_servidos;
public:
    Producto();

    Producto(char *codigo, char *descripcion, double precio, int stock);

    Producto(const Producto &producto);

    ~Producto();
private:
    void copiar_producto(const Producto &producto);
};

#endif //LAB06_2023_2_PRODUCTO_H