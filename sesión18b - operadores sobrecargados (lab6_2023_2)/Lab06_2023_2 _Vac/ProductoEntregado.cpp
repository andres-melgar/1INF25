#include "ProductoEntregado.h"
#include "Comunes.h"

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

void ProductoEntregado::SetPrecio(double precio) {
    this->precio = precio;
}

double ProductoEntregado::GetPrecio() const {
    return precio;
}

void ProductoEntregado::SetCodigo(char* codigo) {
    libera_cadena(this->codigo);
    this->codigo = mi_strdup(codigo);
}

char* ProductoEntregado::GetCodigo() const {
    return mi_strdup(codigo);
}