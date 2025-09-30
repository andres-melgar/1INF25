#include <iostream>
#include "Fecha.h"

using namespace std;

CFecha::CFecha() {
    this->dia = 30;
    this->mes = 9;
    this->año = 2025;
}

CFecha::CFecha(int dia, int mes, int año) {
    if (this->es_fecha_valida(dia, mes, año)) {
        this->dia = dia;
        this->mes = mes;
        this->año = año;
    } else
        this->setear_fecha_por_defecto();
}

void CFecha::imprimir() {
    cout << this->dia << "/" << this->mes << "/" << this->año << endl;
}

bool CFecha::es_bisiesto() {
    return this->es_bisiesto(this->año);
}

bool CFecha::es_bisiesto(int año) {
    bool p = (año % 4) == 0;
    bool q = (año % 100) == 0;
    bool r = (año % 400) == 0;
    return p and (not q or r);
}

void CFecha::incrementar_dia() {
    this->dia++;
    if (this->dia > this->obtener_dias_por_mes()) {
        this->dia = 1;
        this->mes++;
    }
    if (this->mes == 13) {
        this->año++;
        this->mes = 1;
    }
}

int CFecha::obtener_dias_por_mes() {
    return this->obtener_dias_por_mes(this->mes, this->año);
}

int CFecha::obtener_dias_por_mes(int mes, int año) {
    int maximo_por_mes;
    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            maximo_por_mes = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            maximo_por_mes = 30;
            break;
        case 2: maximo_por_mes = 28;
            if (this->es_bisiesto(año))
                maximo_por_mes++;
    }
    return maximo_por_mes;
}

void CFecha::setear_fecha_por_defecto() {
    this->dia = 1;
    this->mes = 1;
    this->año = 2024;
}

bool CFecha::es_fecha_valida(int dia, int mes, int año) {
    if (not this->es_mes_valido(mes))
        return false;
    if (not this->es_dia_valido(dia, mes, año))
        return false;
    return true;
}

bool CFecha::es_mes_valido(int mes) {
    return mes > 0 and mes < 13;
}

bool CFecha::es_dia_valido(int dia, int mes, int año) {
    int maximo_por_mes = this->obtener_dias_por_mes(mes, año);
    if (dia<=maximo_por_mes)
        return true;
    return false;
}

void CFecha::setDia(int dia) {
    if (this->es_dia_valido(dia, this->mes, this->año))
        this->dia = dia;
}

void CFecha::setMes(int mes) {
    if (this->es_mes_valido(mes))
        this->mes = mes;
    if (not this->es_dia_valido(this->dia, this->mes, this->año))
        this->dia = 1;
}

void CFecha::setAño(int año) {
    this->año = año;
}

int CFecha::getDia() {
    return this->dia;
}

int CFecha::getMes() {
    return this->mes;
}

int CFecha::getAño() {
    return this->año;
}
