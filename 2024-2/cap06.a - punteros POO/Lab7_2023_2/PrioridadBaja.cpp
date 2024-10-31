#include <iostream>
#include <fstream>
#include "PrioridadBaja.hpp"

using namespace std;

PrioridadBaja::PrioridadBaja() {
    this->dias_espera = 0;
    this->nueva_fecha_entrega = 0;
}

PrioridadBaja::PrioridadBaja(const PrioridadBaja& orig) {
}

PrioridadBaja::~PrioridadBaja() {
}

void PrioridadBaja::lee(ifstream &archivo_de_pedidos) {
    Pedido::lee(archivo_de_pedidos);
    int dias_espera_buffer;
    archivo_de_pedidos >> dias_espera_buffer;

    this->dias_espera = dias_espera_buffer;
    this->nueva_fecha_entrega = FECHA_INVALIDA;

    //leemos el cambio de línea
    char buffer[256];
    archivo_de_pedidos.getline(buffer, 255);
}

void PrioridadBaja::imprime() {
    Pedido::imprime();
    cout << " Días espera: " << this->dias_espera;
    cout << endl;
}

void PrioridadBaja::actualiza(){
    
}