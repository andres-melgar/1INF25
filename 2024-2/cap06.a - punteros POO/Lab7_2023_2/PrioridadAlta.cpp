#include <iostream>
#include <fstream>
#include "PrioridadAlta.hpp"

using namespace std;

PrioridadAlta::PrioridadAlta() {
    this->recargo = 0;
    this->total = 0;
}

PrioridadAlta::PrioridadAlta(const PrioridadAlta& orig) {
}

PrioridadAlta::~PrioridadAlta() {
}

void PrioridadAlta::lee(ifstream &archivo_de_pedidos) {
    Pedido::lee(archivo_de_pedidos);
    int recargo;
    archivo_de_pedidos >> recargo;

    //leemos el cambio de línea
    char buffer[256];
    archivo_de_pedidos.getline(buffer, 255);

    this->recargo = recargo;
    this->total = 0;
}

void PrioridadAlta::imprime() {
    cout << "ALTA PRIORIDAD: ";
    Pedido::imprime();
    cout << " Recargo: " << this->recargo;
    cout << endl;
}

void PrioridadAlta::actualiza(){
    
}