/* 
 * Archivo: CFecha.cpp
 * Autor: Andrés Melgar
 * Fecha: 26 de septiembre de 2024, 08:11
 */

#include <iostream>
#include "CFecha.hpp"

using namespace std;

void CFecha::imprimir() {
    cout << this->dia << "/" << this->mes << "/" << this->año << endl;
}

bool CFecha::es_bisiesto() {
    bool p = (this->año % 4) == 0;
    bool q = (this->año % 100) == 0;
    bool r = (this->año % 400) == 0;
    return p and (not q or r);
}

void CFecha::incrementar_dia() {
    this->dia++;
    if (this->dia > this->obtener_dias_por_mes()) {
        this->dia = 1;
        this->mes++;
    }
    if (this->mes == 13) {
        this->mes = 1;
        this->año++;
    }
}

int CFecha::obtener_dias_por_mes() {
    int maximo_por_mes;
    switch (this->mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: maximo_por_mes = 31;
            break;
        case 4: case 6: case 9: case 11: maximo_por_mes = 30;
            break;
        case 2: maximo_por_mes = 28;
            if (this->es_bisiesto())
                maximo_por_mes++;
    }
    return maximo_por_mes;
}

void CFecha::setDia(int dia) {
    if (dia > 0 and dia < 32)
        this->dia = dia;
}

int CFecha::getDia() {
    return this->dia;
}

void CFecha::setMes(int mes) {
    if (mes > 0 and mes < 13)
        this->mes = mes;
}

int CFecha::getMes() {
    return this->mes;
}

void CFecha::setAño(int año) {
    this->año = año;
}

int CFecha::getAño() {
    return this->año;
}