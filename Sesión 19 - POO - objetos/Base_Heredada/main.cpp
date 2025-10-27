#include <iostream>

#include "Heredada.h"

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
    //test01();
    //test02();
    //test03();
    //test04();
    //test05();
    //test06();
    //test07();
    //test08();
    test09();
    return 0;
}

void test09() {
    cout << "test09" << endl;
    Base *ptrObjeto = new Heredada();
    delete ptrObjeto;
}

void test08() {
    cout << "test08" << endl;
    Base objeto = Heredada();
}

void test07() {
    cout << "test07" << endl;
    Base *ptrObjeto = new Heredada();
}

void test06() {
    cout << "test06" << endl;
    Heredada *ptrObjeto = new Heredada();
    delete ptrObjeto;
}

void test05() {
    cout << "test05" << endl;
    Heredada *ptrObjeto = new Heredada();
}

void test04() {
    cout << "test04" << endl;
    Base *ptrObjeto = new Base();
}

void test03() {
    cout << "test03" << endl;
    Base *ptrObjeto;
}

void test02() {
    cout << "test02" << endl;
    Base objeto;
}

void test01() {
    cout << "test01" << endl;
    Heredada objeto;
    cout << "Procesando pedidos " << endl;
    cout << "atendiendo pedidos ... " << endl;
}