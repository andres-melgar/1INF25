#include "Pedido.hpp"
#include "Comunes.hpp"

Pedido::Pedido() {
    this->codigo = nullptr;
    this->dni_cliente = DNI_VACIO;
    this->precio_producto = 0;
}

Pedido::Pedido(char *codigo, int dni_cliente, double precio_producto) {
    this->codigo = mi_strdup(codigo);
    this->dni_cliente = dni_cliente;
    this->precio_producto = precio_producto;
}

Pedido::~Pedido() {
    libera_cadena(this->codigo);
}