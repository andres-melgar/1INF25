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

    void operator=(const Producto &producto);

    bool operator+=(const Pedido &pedido);

    bool operator==(const Pedido &pedido);

    friend bool operator>>(istream &archivo_de_producto, Producto &producto);

    friend ostream & operator<<(ostream &out, const Producto &producto);
private:
    void copiar_producto(const Producto &producto);

    void liberar_producto();
};

#endif //LAB06_2023_2_PRODUCTO_H