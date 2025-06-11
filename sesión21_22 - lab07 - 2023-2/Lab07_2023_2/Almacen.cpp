#include <iostream>
#include <fstream>
#include "Almacen.hpp"
#include "AperturaDeArchivos.h"

using namespace std;

Almacen::Almacen() {
    this->cantidad_ordenes = 0;
}

void Almacen::cargar_pedidos() {
    ifstream archivo_de_pedido;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_pedido, "Pedidos.csv");
    
    char tipo_de_pedido_buffer;
    while (true){
        archivo_de_pedido.get(tipo_de_pedido_buffer);
        if (archivo_de_pedido.eof())
            break;
        
        this->cantidad_ordenes++;
        this->ordenes[this->cantidad_ordenes-1].crearPedido(tipo_de_pedido_buffer);
        this->ordenes[this->cantidad_ordenes-1].leerPedido(archivo_de_pedido);
    }
    
    archivo_de_pedido.close();
}

void Almacen::actualizar_pedidos() {
    for(int i=0; i<this->cantidad_ordenes; i++)
        this->ordenes[i].actualizarPedido();
}

void Almacen::imprimir_ordenes_venta() {
    for(int i=0; i<this->cantidad_ordenes; i++)
        this->ordenes[i].imprimirPedido();
}