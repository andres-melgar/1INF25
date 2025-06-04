#include <fstream>
#include "ProductoEntregado.hpp"
#include "Comunes.hpp"

using namespace std;

ProductoEntregado::ProductoEntregado() {
    this->codigo = nullptr;
    this->precio = 0;
}

ProductoEntregado::ProductoEntregado(char *codigo, double precio) {
    this->codigo = mi_strdup(codigo);
    this->precio = precio;
}

ProductoEntregado::~ProductoEntregado() {
    libera_cadena(this->codigo);
}

void ProductoEntregado::operator=(const ProductoEntregado &productoEntregado){
    libera_cadena(this->codigo);
    this->codigo = mi_strdup(productoEntregado.codigo);
    this->precio = productoEntregado.precio;
}

void ProductoEntregado::SetPrecio(double precio) {
    this->precio = precio;
}

double ProductoEntregado::GetPrecio() const {
    return precio;
}

void ProductoEntregado::SetCodigo(char* codigo) {
    libera_cadena(this->codigo);
    this->codigo = mi_strdup(this->codigo);
}

char* ProductoEntregado::GetCodigo() const {
    return mi_strdup(this->codigo);
}

ostream & operator<<(ostream &out, const ProductoEntregado &productoEntregado){
    out << productoEntregado.codigo;
    return out;
}