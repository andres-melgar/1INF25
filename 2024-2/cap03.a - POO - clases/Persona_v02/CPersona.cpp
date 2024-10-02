/* 
 * Archivo: CPersona.cpp
 * Autor: Andrés Melgar
 * Fecha: 26 de septiembre de 2024, 08:37
 */

#include <iostream>
#include "CPersona.hpp"
#include "Comunes.hpp"

using namespace std;

void CPersona::imprimir() {
    cout << this->paterno << " " << this->materno << ", " << this->nombre << endl;
}

void CPersona::setPaterno(char *paterno) {
    this->paterno = mi_strdup(paterno);
}

char *CPersona::getPaterno() {
    return mi_strdup(this->paterno);
}

void CPersona::setMaterno(char *materno) {
    this->materno = mi_strdup(materno);
}

char *CPersona::getMaterno() {
    return mi_strdup(this->materno);
}

void CPersona::setNombre(char *nombre) {
    this->nombre = mi_strdup(nombre);
}

char *CPersona::getNombre() {
    return mi_strdup(this->nombre);
}