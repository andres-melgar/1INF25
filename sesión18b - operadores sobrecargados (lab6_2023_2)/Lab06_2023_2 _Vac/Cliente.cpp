#include <iostream>
#include <iomanip>
#include "Cliente.h"
#include "Comunes.h"

using namespace std;

Cliente::Cliente() {
    this->dni = DNI_VACIO;
    this->nombre = nullptr;
    this->telefono = TELEFONO_VACIO;
    this->cantidad_productos_entregados = 0;
    this->monto_total = 0;
}

Cliente::Cliente(int dni, char *nombre, int telefono) {
    this->dni = dni;
    this->nombre = mi_strdup(nombre);
    this->telefono = telefono;
    this->cantidad_productos_entregados = 0;
    this->monto_total = 0;
}

Cliente::Cliente(const Cliente &cliente) {
    this->copia_cliente(cliente);
}

Cliente::~Cliente() {
    libera_cadena(this->nombre);
}

void Cliente::copia_cliente(const Cliente &cliente) {
    this->dni = cliente.dni;
    this->nombre = mi_strdup(cliente.nombre);
    this->telefono = cliente.telefono;
    this->cantidad_productos_entregados = cliente.cantidad_productos_entregados;
    this->monto_total = cliente.monto_total;

    for (int i = 0; i<this->cantidad_productos_entregados; i++)
        this->productos_entregados[i] = cliente.productos_entregados[i];
}