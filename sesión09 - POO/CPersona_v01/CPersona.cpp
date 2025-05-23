#include <iostream>
#include <cstring>
#include "CPersona.hpp"
#include "Comunes.hpp"

using namespace std;

void CPersona::imprimir() {
    cout << this->paterno << " " << this->materno << ", " << this->nombre << endl;
}

void CPersona::setPaterno(char *paterno) {
    //this->paterno = paterno;
    this->paterno = mi_strdup(paterno);
}

void CPersona::setMaterno(char *materno) {
    //this->materno = materno;
    this->materno = mi_strdup(materno);
}

void CPersona::setNombre(char *nombre) {
    //this->nombre = nombre;
    this->nombre = mi_strdup(nombre);
}

char *CPersona::getPaterno() {
    return mi_strdup(this->paterno);
}

char *CPersona::getMaterno() {
    return mi_strdup(this->materno);
}

char *CPersona::getNombre() {
    return mi_strdup(this->nombre);
}