//
// Created by amelgar on 19/08/2025.
//

#ifndef PUNTO_V02_PUNTO_H
#define PUNTO_V02_PUNTO_H

#include <iostream>

using namespace std;

struct TPunto {
    double x;
    double y;
};

void actualiza_punto(TPunto &p, int x=0, int y = 0);

void inicializa_punto(TPunto &p);

void imprimir_punto(TPunto p);

void suma(TPunto &p, int x, int y);

void suma(TPunto &p1, TPunto p2);

void suma(TPunto &p, int desplazamiento);

void incrementa(TPunto &p);

void operator++(TPunto &p);

void operator++(TPunto &p, int);

ostream & operator<<(ostream &os, const TPunto &p);

bool operator==(const TPunto &p1, const TPunto &p2);

TPunto operator+(const TPunto &p1, const TPunto &p2);

#endif //PUNTO_V02_PUNTO_H