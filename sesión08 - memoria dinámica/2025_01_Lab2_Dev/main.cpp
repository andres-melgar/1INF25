#include <iostream>
#include <iomanip>
#include <cstring>
#include <cassert>
#include "conductores.h"
#include "infracciones.h"
#include "faltas.h"

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
    Faltas faltas;
    cargar_faltas_de_los_conductores(faltas, "conductores.csv", "infracciones.csv", "faltas.csv");

    assert(faltas.conductores.cantidad == 112);
    assert(faltas.conductores.dnis[0] == 63736112);
    assert(strcmp(faltas.conductores.nombres[0], "ZAMORA ZAVALETA RONAL MANUEL") == 0);
    assert(faltas.conductores.dnis[1] == 45043076);
    assert(strcmp(faltas.conductores.nombres[1], "VEGA VILCARA CARMELA TERESA") == 0);
    assert(faltas.conductores.dnis[111] == 52002275);
    assert(strcmp(faltas.conductores.nombres[111], "CASANOVA ZEGARRA MARITZA") == 0);

    assert(faltas.infracciones.cantidad == 114);
    assert(faltas.infracciones.codigos[0] == 101);
    assert(strcmp(faltas.infracciones.descripciones[0], "Adelantar o sobrepasar en forma indebida a otro vehículo.") == 0);
    assert(strcmp(faltas.infracciones.tipos[0], "Grave") == 0);
    assert(faltas.infracciones.valores[0] == 316.00);

    assert(faltas.infracciones.codigos[1] == 102);
    assert(strcmp(faltas.infracciones.descripciones[1], "No hacer señales ni tomar las precauciones para girar voltear en U.") == 0);
    assert(strcmp(faltas.infracciones.tipos[1], "Grave") == 0);
    assert(faltas.infracciones.valores[1] == 316.00);

    assert(faltas.infracciones.codigos[113] == 341);
    assert(strcmp(faltas.infracciones.descripciones[113], "Circular o impedir el tránsito en situaciones de desastre natural o emergencia incumpliendo las disposiciones de la autoridad competente para la restricción de acceso a las vías.") == 0);
    assert(strcmp(faltas.infracciones.tipos[113], "Muy Grave") == 0);
    assert(faltas.infracciones.valores[113] == 5925.00);
}

void test03() {
    Conductores conductores;
    conductores += "conductores.csv";

    int i = retornar_indice_del_conductor(conductores, 63736112);
    assert(i == 0);
    i = retornar_indice_del_conductor(conductores, 45043076);
    assert(i == 1);
    i = retornar_indice_del_conductor(conductores, 52002275);
    assert(i == 111);
}

void test02() {
    Infracciones infracciones;
    infracciones += "infracciones.csv";

    assert(infracciones.cantidad == 114);
    assert(infracciones.codigos[0] == 101);
    assert(strcmp(infracciones.descripciones[0], "Adelantar o sobrepasar en forma indebida a otro vehículo.") == 0);
    assert(strcmp(infracciones.tipos[0], "Grave") == 0);
    assert(infracciones.valores[0] == 316.00);

    assert(infracciones.codigos[1] == 102);
    assert(strcmp(infracciones.descripciones[1], "No hacer señales ni tomar las precauciones para girar voltear en U.") == 0);
    assert(strcmp(infracciones.tipos[1], "Grave") == 0);
    assert(infracciones.valores[1] == 316.00);

    assert(infracciones.codigos[113] == 341);
    assert(strcmp(infracciones.descripciones[113], "Circular o impedir el tránsito en situaciones de desastre natural o emergencia incumpliendo las disposiciones de la autoridad competente para la restricción de acceso a las vías.") == 0);
    assert(strcmp(infracciones.tipos[113], "Muy Grave") == 0);
    assert(infracciones.valores[113] == 5925.00);
}

void test01() {
    Conductores conductores;
    conductores += "conductores.csv";

    assert(conductores.cantidad == 112);
    assert(conductores.dnis[0] == 63736112);
    assert(strcmp(conductores.nombres[0], "ZAMORA ZAVALETA RONAL MANUEL") == 0);
    assert(conductores.dnis[1] == 45043076);
    assert(strcmp(conductores.nombres[1], "VEGA VILCARA CARMELA TERESA") == 0);
    assert(conductores.dnis[111] == 52002275);
    assert(strcmp(conductores.nombres[111], "CASANOVA ZEGARRA MARITZA") == 0);
}