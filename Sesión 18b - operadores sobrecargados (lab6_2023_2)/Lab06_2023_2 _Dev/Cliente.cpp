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

void Cliente::operator=(const Cliente &cliente) {
    libera_cadena(this->nombre);
    this->copia_cliente(cliente);
}

void Cliente::operator+=(const Pedido &pedido) {
    char *codigo_buffer = pedido.GetCodigo();
    double precio_buffer = pedido.GetPrecio_producto();
    this->cantidad_productos_entregados++;
    this->productos_entregados[this->cantidad_productos_entregados - 1].SetCodigo(codigo_buffer);
    this->productos_entregados[this->cantidad_productos_entregados - 1].SetPrecio(precio_buffer);
    this->monto_total += precio_buffer;
    libera_cadena(codigo_buffer);
}

bool Cliente::operator==(const Pedido &pedido) {
    return this->dni == pedido.GetDni_cliente();
}

void Cliente::copia_cliente(const Cliente &cliente) {
    this->dni = cliente.dni;
    this->nombre = mi_strdup(cliente.nombre);
    this->telefono = cliente.telefono;
    this->cantidad_productos_entregados = cliente.cantidad_productos_entregados;
    this->monto_total = cliente.monto_total;

    for (int i = 0; i < this->cantidad_productos_entregados; i++)
        this->productos_entregados[i] = cliente.productos_entregados[i];
}

bool operator>>(istream &archivo_de_clientes, Cliente &cliente) {
    int dni_buffer;
    char nombre_buffer[100];
    int telefono_buffer;

    archivo_de_clientes >> dni_buffer;
    if (archivo_de_clientes.eof())
        return false;
    archivo_de_clientes.get();
    archivo_de_clientes.getline(nombre_buffer, 100, ',');
    archivo_de_clientes >> telefono_buffer;
    char buffer[255];
    archivo_de_clientes.getline(buffer, 255);

    Cliente cliente_local(dni_buffer, nombre_buffer, telefono_buffer);
    cliente = cliente_local;
    return true;
}

ostream &operator<<(ostream &out, const Cliente &cliente) {
    out << setw(10) << cliente.dni;
    out << left << setw(30) << cliente.nombre;
    out << setw(8) << cliente.telefono;
    out << setw(5) << cliente.monto_total;
    if (cliente.cantidad_productos_entregados == 0)
        out << "NO SE LE ENTREGARON PRODUCTOS";
    else {
        out << "Productos entregados: ";
        for (int i = 0; i < cliente.cantidad_productos_entregados; i++) {
            out << cliente.productos_entregados[i] << " ";
        }
    }
    out << endl;
    return out;
}
