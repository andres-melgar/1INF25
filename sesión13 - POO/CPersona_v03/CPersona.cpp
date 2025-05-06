#include <iostream>
#include <cstring>
#include "CPersona.hpp"
#include "Comunes.hpp"

using namespace std;

CPersona::CPersona(){
    this->paterno = nullptr;
    this->materno = nullptr;
    this->nombre = nullptr;
}

CPersona::CPersona(char *paterno, char *materno, char *nombre){
    this->setPaterno(paterno);
    this->setMaterno(materno);
    this->setNombre(nombre);
}

CPersona::CPersona(const CPersona &persona){
    this->setPaterno(persona.paterno);
    this->setMaterno(persona.materno);
    this->setNombre(persona.nombre);
}

CPersona::~CPersona(){
    if (this->paterno != nullptr)
        delete this->paterno;
    if (this->materno != nullptr)
        delete this->materno;
    if (this->nombre != nullptr)
        delete this->nombre;
}

void CPersona::imprimir() {
    cout << this->paterno << " " << this->materno << ", " << this->nombre << endl;
}

void CPersona::pasar_a_mayuscula(){
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