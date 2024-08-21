/* 
 * File:   Punto.hpp
 * Author: amelgar
 *
 * Created on 21 de agosto de 2024, 8:01
 */

#ifndef PUNTO_HPP
#define PUNTO_HPP
#include <iostream>

using namespace std;

struct TPunto{
    int x;
    int y;
};

void imprime_punto(TPunto p);

void actualiza_punto(TPunto &p, int x=0, int y=0);

void suma(TPunto &p, int x, int y);

void suma(TPunto &p1, TPunto p2);

void suma(TPunto &p, int delta);

void incremento(TPunto &p);

void operator++(TPunto &p);

void operator++(TPunto &p, int);

ostream & operator<<(ostream &os, const TPunto &p);

bool operator==(const TPunto &p1, const TPunto &p2);

#endif /* PUNTO_HPP */

