#include <iostream>
#include "punto.h"

using namespace std;

void actualiza_punto(TPunto &p, int x, int y) {
    p.x = x;
    p.y = y;
}

void inicializa_punto(TPunto &p) {
    actualiza_punto(p);
}

void imprimir_punto(TPunto p) {
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

void suma(TPunto &p, int x, int y) {
    p.x += x;
    p.y += y;
}

void suma(TPunto &p1, TPunto p2) {
    p1.x += p2.x;
    p1.y += p2.y;
}

void suma(TPunto &p, int desplazamiento) {
    p.x += desplazamiento;
    p.y += desplazamiento;
}

void incrementa(TPunto &p) {
    p.x++;
    p.y++;
}

//sobrecarga de un operador unario en su versión prefija
void operator++(TPunto &p) {
    incrementa(p);
}

//sobrecarga de un operador unario en su versión posfija
void operator++(TPunto &p, int) {
    ++p;
}

ostream & operator<<(ostream &os, const TPunto &p) {
    os << "(" << p.x << "," << p.y << ")";
    return os;
}

istream & operator>>(istream &arch, TPunto &p) {
    arch >> p.x;
    if (arch.eof())
        return arch;
    arch.get();
    arch >> p.y;
    return arch;
}

bool operator==(const TPunto &p1, const TPunto &p2) {
    return p1.x == p2.x && p1.y == p2.y;
}

TPunto operator+(const TPunto &p1, const TPunto &p2) {
    return TPunto(p2.x+p1.x, p2.y+p1.y);
}