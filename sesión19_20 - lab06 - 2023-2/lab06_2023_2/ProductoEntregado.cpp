#include "ProductoEntregado.hpp"
#include "Comunes.hpp"

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