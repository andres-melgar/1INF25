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
    this->precio = precio;
    this->stock = stock;
    this->cantidad_clientes_servidos = 0;
    this->cantidad_clientes_no_servidos = 0;
}

Producto::Producto(const Producto &producto) {
    this->copia_producto(producto);
}

Producto::~Producto() {
    this->liberar_producto();
}

void Producto::operator=(const Producto &producto) {
    this->liberar_producto();
    this->copia_producto(producto);
}

void Producto::liberar_producto(){
    libera_cadena(this->codigo);
    libera_cadena(this->descripcion);
}

void Producto::copia_producto(const Producto &producto){
    this->codigo = mi_strdup(producto.codigo);
    this->descripcion = mi_strdup(producto.descripcion);
    this->precio = producto.precio;
    this->stock = producto.stock;
    this->cantidad_clientes_servidos = producto.cantidad_clientes_servidos;
    this->cantidad_clientes_no_servidos = producto.cantidad_clientes_no_servidos;
    
    for(int i=0; i<this->cantidad_clientes_servidos; i++)
        this->clientes_servidos[i] = producto.clientes_servidos[i];
    for(int i=0; i<this->cantidad_clientes_no_servidos; i++)
        this->clientes_no_servidos[i] = producto.clientes_no_servidos[i];
}