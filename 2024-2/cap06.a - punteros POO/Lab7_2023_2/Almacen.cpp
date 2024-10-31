#include <iostream>
#include <fstream>
#include "Almacen.hpp"
#include "AperturaDeArchivos.h"

using namespace std;

Almacen::Almacen() {
    this->cantidad_ordenes = 0;
}

Almacen::Almacen(const Almacen& orig) {
}

Almacen::~Almacen() {
}

void Almacen::cargar_pedido() {
    ifstream archivo_de_pedidos;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_pedidos, "Pedidos.csv");

    char tipo_buffer;
    this->cantidad_ordenes = 0;
    while (true) {
        archivo_de_pedidos.get(tipo_buffer);
        if (archivo_de_pedidos.eof())
            break;

        this->cantidad_ordenes++;
        this->ordenes[this->cantidad_ordenes-1].crearPedido(tipo_buffer);
        this->ordenes[this->cantidad_ordenes-1].leerPedido(archivo_de_pedidos);
    }
    archivo_de_pedidos.close();
}

void Almacen::actualizar_pedido() {
    for (int i=0; i<this->cantidad_ordenes; i++)
        this->ordenes[i].actualizarPedido();
}

void Almacen::imprimir_ordenes_venta() {
    for (int i=0; i<this->cantidad_ordenes; i++)
        this->ordenes[i].imprimirPedido();
}
