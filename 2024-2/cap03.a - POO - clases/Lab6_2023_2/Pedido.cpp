#include "Pedido.hpp"
#include "Cliente.hpp"
#include "Comunes.hpp"

Pedido::Pedido() {
    this->codigo = nullptr;
    this->dni_cliente = DNI_VACIO;
    this->precio_producto = 0;
}

Pedido::Pedido(char *codigo, int dni_cliente){
    this->codigo = mi_strdup(codigo);
    this->dni_cliente = dni_cliente;
    this->precio_producto = 0;
}

Pedido::~Pedido() {
    libera_cadena(this->codigo);
}

void Pedido::SetPrecio_producto(double precio_producto) {
    this->precio_producto = precio_producto;
}

double Pedido::GetPrecio_producto() const {
    return precio_producto;
}

void Pedido::SetDni_cliente(int dni_cliente) {
    this->dni_cliente = dni_cliente;
}

int Pedido::GetDni_cliente() const {
    return dni_cliente;
}

void Pedido::SetCodigo(char* codigo) {
    this->codigo = mi_strdup(codigo);
}

char* Pedido::GetCodigo() const {
    return mi_strdup(codigo);
}