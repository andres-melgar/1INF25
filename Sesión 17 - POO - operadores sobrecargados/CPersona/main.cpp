#include <iostream>
#include <cstring>
#include <cassert>
#include "CPersona.h"

using namespace std;

void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();
void test08();
void test09();

int main() {
    // test01();
    // test02();
    // test03();
    // test04();
    // test05();
    // test06();
    // test07();
    // test08();
    test09();
    return 0;
}

void test09() {
    cout << "test09" << endl;
    CPersona persona("Melgar", "Sasieta", "Héctor Andrés");
    CPersona persona2;
    persona.imprimir();
    persona2 = persona;
    persona2.imprimir();
    persona.pasar_a_mayuscula();
    persona2.imprimir();
}

void test08() {
    cout << "test08" << endl;
    CPersona persona2("Melgar", "Sasieta", "Andrés");
    persona2.imprimir();

    CPersona persona;
    persona.setPaterno("Melgar");
    persona.setMaterno("Sasieta");
    persona.setNombre("Andrés");
    persona.setPaterno("Benavides");
    persona.imprimir();
}

void test07() {
    cout << "test07" << endl;

    CPersona persona("Melgar", "Sasieta", "Héctor Andrés");
    assert(strcmp(persona.getPaterno(), "Melgar")==0);
    assert(strcmp(persona.getMaterno(), "Sasieta")==0);
    assert(strcmp(persona.getNombre(), "Héctor Andrés")==0);

    //se construye el objeto persona2 con el valor de persona
    //en esta situación se ejecuta en código denominado
    //constructor copia
    CPersona persona2(persona);
    persona.imprimir();
    persona2.pasar_a_mayuscula();
    persona2.imprimir();
    persona.imprimir();
}

void test06() {
    cout << "test06" << endl;

    CPersona persona("Melgar", "Sasieta", "Héctor Andrés");
    assert(strcmp(persona.getPaterno(), "Melgar")==0);
    assert(strcmp(persona.getMaterno(), "Sasieta")==0);
    assert(strcmp(persona.getNombre(), "Héctor Andrés")==0);

    CPersona persona2 = persona; //se hace un copia superficial de los atributos
    //¿Cómo se resuelve este problema?
    // Rpta: con el constructor copia
    persona.imprimir();
    persona2.pasar_a_mayuscula();
    persona2.imprimir();
    persona.imprimir();
}

void test05() {
    cout << "test05" << endl;

    CPersona persona("Melgar", "Sasieta", "Héctor Andrés");
    assert(strcmp(persona.getPaterno(), "Melgar")==0);
    assert(strcmp(persona.getMaterno(), "Sasieta")==0);
    assert(strcmp(persona.getNombre(), "Héctor Andrés")==0);
}

void test04() {
    cout << "test04" << endl;

    CPersona persona;
    assert(persona.getPaterno() == nullptr);
    assert(persona.getMaterno() == nullptr);
    assert(persona.getNombre() == nullptr);
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