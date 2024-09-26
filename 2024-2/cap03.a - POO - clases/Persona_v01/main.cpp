/* 
 * Archivo: main.cpp
 * Autor: Andrés Melgar
 * Fecha: 26 de septiembre de 2024, 08:37
 */

#include <iostream>
#include <iomanip>
#include <cstring>
#include <assert.h>

#include "CPersona.hpp"

using namespace std;

int main(int argc, char** argv) {
    CPersona persona;
    char paterno[100];
    char materno[100];
    char nombre[100];
    
    strcpy(paterno, "Melgar");
    strcpy(materno, "Sasieta");
    strcpy(nombre, "Héctor Andrés");
    
    persona.setPaterno(paterno);
    persona.setMaterno(materno);
    persona.setNombre(nombre);
    persona.imprimir();
    
    strcpy(nombre, "Roberto Eduardo");
    persona.imprimir();
    
    char *crack_materno = persona.getMaterno();
    strcpy(crack_materno, "Guanira");
    persona.imprimir();
    
    return 0;
}

