#include <iostream>
#include "CPersona.hpp"
#include "Comunes.hpp"

using namespace std;

CPersona::CPersona() {
    this->paterno = nullptr;
    this->materno = nullptr;
    this->nombre = nullptr;
}

CPersona::CPersona(char *paterno) {
    this->setPaterno(paterno);
    this->materno = nullptr;
    this->nombre = nullptr;
}

CPersona::CPersona(char *paterno, char *materno, char *nombre) : CPersona() {
    this->setPaterno(paterno);
    this->setMaterno(materno);
    this->setNombre(nombre);
}

CPersona::CPersona(const CPersona &persona) {
    this->copiar_persona(persona);
}

CPersona::~CPersona() {
    if (this->paterno != nullptr)
        delete this->paterno;
    if (this->materno != nullptr)
        delete this->materno;
    if (this->nombre != nullptr)
        delete this->nombre;
    //cout << "se finalizó la invocación del destructor" << endl;
}

void CPersona::imprimir() {
    //cout << this->paterno << " " << this->materno << ", " << this->nombre << endl;
    CPersona *persona = this;
    cout << *persona;
}

void CPersona::pasar_a_mayuscula() {
    a_mayuscula(this->paterno);
    a_mayuscula(this->materno);
    a_mayuscula(this->nombre);
}

void CPersona::operator=(const CPersona &persona) {
    this->copiar_persona(persona);
}

void CPersona::copiar_persona(const CPersona &persona) {
    this->setPaterno(persona.paterno);
    this->setMaterno(persona.materno);
    this->setNombre(persona.nombre);
}

void CPersona::setPaterno(char *paterno) {
    //this->paterno = paterno;
    if (this->paterno != nullptr)
        delete this->paterno;
    this->paterno = mi_strdup(paterno);
}

char *CPersona::getPaterno() {
    //return this->paterno;
    if (this->paterno == nullptr)
        return nullptr;
    return mi_strdup(this->paterno);
}

void CPersona::setMaterno(char *materno) {
    //this->materno = materno;
    if (this->materno != nullptr)
        delete this->materno;
    this->materno = mi_strdup(materno);
}

char *CPersona::getMaterno() {
    //return this->materno;
    if (this->materno == nullptr)
        return nullptr;
    return mi_strdup(this->materno);
}

void CPersona::setNombre(char *nombre) {
    //this->nombre = nombre;
    if (this->nombre != nullptr)
        delete this->nombre;
    this->nombre = mi_strdup(nombre);
}

char *CPersona::getNombre() {
    //return this->nombre;
    if (this->nombre == nullptr)
        return nullptr;
    return mi_strdup(this->nombre);
}

ostream & operator<<(ostream &out, const CPersona &persona) {
    out << persona.paterno << " " << persona.materno << ", " << persona.nombre << endl;
    return out;
}

void operator>>(istream &in, CPersona &persona){
    char paterno[100];
    char materno[100];
    char nombre[100];
    
    in.getline(paterno, 100);
    in.getline(materno, 100);
    in.getline(nombre, 100);
    
    persona.paterno = mi_strdup(paterno);
    persona.materno = mi_strdup(materno);
    persona.nombre = mi_strdup(nombre);
}