#include <iostream>
#include <cstring>
#include "Etiqueta.h"
#include "Comunes.h"

using namespace std;

Etiqueta::Etiqueta() {
    this->inicializar();
}

Etiqueta::Etiqueta(char *codigo, char *nombre) {
    this->inicializar();
    this->set_codigo(codigo);
    this->set_nombre(nombre);
}

Etiqueta::~Etiqueta() {
    this->liberar();
}

void Etiqueta::operator=(const Etiqueta &etiqueta) {
    this->liberar();
    this->copiar(etiqueta);
}

void Etiqueta::set_codigo(char *codigo) {
    strcpy(this->codigo, codigo);
}

void Etiqueta::set_nombre(char *nombre) {
    liberar_cadena(this->nombre);
    this->nombre = mi_strdup(nombre);
}

void Etiqueta::inicializar() {
    this->nombre = nullptr;
}

void Etiqueta::liberar() {
    liberar_cadena(this->nombre);
}

void Etiqueta::copiar(const Etiqueta &etiqueta) {
    this->set_codigo((char*)etiqueta.codigo);
    this->set_nombre(etiqueta.nombre);
}

bool operator>>(istream &archivo_de_etiquetas, Etiqueta &etiqueta) {
    char codigo_buffer[7];
    char nombre_buffer[20];

    archivo_de_etiquetas.getline(codigo_buffer, 7, ',');
    if (archivo_de_etiquetas.eof())
        return false;
    archivo_de_etiquetas.getline(nombre_buffer, 20, '\n');

    Etiqueta etiqueta_local(codigo_buffer, nombre_buffer);
    etiqueta = etiqueta_local;
    return true;
}

ostream & operator<<(ostream &out, Etiqueta &etiqueta) {
    out << etiqueta.codigo;
    out << ": ";
    out << etiqueta.nombre;
    return out;
}