#include <iostream>
#include <cstring>
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
    this->clonar(persona);
}

CPersona::~CPersona() {
    cout << "inicio del destructor" << endl;
    this->liberar();
    cout << "fin del destructor" << endl;
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

bool CPersona::operator==(const CPersona &persona) {
    return strcmp(this->paterno, persona.paterno) == 0 and
            strcmp(this->materno, persona.materno) == 0 and
            strcmp(this->nombre, persona.nombre) == 0;
}

void CPersona::operator=(const CPersona &persona) {
    this->liberar();
    this->clonar(persona);
}

void CPersona::liberar() {
    if (this->paterno != nullptr)
        delete this->paterno;
    if (this->materno != nullptr)
        delete this->materno;
    if (this->nombre != nullptr)
        delete this->nombre;
}

void CPersona::clonar(const CPersona &persona) {
    this->setPaterno(persona.paterno);
    this->setMaterno(persona.materno);
    this->setNombre(persona.nombre);
}