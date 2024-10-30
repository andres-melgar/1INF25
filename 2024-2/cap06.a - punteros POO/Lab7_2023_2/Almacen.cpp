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
    char codigo_pedido_buffer[8];
    int codigo_cliente_buffer;
    double subtotal_buffer;
    int fecha_anho_buffer;
    int fecha_mes_buffer;
    int fecha_dia_buffer;
    int entero_buffer;

    this->cantidad_ordenes = 0;
    while (true) {
        archivo_de_pedidos.get(tipo_buffer);
        if (archivo_de_pedidos.eof())
            break;

        this->cantidad_ordenes++;
        this->ordenes[this->cantidad_ordenes-1].crearPedido(tipo_buffer);
        
        
        /*archivo_de_pedidos.get();
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
        archivo_de_pedidos >> entero_buffer;

        char buffer[256];
        archivo_de_pedidos.getline(buffer, 255);
         */
        cout << tipo_buffer << " " << codigo_pedido_buffer << endl;

    }


    archivo_de_pedidos.close();
}

void Almacen::actualizar_pedido() {

}

void Almacen::imprimir_ordenes_venta() {

}
