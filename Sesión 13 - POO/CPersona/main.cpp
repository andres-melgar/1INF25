#include <iostream>
#include <cstring>
#include "CPersona.h"

using namespace std;

void test01();
void test02();
void test03();

int main() {
    test01();
    test02();
    test03();
    return 0;
}

void test03() {
    cout << "test03" << endl;
    char paterno[100];
    char materno[100];
    char nombres[100];
    strcpy(paterno, "Melgar");
    strcpy(materno, "Sasieta");
    strcpy(nombres, "Héctor Andrés");

    CPersona persona;
    persona.setPaterno(paterno);
    persona.setMaterno(materno);
    persona.setNombre(nombres);
    cout << "1: ";
    persona.imprimir();

    char *crack_paterno = persona.getPaterno();
    strcpy(crack_paterno, "Cueva");
    cout << "2: ";
    persona.imprimir();
}

void test02() {
    cout << "test02" << endl;
    char paterno[100];
    char materno[100];
    char nombres[100];
    strcpy(paterno, "Melgar");
    strcpy(materno, "Sasieta");
    strcpy(nombres, "Héctor Andrés");

    CPersona persona;
    persona.setPaterno(paterno);
    persona.setMaterno(materno);
    persona.setNombre(nombres);
    cout << "1: ";
    persona.imprimir();

    strcpy(paterno, "Guanira");
    strcpy(materno, "Erazo");
    strcpy(nombres, "Rony");
    cout << "2: ";
    persona.imprimir();
}

void test01() {
    cout << "test01" << endl;
    char paterno[100];
    char materno[100];
    char nombres[100];
    strcpy(paterno, "Melgar");
    strcpy(materno, "Sasieta");
    strcpy(nombres, "Hécto Andrés");
    CPersona persona;
    persona.setPaterno(paterno);
    persona.setMaterno(materno);
    persona.setNombre(nombres);
    persona.imprimir();
}