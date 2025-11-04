#include <iostream>
#include <cstring>
#include "Categoria.h"
#include "Comunes.h"

using namespace std;

Categoria::Categoria() {
    this->inicializar();
}

Categoria::~Categoria() {
    this->liberar();
}

void Categoria::operator=(const Categoria &categoria) {
    this->liberar();
    this->copiar(categoria);
}

void Categoria::set_codigo(char *codigo) {
    strcpy(this->codigo, codigo);
}

void Categoria::set_nombre(char *nombre) {
    liberar_cadena(this->nombre);
    this->nombre = mi_strdup(nombre);
}

void Categoria::set_descripcion(char *descripcion) {
    liberar_cadena(this->descripcion);
    this->descripcion = mi_strdup(descripcion);
}

void Categoria::inicializar() {
    this-> nombre = nullptr;
    this->descripcion = nullptr;
}

void Categoria::liberar() {
    liberar_cadena(this->nombre);
    liberar_cadena(this->descripcion);
}

void Categoria::copiar(const Categoria &categoria) {
    this->set_codigo((char*)categoria.codigo);
    this->set_nombre(categoria.nombre);
    this->set_descripcion(categoria.descripcion);
}

bool operator>>(istream &archivo_de_categorias, Categoria &categoria) {
    char codigo_buffer[7];
    char nombre_buffer[60];
    char descripcion_buffer[80];

    archivo_de_categorias.getline(codigo_buffer, 7, ',');
    if (archivo_de_categorias.eof())
        return false;
    archivo_de_categorias.getline(nombre_buffer, 60, ',');
    archivo_de_categorias.getline(descripcion_buffer, 80, '\n');

    categoria.set_codigo(codigo_buffer);
    categoria.set_nombre(nombre_buffer);
    categoria.set_descripcion(descripcion_buffer);

    return true;
}

ostream & operator<<(ostream &out, Categoria &categoria) {
    out << categoria.codigo;
    out << ": ";
    out << categoria.nombre;
    out << " - ";
    out << categoria.descripcion;
    return out;
}
