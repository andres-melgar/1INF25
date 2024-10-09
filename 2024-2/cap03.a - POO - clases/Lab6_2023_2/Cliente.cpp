#include <iostream>
#include "Cliente.hpp"
#include "Comunes.hpp"
#define DNI_VACIO -1
#define TELEFONO_VACIO -1

using namespace std;

Cliente::Cliente() {
    //cout << "Se está invocando al constructor de Cliente" << endl;
    this->dni = DNI_VACIO;
    this->nombre = nullptr;
    this->telefono = TELEFONO_VACIO;
    this->cantidad_productos_entregados = 0;
    this->monto_total = 0;
}

Cliente::Cliente(int dni, char *nombre, int telefono){
    this->dni = dni;
    this->nombre = mi_strdup(nombre);
    this->telefono = telefono;
    this->cantidad_productos_entregados = 0;
    this->monto_total = 0;
}

Cliente::Cliente(const Cliente &cliente){
    this->copia_cliente(cliente);
}

Cliente::~Cliente() {
    //cout << "Se está invocando al destructor de Cliente" << endl;
    libera_cadena(this->nombre);
}

void Cliente::operator=(const Cliente &cliente){
    this->copia_cliente(cliente);
}

bool operator>>(istream &archivo_de_clientes, Cliente &cliente) {
    int dni_buffer;
    char nombre_buffer[100];
    int telefono_buffer;
    
    archivo_de_clientes >> dni_buffer;
    if (archivo_de_clientes.eof())
        return false;
    
    archivo_de_clientes.get(); //saco la coma
    archivo_de_clientes.getline(nombre_buffer, 100, ',');
    archivo_de_clientes >> telefono_buffer;
    //leemos el cambio de línea
    char buffer[256];
    archivo_de_clientes.getline(buffer, 255);
    
    Cliente cliente_local(dni_buffer, nombre_buffer, telefono_buffer);
    cliente = cliente_local;    
    return true;
}

void Cliente::copia_cliente(const Cliente &cliente){
    this->dni = cliente.dni;
    this->nombre = mi_strdup(cliente.nombre);
    this->telefono = cliente.telefono;
    this->cantidad_productos_entregados = cliente.cantidad_productos_entregados;
    this->monto_total = cliente.monto_total;
    
    for (int i=0; i<this->cantidad_productos_entregados; i++)
        this->productos_entregados[i] = cliente.productos_entregados[i];
}