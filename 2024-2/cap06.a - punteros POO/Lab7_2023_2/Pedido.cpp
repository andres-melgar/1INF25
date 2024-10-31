#include <iostream>
#include <fstream>
#include "Pedido.hpp"
#include "Comunes.hpp"

using namespace std;

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

void Pedido::lee(ifstream &archivo_de_pedidos) {
    char codigo_pedido_buffer[8];
    int codigo_cliente_buffer;
    double subtotal_buffer;
    int fecha_anho_buffer;
    int fecha_mes_buffer;
    int fecha_dia_buffer;

    archivo_de_pedidos.get();
    archivo_de_pedidos.getline(codigo_pedido_buffer, 8, ',');
    archivo_de_pedidos >> codigo_cliente_buffer;
    archivo_de_pedidos.get();
    archivo_de_pedidos >> subtotal_buffer;
    archivo_de_pedidos.get();
    archivo_de_pedidos >> fecha_anho_buffer;
    archivo_de_pedidos.get();
    archivo_de_pedidos >> fecha_mes_buffer;
    archivo_de_pedidos.get();
    archivo_de_pedidos >> fecha_dia_buffer;
    archivo_de_pedidos.get();

    libera_cadena(this->codigo);
    libera_cadena(this->estado);
    this->codigo = mi_strdup(codigo_pedido_buffer);
    this->dni_cliente = codigo_cliente_buffer;
    this->subtotal = subtotal_buffer;
    this->fecha = fecha_anho_buffer * 10000 + fecha_mes_buffer * 100 + fecha_dia_buffer;
    this->total = 0;
    this->estado = nullptr;
}

void Pedido::imprime() {
    cout << "Pedido: " << this->codigo << " Cliente: " << this->dni_cliente;
}

void Pedido::actualiza(){
    
}