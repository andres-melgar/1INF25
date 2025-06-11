#include <iostream>
#include "PrioridadAlta.hpp"

using namespace std;

PrioridadAlta::PrioridadAlta() {
    this->recargo = 0;
    this->total = 0;
}

void PrioridadAlta::lee(ifstream &archivo_de_pedido) {
    //con la siguiente instrucción se invoca al método sobreescrito, pero la versión
    //que se encuentra en la clase base
    Pedido::lee(archivo_de_pedido);
    // ¿Cómo sería en Java?
    //      Rpta: super.lee(archivo_de_pedido);
    // ¿Cómo sería en C#?
    //      Rpta: base.lee(archivo_de_pedido);

    int recargo_buffer;
    archivo_de_pedido >> recargo_buffer;

    //leemos el camio de línea
    char buffer[256];
    archivo_de_pedido.getline(buffer, 255);

    this->recargo = recargo_buffer;
    this->total = 0;
}

void PrioridadAlta::imprime() {
    cout << "PRIORIDAD ALTA: ";
    Pedido::imprime();
    cout << " Recargo: " << this->recargo;
    cout << endl;
}

void PrioridadAlta::actualiza(){
    Pedido::actualiza();
    this->total = Pedido::total*(1 + (double)this->recargo/100);
}