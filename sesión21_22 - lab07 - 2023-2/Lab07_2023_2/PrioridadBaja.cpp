#include "PrioridadBaja.hpp"

PrioridadBaja::PrioridadBaja() {
    this->dias_espera = 0;
    this->nueva_fecha_entrega = FECHA_INVALIDA;
}

void PrioridadBaja::lee(ifstream &archivo_de_pedido){
    Pedido::lee(archivo_de_pedido);
    int dias_espera_buffer;
    archivo_de_pedido >> dias_espera_buffer;
    
    //leemos el camio de línea
    char buffer[256];
    archivo_de_pedido.getline(buffer, 255);
    
    this->dias_espera = dias_espera_buffer;
    this->nueva_fecha_entrega = FECHA_INVALIDA;
}