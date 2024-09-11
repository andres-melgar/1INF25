#include <iostream>
#include <fstream>
#include "AperturaDeArchivos.h"
#include "MuestraPunteroGenerico.h"
#include "PunterosGenericos.h"
#include "Clientes.hpp"
#include "Reservas.hpp"

using namespace std;

void cargaclientes(void *&clientes) {
    ifstream archClientes;
    AperturaDeUnArchivoDeTextosParaLeer(archClientes, "clientes.csv");

    while (true) {
        int dni_buffer;
        char nombre_buffer[50];

        archClientes>>dni_buffer;
        if (archClientes.eof())
            break;
        archClientes.get(); //sacamos la coma
        archClientes.getline(nombre_buffer, 50);

        cout<<dni_buffer<<" "<<nombre_buffer<<endl;
    }
    archClientes.close();
    //prueba con función nuestra
    //imprimir_clientes_void(clientes);
    //prueba con función de librería 
    //muestraclientes(clientes);
}

void creareserva(void *&reserva) {
    ifstream archLibros;
    AperturaDeUnArchivoDeTextosParaLeer(archLibros, "libros.csv");

    while (true) {
        char codigo_buffer[8];
        char titulo_buffer[100];
        char autor_buffer[100];
        int stock__buffer;
        double precio_buffer;

        archLibros.getline(codigo_buffer, 8, ',');
        if (archLibros.eof())
            break;
        archLibros.getline(titulo_buffer, 100, ',');
        archLibros.getline(autor_buffer, 100, ',');
        archLibros>>stock__buffer;
        archLibros.get(); //sacamos la coma
        archLibros>>precio_buffer;
        //leemos el cambio de línea
        char buffer[256];
        archLibros.getline(buffer, 255);
        cout << codigo_buffer << " " << titulo_buffer << " " << autor_buffer << " " << stock__buffer << " " << precio_buffer << endl;        
    }    
    //prueba con función nuestra
    //imprimir_reservas_void(reserva);    
    //prueba con función de librería
    //muestrareservas(reserva);
    archLibros.close();
}

void cargareservar(void *clientes, void *reserva) {
    ifstream archPedidos;
    AperturaDeUnArchivoDeTextosParaLeer(archPedidos, "pedidos2.csv");
    
    while (true) {
        int dni_buffer;
        char codigo_buffer[8];
        
        archPedidos>>dni_buffer;
        if (archPedidos.eof())
            break;
        archPedidos.get(); //sacamos la coma
        archPedidos.getline(codigo_buffer, 8);
                        
        cout<<dni_buffer<<" "<<codigo_buffer<<endl;        
    }
    archPedidos.close();
}