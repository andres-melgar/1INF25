#include <iostream>
#include <iomanip>
#include <cstring>
#include "Producto.hpp"
#include "Comunes.hpp"

Producto::Producto() {
    this->codigo = nullptr;
    this->descripcion = nullptr;
    this->precio = 0;
    this->stock = 0;
    this->cantidad_clientes_servidos = 0;
    this->cantidad_clientes_no_servidos = 0;
}

Producto::Producto(char *codigo, char *descripcion, double precio, int stock) {
    this->codigo = mi_strdup(codigo);
    this->descripcion = mi_strdup(descripcion);
    this->precio = 0;
    this->stock = 0;
    this->cantidad_clientes_servidos = 0;
    this->cantidad_clientes_no_servidos = 0;
}

Producto::~Producto() {
    libera_cadena(this->codigo);
    libera_cadena(this->descripcion);
}

Producto::Producto(const Producto &producto) {
    this->copiar_producto(producto);
}

void Producto::operator=(const Producto &producto) {
    this->copiar_producto(producto);
}

bool Producto::operator+=(Pedido &pedido) {
    bool se_pudo_atender = true;
    if (this->stock > 0) {
        this->stock--;
        this->cantidad_clientes_servidos++;
        this->clientes_servidos[this->cantidad_clientes_servidos - 1] = pedido.GetDni_cliente();
    } else {
        this->cantidad_clientes_no_servidos++;
        this->clientes_no_servidos[this->cantidad_clientes_no_servidos - 1] = pedido.GetDni_cliente();
        se_pudo_atender = false;
    }
    pedido.SetPrecio_producto(this->precio);
    return se_pudo_atender;
}

bool Producto::operator==(const Pedido &pedido){
    char *codigo_buffer = pedido.GetCodigo();
    bool es_igual = strcmp(this->codigo, codigo_buffer) == 0;
    libera_cadena(codigo_buffer);
    return es_igual;
}

bool operator>>(istream &archivo_de_productos, Producto &producto) {
    char codigo_buffer[8];
    char descripcion_buffer[100];
    double precio_buffer;
    int stock_buffer;

    archivo_de_productos.getline(codigo_buffer, 8, ',');
    if (archivo_de_productos.eof())
        return false;
    archivo_de_productos.getline(descripcion_buffer, 100, ',');
    archivo_de_productos >> precio_buffer;
    archivo_de_productos.get(); //sacamos la coma
    archivo_de_productos >> stock_buffer;
    //leemos el cambio de línea
    char buffer[256];
    archivo_de_productos.getline(buffer, 255);

    Producto producto_local(codigo_buffer, descripcion_buffer, precio_buffer, stock_buffer);
    producto = producto_local;
    return true;
}

ostream &operator<<(ostream &out, const Producto &producto) {
    out << setw(10) << producto.codigo;
    out << left << setw(30) << producto.descripcion;
    out << setw(8) << producto.precio;
    out << setw(5) << producto.stock;
    out << endl;
    out << "Cliente atendidos: " << endl;
    if (producto.cantidad_clientes_servidos == 0)
        out << "NO SE ATENDIERON PEDIDOS";
    else
        for (int i = 0; i < producto.cantidad_clientes_servidos; i++)
            out << producto.clientes_servidos[i] << " ";
    out << "Cliente no atendidos: " << endl;
    if (producto.cantidad_clientes_no_servidos==0)
        out<<"NO HAY CLIENTES SIN ATENDER";
    else
        for (int i=0; i<producto.cantidad_clientes_no_servidos; i++)
            out << producto.clientes_no_servidos[i] << " ";
    out << endl;
    return out;
}

void Producto::copiar_producto(const Producto &producto) {
    this->codigo = mi_strdup(producto.codigo);
    this->descripcion = mi_strdup(producto.descripcion);
    this->precio = producto.precio;
    this->stock = producto.stock;
    this->cantidad_clientes_servidos = producto.cantidad_clientes_servidos;
    this->cantidad_clientes_no_servidos = producto.cantidad_clientes_no_servidos;

    for (int i = 0; i<this->cantidad_clientes_servidos; i++)
        this->clientes_servidos[i] = producto.clientes_servidos[i];
    for (int i = 0; i<this->cantidad_clientes_no_servidos; i++)
        this->clientes_no_servidos[i] = producto.clientes_no_servidos[i];
}