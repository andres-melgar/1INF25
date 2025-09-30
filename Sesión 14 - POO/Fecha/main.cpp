#include <iostream>
#include <cassert>
#include "Fecha.h"

using namespace std;

void test01();
void test02();
void test03();
void test04();
void test05();
void test06();

int main() {
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
    return 0;
}

void test06() {
    cout << "test06" << endl;
    CFecha fecha(1,1,2024);
    assert(fecha.getDia()==1);
    assert(fecha.getMes()==1);
    assert(fecha.getAño()==2024);

    fecha=CFecha(29,2,2016);
    assert(fecha.getDia()==29);
    assert(fecha.getMes()==2);
    assert(fecha.getAño()==2016);

    fecha=CFecha(35,2,2016);
    assert(fecha.getDia()==1);
    assert(fecha.getMes()==1);
    assert(fecha.getAño()==2024);

    fecha=CFecha(1,13,2025);
    assert(fecha.getDia()==1);
    assert(fecha.getMes()==1);
    assert(fecha.getAño()==2024);
}

void test05() {
    cout << "test05" << endl;
    CFecha fecha;
    assert(fecha.getDia()==30);
    assert(fecha.getMes()==9);
    assert(fecha.getAño()==2025);
}

void test04() {
    cout << "test04" << endl;
    CFecha fecha;

    fecha.setAño(2025);
    fecha.setMes(12);
    fecha.setDia(31);
    fecha.incrementar_dia();
    assert(fecha.getDia()==1);
    assert(fecha.getMes()==1);
    assert(fecha.getAño()==2026);

    fecha.setAño(2016);
    fecha.setMes(2);
    fecha.setDia(28);
    fecha.incrementar_dia();
    assert(fecha.getDia()==29);
    assert(fecha.getMes()==2);
    assert(fecha.getAño()==2016);

    fecha.setAño(2025);
    fecha.setMes(1);
    fecha.setDia(31);
    fecha.incrementar_dia();
    assert(fecha.getDia()==1);
    assert(fecha.getMes()==2);
    assert(fecha.getAño()==2025);
}

void test03() {
    cout << "test03" << endl;
    CFecha fecha;

    fecha.setAño(2017);
    assert(fecha.es_bisiesto() == false);
    fecha.setAño(2016);
    assert(fecha.es_bisiesto() == true);
    fecha.setAño(2012);
    assert(fecha.es_bisiesto() == true);
    fecha.setAño(2023);
    assert(fecha.es_bisiesto() == false);
    fecha.setAño(2024);
    assert(fecha.es_bisiesto() == true);
    fecha.setAño(2025);
    assert(fecha.es_bisiesto() == false);

    fecha.imprimir();
}

void test02() {
    cout << "test02" << endl;
    CFecha fecha;
    fecha.setDia(29);
    fecha.setMes(11);
    fecha.setAño(1976);

    fecha.imprimir();
}

void test01() {
    cout << "test01" << endl;
    CFecha fecha;
    fecha.setDia(29);
    fecha.setMes(11);
    fecha.setAño(1976);

    assert(fecha.getDia()==29);
    assert(fecha.getMes()==11);
    assert(fecha.getAño()==1976);
}