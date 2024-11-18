#include <iostream>
#include "CLista.hpp"
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
    cout << "test03: CPersona"<<endl;
    class CLista<CPersona> listaPersonas("personas.txt");
    listaPersonas.imprimir();
}

void test02(){
    cout << "test02: string"<<endl;
    class CLista<string> listaCadenas("cadenas.txt");
    listaCadenas.imprimir();
}

void test01(){
    cout << "test01: int"<<endl;
    class CLista<int> listaEnteros("numeros.txt");
    listaEnteros.imprimir();
}