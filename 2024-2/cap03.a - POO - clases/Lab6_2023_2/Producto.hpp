#ifndef PRODUCTO_HPP
#define PRODUCTO_HPP

#include <fstream>
#include "Pedido.hpp"

using namespace std;

class Producto {
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

    void operator=(const Producto &producto);

    bool operator+=(Pedido &pedido);
    
    bool operator==(const Pedido &pedido);

    friend bool operator>>(istream &archivo_de_productos, Producto &producto);

    friend ostream &operator<<(ostream &out, const Producto &producto);
private:
    void copiar_producto(const Producto &producto);
};

#endif /* PRODUCTO_HPP */

