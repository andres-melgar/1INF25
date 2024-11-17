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
}

void test02() {
    cout << "Prueba: Plantilla<string>" << endl;

}

void test01() {
    cout << "Prueba: Plantilla<int>" << endl;

}

