#include <fstream>
#include "Cliente.hpp"
#include "Comunes.hpp"

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
    this->libera_cliente();
}

void Cliente::operator=(const Cliente &cliente) {
    this->libera_cliente();
    this->copia_cliente(cliente);
}

void Cliente::setMonto_total(double monto_total) {
    this->monto_total = monto_total;
}

double Cliente::getMonto_total() const {
    return monto_total;
}

void Cliente::setTelefono(int telefono) {
    this->telefono = telefono;
}

int Cliente::getTelefono() const {
    return telefono;
}

void Cliente::setNombre(char* nombre) {
    libera_cadena(this->nombre);
    this->nombre = mi_strdup(nombre);
}

char* Cliente::getNombre() const {
    return mi_strdup(this->nombre);
}

void Cliente::setDni(int dni) {
    this->dni = dni;
}

int Cliente::getDni() const {
    return dni;
}

void Cliente::copia_cliente(const Cliente &cliente){
    this->dni = cliente.dni;
    this->nombre = mi_strdup(cliente.nombre);
    this->telefono = cliente.telefono;
    this->cantidad_productos_entregados = cliente.cantidad_productos_entregados;
    this->monto_total = cliente.monto_total;
    
    for(int i=0; i<this->cantidad_productos_entregados; i++)
        this->productos_entregados[i] = cliente.productos_entregados[i];
//  Otra forma de implementar lo mismo es:
//    for(int i=0; i<this->cantidad_productos_entregados; i++){
//        this->productos_entregados[i].setCodigo(cliente.productos_entregados[i].codigo);
//        this->productos_entregados[i].setPrecio(cliente.productos_entregados[i].getPrecio());
//    }        
}

void Cliente::libera_cliente(){
    libera_cadena(this->nombre);
}

bool operator>>(istream &archivo_de_clientes, Cliente &cliente){
    
}