#include <iostream>
#include "Plantilla.hpp"
#include "CPersona.hpp"

using namespace std;

void test01();
void test02();
void test03();

int main(int argc, char** argv) {
    test01();
    test02();
    test03();
    return 0;
}

void test03(){
    cout << "Prueba: Plantilla<CPersona>" << endl;
    class Plantilla<CPersona> objPersona;
    CPersona persona("Melgar", "Sasieta", "Héctor Andrés");
    objPersona.SetDato(persona);
    objPersona.imprimir();
}

void test02() {
    cout << "Prueba: Plantilla<string>" << endl;
    class Plantilla<string> objCadena;
    objCadena.SetDato("Programación 2");
    objCadena.imprimir();
    //objCadena.leer();
    //objCadena.imprimir();
}

void test01() {
    cout << "Prueba: Plantilla<int>" << endl;
    class Plantilla<int> objEntero;
    objEntero.SetDato(15);
    objEntero.imprimir();
    //objEntero.leer();
    //objEntero.imprimir();
}

