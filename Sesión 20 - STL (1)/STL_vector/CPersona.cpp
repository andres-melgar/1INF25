#include <iostream>
#include "CPersona.h"
#include "comunes.h"

using namespace std;

CPersona::CPersona() {
    this->inicializar();
}

CPersona::CPersona(char *paterno, char *materno, char *nombre) {
    this->inicializar();
    this->inicializar(paterno, materno, nombre);
}

//constructor copia
CPersona::CPersona(const CPersona &persona) {
    this->inicializar();
    this->inicializar(persona.paterno, persona.materno, persona.nombre);
}

void CPersona::inicializar() {
    this->paterno = nullptr;
    this->materno = nullptr;
    this->nombre = nullptr;
}

void CPersona::inicializar(char * paterno, char * materno, char * nombre) {
    this->setPaterno(paterno);
    this->setMaterno(materno);
    this->setNombre(nombre);
}

CPersona::~CPersona() {
    this->liberar();
}

void CPersona::liberar() {
    if (this->paterno != nullptr)
        delete [] this->paterno;
    if (this->materno != nullptr)
        delete [] this->materno;
    if (this->nombre != nullptr)
        delete [] this->nombre;
}

void CPersona::clonar(const CPersona &persona) {
    this->inicializar(persona.paterno, persona.materno, persona.nombre);
}

void CPersona::operator=(const CPersona &persona) {
    this->liberar();
    this->clonar(persona);
}

void CPersona::imprimir() {
    cout << this->paterno << " " << this->materno << ", " << this->nombre << endl;
}

void CPersona::pasar_a_mayuscula() {
    a_mayuscula(this->paterno);
    a_mayuscula(this->materno);
    a_mayuscula(this->nombre);
}

void CPersona::setPaterno(char *paterno) {
    if (this->paterno != nullptr)
        delete []this->paterno;
    this->paterno = mi_strdup(paterno);
}

void CPersona::setMaterno(char *materno) {
    if (this->materno != nullptr)
        delete [] this->materno;
    this->materno = mi_strdup(materno);
}

void CPersona::setNombre(char *nombre) {
    if (this->nombre != nullptr)
        delete [] this->nombre;
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

ostream &operator<<(ostream &out, const CPersona &persona) {
    out << persona.paterno << " " << persona.materno << ", " << persona.nombre << endl;
    return out;
}