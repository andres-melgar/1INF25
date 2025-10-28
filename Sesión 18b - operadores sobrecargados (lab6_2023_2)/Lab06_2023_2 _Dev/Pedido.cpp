#include "Pedido.h"
#include "Cliente.h"
#include "Comunes.h"

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
    libera_cadena(this->codigo);
    this->codigo = mi_strdup(codigo);
}

char* Pedido::GetCodigo() const {
    return mi_strdup(codigo);
}

bool operator>>(istream &archivo_de_pedidos, Pedido &pedido) {
    char codigo_buffer[8];
    int dni_buffer;

    archivo_de_pedidos.getline(codigo_buffer, 8, ',');
    if (archivo_de_pedidos.eof())
        return false;
    archivo_de_pedidos >> dni_buffer;
    char buffer[256];
    archivo_de_pedidos.getline(buffer, 255);

    pedido.SetCodigo(codigo_buffer);
    pedido.SetDni_cliente(dni_buffer);
    return true;
}