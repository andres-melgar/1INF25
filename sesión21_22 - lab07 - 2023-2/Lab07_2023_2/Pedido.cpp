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

Pedido::~Pedido() {
    libera_cadena(this->codigo);
    libera_cadena(this->estado);
}

void Pedido::lee(ifstream &archivo_de_pedido){
    char codigo_pedido_buffer[8];
    int codigo_cliente_buffer;
    double subtotal_buffer;
    int fecha_anho_buffer;
    int fecha_mes_buffer;
    int fecha_dia_buffer;
    
    archivo_de_pedido.get(); //sacamos la primera coma
    archivo_de_pedido.getline(codigo_pedido_buffer, 8, ',');
    archivo_de_pedido >> codigo_cliente_buffer;
    archivo_de_pedido.get(); //sacamos la coma
    archivo_de_pedido >> subtotal_buffer;
    archivo_de_pedido.get(); //sacamos la coma
    archivo_de_pedido >> fecha_anho_buffer;
    archivo_de_pedido.get(); //sacamos el guión
    archivo_de_pedido >> fecha_mes_buffer;
    archivo_de_pedido.get(); //sacamos el guión
    archivo_de_pedido >> fecha_dia_buffer;
    archivo_de_pedido.get(); //sacamos el guión
    
    libera_cadena(this->codigo);
    this->codigo = mi_strdup(codigo_pedido_buffer);
    this->dni_cliente = codigo_cliente_buffer;
    this->subtotal = subtotal_buffer;
    int fecha_buffer = fecha_anho_buffer*10000 + fecha_mes_buffer*100 + fecha_dia_buffer;
    this->fecha = fecha_buffer;
    this->total = 0;
    libera_cadena(this->estado);         
}