#include "PrioridadMedia.hpp"
#include "Comunes.hpp"

PrioridadMedia::PrioridadMedia() {
    this->descripcion = nullptr;
    this->nueva_fecha_entrega = FECHA_INVALIDA;
}

PrioridadMedia::~PrioridadMedia() {
    libera_cadena(this->descripcion);
}

void PrioridadMedia::lee(ifstream &archivo_de_pedido){
    Pedido::lee(archivo_de_pedido);
    int estado_buffer;
    archivo_de_pedido >> estado_buffer;
    
    //leemos el camio de línea
    char buffer[256];
    archivo_de_pedido.getline(buffer, 255);
    
    libera_cadena(this->descripcion);    
    if (estado_buffer==0)
        this->descripcion = mi_strdup("Inactivo");
    else
        this->descripcion = mi_strdup("Activo");
    this->nueva_fecha_entrega = 0;    
}