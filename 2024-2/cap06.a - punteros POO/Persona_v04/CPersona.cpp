/* 
 * Archivo: CPersona.cpp
 * Autor: Andrés Melgar
 * Fecha: 25 de septiembre de 2024, 22:38
 */

#include <iostream>
#include "CPersona.hpp"
#include "Comunes.hpp"

using namespace std;

CPersona::CPersona() {
    this->paterno = nullptr;
    this->materno = nullptr;
    this->nombre = nullptr;
}

CPersona::CPersona(char *paterno, char *materno, char *nombre) {
    this->setPaterno(paterno);
    this->setMaterno(materno);
    this->setNombre(nombre);
}

CPersona::CPersona(const CPersona &persona) {
    this->setPaterno(persona.paterno);
    this->setMaterno(persona.materno);
    this->setNombre(persona.nombre);
}

CPersona::~CPersona() {
    libera_cadena(this->paterno);
    libera_cadena(this->materno);
    libera_cadena(this->nombre);
}

void CPersona::imprimir() {
    cout << "Impresión de CPersona" << endl;
}

void CPersona::pasar_a_mayuscula() {
    a_mayuscula(this->paterno);
    a_mayuscula(this->materno);
    a_mayuscula(this->nombre);
}

void CPersona::setPaterno(char *paterno) {
    libera_cadena(this->paterno);
    this->paterno = mi_strdup(paterno);
}

char *CPersona::getPaterno() {
    if (this->paterno == nullptr)
        return nullptr;
    return mi_strdup(this->paterno);
}

void CPersona::setMaterno(char *materno) {
    libera_cadena(this->materno);
    this->materno = mi_strdup(materno);
}

char *CPersona::getMaterno() {
    if (this->materno == nullptr)
        return nullptr;
    return mi_strdup(this->materno);
}

void CPersona::setNombre(char *nombre) {
    libera_cadena(this->nombre);
    this->nombre = mi_strdup(nombre);
}

char *CPersona::getNombre() {
    if (this->nombre == nullptr)
        return nullptr;
    return mi_strdup(this->nombre);
}
