#include "Pedido.hpp"
#include "Comunes.hpp"

Pedido::Pedido() {
    this->codigo = nullptr;
    this->dni_cliente = DNI_INVALIDO;
    this->subtotal = 0;
    this->fecha = FECHA_INVALIDA;
    this->estado = nullptr;
    this->total = 0;
}

Pedido::Pedido(const Pedido& orig) {
}

Pedido::~Pedido() {
    libera_cadena(this->codigo);
    libera_cadena(this->estado);
}

