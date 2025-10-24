#include <iostream>
#include <fstream>
#include "Almacen.h"
#include "AperturaDeArchivos.h"

using namespace std;

void Almacen::cargar_clientes() {
    ifstream archivo_de_clientes;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_clientes, "Clientes.csv");

    this->cantidad_clientes = 0;
    Cliente cliente;
    // while (archivo_de_clientes >> cliente) {
    //     this->cantidad_clientes++;
    //     this->arreglo_clientes[this->cantidad_clientes - 1] = cliente;
    // }
    archivo_de_clientes.close();
}

void Almacen::cargar_productos() {
    ifstream archivo_de_productos;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_productos, "Productos.csv");

    this->cantidad_productos = 0;
    Producto producto;
    // while (archivo_de_productos >> producto) {
    //     this->cantidad_productos++;
    //     this->arreglo_productos[this->cantidad_productos - 1] = producto;
    // }
    archivo_de_productos.close();
}

void Almacen::cargar_pedidos() {
    ifstream archivo_de_pedidos;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_pedidos, "Pedidos.csv");

    char codigo_buffer[8];
    int dni_buffer;
    while (true) {
        archivo_de_pedidos.getline(codigo_buffer, 8, ',');
        if (archivo_de_pedidos.eof())
            break;

        archivo_de_pedidos>>dni_buffer;
        //leemos el cambio de línea
        char buffer[256];
        archivo_de_pedidos.getline(buffer, 255);

        //cout << codigo_buffer << " - " << dni_buffer << endl;
        Pedido pedido(codigo_buffer, dni_buffer, 0);
        this->atender_pedido(pedido);
    }
    archivo_de_pedidos.close();
}

void Almacen::atender_pedido(Pedido &pedido) {
    for (int i = 0; i<this->cantidad_clientes; i++) {
        // if (this->arreglo_clientes[i] == pedido) {
        //     arreglo_clientes[i] += pedido;
        //     break;
        // }
    }
    for (int i = 0; i<this->cantidad_productos; i++) {
        // if (this->arreglo_productos[i] == pedido) {
        //     arreglo_productos[i] += pedido;
        //     break;
        // }
    }
}

void Almacen::mostrar_datos() {
    ofstream output;
    AperturaDeUnArchivoDeTextosParaEscribir(output, "reporte.txt");
    output << right << setw(45) << "Informacion de los clientes" << endl;
    // for (int i = 0; i<this->cantidad_clientes; i++) {
    //     output << this->arreglo_clientes[i];
    // }
    output << endl;
    output << right << setw(45) << "Informacion de los productos" << endl;
    // for (int i = 0; i<this->cantidad_productos; i++) {
    //     output << this->arreglo_productos[i];
    // }
    output << endl;
    output.close();
}