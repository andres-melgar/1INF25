/* 
 * Archivo: main.cpp
 * Autor: Andrés Melgar
 * Fecha: 26 de septiembre de 2024, 08:10
 */

#include <iostream>
#include <iomanip>
#include <assert.h>

#include "CFecha.hpp"

using namespace std;

void test01();
void test02();
void test03();
void test04();

int main(int argc, char** argv) {
    test01();
    test02();
    test03();
    test04();
    return 0;
}

void test04() {
    CFecha fecha;

    fecha.setDia(31);
    fecha.setMes(12);
    fecha.setAño(2024);
    fecha.incrementar_dia();
    assert(fecha.getDia() == 1);
    assert(fecha.getMes() == 1);
    assert(fecha.getAño() == 2025);

    fecha.setDia(28);
    fecha.setMes(2);
    fecha.setAño(2016);
    fecha.incrementar_dia();
    assert(fecha.getDia() == 29);
    assert(fecha.getMes() == 2);
    assert(fecha.getAño() == 2016);

    fecha.setDia(31);
    fecha.setMes(1);
    fecha.setAño(2015);
    fecha.incrementar_dia();
    assert(fecha.getDia() == 1);
    assert(fecha.getMes() == 2);
    assert(fecha.getAño() == 2015);
}

void test03() {
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
}

void test02() {
    CFecha fecha;
    fecha.setDia(29);
    fecha.setMes(11);
    fecha.setAño(1976);

    fecha.imprimir();
}

void test01() {
    CFecha fecha;
    fecha.setDia(29);
    fecha.setMes(11);
    fecha.setMes(15);
    fecha.setAño(1976);

    assert(fecha.getDia() == 29);
    assert(fecha.getMes() == 11);
    assert(fecha.getAño() == 1976);
}