#include <iostream>
#include <fstream>
#include "PrioridadMedia.hpp"
#include "Comunes.hpp"

using namespace std;

PrioridadMedia::PrioridadMedia() {
    this->descripcion = nullptr;
    this->nueva_fecha_entrega = 0;
}

PrioridadMedia::PrioridadMedia(const PrioridadMedia& orig) {
}

PrioridadMedia::~PrioridadMedia() {
    libera_cadena(this->descripcion);
}

void PrioridadMedia::lee(ifstream &archivo_de_pedidos) {
    Pedido::lee(archivo_de_pedidos);
    int estado_buffer;
    archivo_de_pedidos >> estado_buffer;

    if (estado_buffer == 0)
        this->descripcion = mi_strdup("Inactivo");
    else
        this->descripcion = mi_strdup("Activo");

    //leemos el cambio de línea
    char buffer[256];
    archivo_de_pedidos.getline(buffer, 255);
}

void PrioridadMedia::imprime() {
    Pedido::imprime();
    cout << " Estado: " << this->descripcion;
    cout << endl;
}

void PrioridadMedia::actualiza(){
    
}