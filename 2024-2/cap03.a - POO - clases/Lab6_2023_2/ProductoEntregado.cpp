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