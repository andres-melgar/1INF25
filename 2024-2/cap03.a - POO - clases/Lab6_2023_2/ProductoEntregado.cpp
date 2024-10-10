#include "ProductoEntregado.hpp"
#include "Comunes.hpp"

ProductoEntregado::ProductoEntregado() {
    this->codigo = nullptr;
    this->precio = 0;
}

ProductoEntregado::~ProductoEntregado() {
    libera_cadena(this->codigo);
}

void ProductoEntregado::operator=(const ProductoEntregado &productoEntregado) {
    this->codigo = mi_strdup(productoEntregado.codigo);
    this->precio = productoEntregado.precio;
}

ostream & operator<<(ostream &out, const ProductoEntregado &productoEntregado) {
    out << productoEntregado.codigo;
    return out;
}

void ProductoEntregado::SetPrecio(double precio) {
    this->precio = precio;
}

double ProductoEntregado::GetPrecio() const {
    return precio;
}

void ProductoEntregado::SetCodigo(char* codigo) {
    this->codigo = mi_strdup(codigo);
}

char* ProductoEntregado::GetCodigo() const {
    return mi_strdup(codigo);
}