#include <iostream>
#include <cstring>
#include <assert.h>
#include "CPersona.hpp"
#include "CFamilia.hpp"

using namespace std;

void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();
void test08();

int main(int argc, char** argv) {
    //    test01();
    //    test02();
    //    test03();
    //    test04();
    //    test05();
    //    test06();
    //    test07();
    test08();
    return 0;
}

void test08() {
    CPersona persona("Melgar", "Sasieta", "Héctor Andrés");

    assert(strcmp(persona.getPaterno(), "Melgar") == 0);
    assert(strcmp(persona.getMaterno(), "Sasieta") == 0);
    assert(strcmp(persona.getNombre(), "Héctor Andrés") == 0);

    CPersona persona_mayuscula;
    persona_mayuscula = persona;
    persona_mayuscula.pasar_a_mayuscula();

    assert(strcmp(persona_mayuscula.getPaterno(), "MELGAR") == 0);
    assert(strcmp(persona_mayuscula.getMaterno(), "SASIETA") == 0);
    assert(strcmp(persona_mayuscula.getNombre(), "HéCTOR ANDRéS") == 0);

    persona.imprimir();
    persona_mayuscula.imprimir();
}

void test07() {
    CPersona persona("Melgar", "Sasieta", "Héctor Andrés");

    assert(strcmp(persona.getPaterno(), "Melgar") == 0);
    assert(strcmp(persona.getMaterno(), "Sasieta") == 0);
    assert(strcmp(persona.getNombre(), "Héctor Andrés") == 0);

    //CPersona persona_mayuscula(persona);
    CPersona persona_mayuscula = persona;
    persona_mayuscula.pasar_a_mayuscula();

    assert(strcmp(persona_mayuscula.getPaterno(), "MELGAR") == 0);
    assert(strcmp(persona_mayuscula.getMaterno(), "SASIETA") == 0);
    assert(strcmp(persona_mayuscula.getNombre(), "HéCTOR ANDRéS") == 0);

    persona.imprimir();
    persona_mayuscula.imprimir();
}

void test06() {
    CPersona persona1("Melgar", "Sasieta", "Héctor Andrés");
    CPersona persona2("Melgar", "Sasieta", "Héctor Andrés");

    if (persona1 == persona2)
        cout << "Iguales" << endl;
    else
        cout << "Diferentes" << endl;
    
    if (persona1.operator ==(persona2))
        cout << "Iguales" << endl;
    else
        cout << "Diferentes" << endl;
}

void test05() {
    CFamilia familia;
}

void test04() {
    CPersona persona("Melgar", "Sasieta", "Héctor Andrés");

    assert(strcmp(persona.getPaterno(), "Melgar") == 0);
    assert(strcmp(persona.getMaterno(), "Sasieta") == 0);
    assert(strcmp(persona.getNombre(), "Héctor Andrés") == 0);

    CPersona persona_mayuscula = persona;
    persona_mayuscula.pasar_a_mayuscula();

    assert(strcmp(persona_mayuscula.getPaterno(), "MELGAR") == 0);
    assert(strcmp(persona_mayuscula.getMaterno(), "SASIETA") == 0);
    assert(strcmp(persona_mayuscula.getNombre(), "HéCTOR ANDRéS") == 0);

    persona.imprimir();
    persona_mayuscula.imprimir();
}

void test03() {
    CPersona padre("Melgar", "Sasieta", "Héctor Andrés");

    assert(strcmp(padre.getPaterno(), "Melgar") == 0);
    assert(strcmp(padre.getMaterno(), "Sasieta") == 0);
    assert(strcmp(padre.getNombre(), "Héctor Andrés") == 0);

    CPersona hija("Melgar", "Arauco", "Daniela");

    assert(strcmp(hija.getPaterno(), "Melgar") == 0);
    assert(strcmp(hija.getMaterno(), "Arauco") == 0);
    assert(strcmp(hija.getNombre(), "Daniela") == 0);

    //padre.imprimir();
    //hija.imprimir();
}

void test02() {
    CPersona persona("Melgar", "Sasieta", "Héctor Andrés");

    assert(strcmp(persona.getPaterno(), "Melgar") == 0);
    assert(strcmp(persona.getMaterno(), "Sasieta") == 0);
    assert(strcmp(persona.getNombre(), "Héctor Andrés") == 0);
}

void test01() {
    CPersona persona;
    assert(persona.getPaterno() == nullptr);
    assert(persona.getMaterno() == nullptr);
    assert(persona.getNombre() == nullptr);
}

