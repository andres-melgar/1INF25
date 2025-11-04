#include <iostream>
#include "Canal.h"
#include "Comunes.h"

using namespace std;

Canal::Canal() {
    this->inicializar();
}

Canal::Canal(const Canal &canal) {
    this->inicializar();
    this->copiar(canal);
}

Canal::~Canal() {
    this->liberar();
}

void Canal::set_nombre(char *nombre) {
    liberar_cadena(this->nombre);
    this->nombre = mi_strdup(nombre);
}

void Canal::set_categoria(char *categoria) {
    liberar_cadena(this->categoria);
    this->categoria = mi_strdup(categoria);
}

void Canal::set_etiquetas(char *etiquetas) {
    liberar_cadena(this->etiquetas);
    this->etiquetas = mi_strdup(etiquetas);
}

void Canal::set_seguidores(int seguidores) {
    this->seguidores = seguidores;
}

int Canal::get_seguidores() {
    return this->seguidores;
}

void Canal::operator=(const Canal &canal) {
    this->liberar();
    this->copiar(canal);
}

void Canal::inicializar_etiquetas() {
    for (int i=0; i< MAX_VECTOR_ETIQUETAS; i++) {
        this->vector_etiquetas[i] = nullptr;
    }
}

void Canal::inicializar() {
    this->nombre = nullptr;
    this->categoria = nullptr;
    this->etiquetas = nullptr;
    this->seguidores = CANAL_NO_LEIDO;
    this->cantidad_etiquetas = 0;
    this->inicializar_etiquetas();
}

void Canal::copias_etiquetas(const Canal &canal) {
    this->cantidad_etiquetas = canal.cantidad_etiquetas;
    for (int i = 0; i < this->cantidad_etiquetas; i++) {
        this->vector_etiquetas[i] = mi_strdup(canal.vector_etiquetas[i]);
    }
}

void Canal::copiar(const Canal &canal) {
    this->set_nombre(canal.nombre);
    this->set_categoria(canal.categoria);
    this->set_etiquetas(canal.etiquetas);
    this->set_seguidores(canal.seguidores);
    this->copias_etiquetas(canal);
}

void Canal::liberar_etiquetas() {
    for (int i = 0; i < this->cantidad_etiquetas; i++) {
        liberar_cadena(this->vector_etiquetas[i]);
    }
    this->cantidad_etiquetas = 0;
}

void Canal::liberar() {
    liberar_cadena(this->nombre);
    liberar_cadena(this->categoria);
    liberar_cadena(this->etiquetas);
    this->liberar_etiquetas();
}

ostream &operator<<(ostream &out, Canal &canal) {
    out << canal.nombre;
    out << ": ";
    out << canal.seguidores;
    out << " - ";
    out << canal.categoria;
    out << "[";
    for (int i = 0; i < canal.cantidad_etiquetas; i++) {
        out << canal.vector_etiquetas[i];
        if (i > 0 and i != canal.cantidad_etiquetas - 1)
            out << ", ";
    }
    out << "]";
    return out;
}
