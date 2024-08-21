#include <iostream>
#include "Punto.hpp"

using namespace std;

void imprime_punto(TPunto p){
    cout<<"("<<p.x<<", "<<p.y<<")";
}

void actualiza_punto(TPunto &p, int x, int y){
    p.x=x;
    p.y=y;
}

void suma(TPunto &p, int x, int y){
    p.x += x;
    p.y += y;
}

void suma(TPunto &p1, TPunto p2){
    p1.x += p2.x;
    p1.y += p2.y;
}

void suma(TPunto &p, int delta){
    p.x += delta;
    p.y += delta;
}

void incremento(TPunto &p){
    p.x++;
    p.y++;
}

void operator++(TPunto &p){
    incremento(p);
}

//el int le indica al compilador que esto sobrecargando la versión postfija
void operator++(TPunto &p, int){
    incremento(p);
}

ostream & operator<<(ostream &os, const TPunto &p){
    os<<"("<<p.x<<", "<<p.y<<")";
    return os;
}

bool operator==(const TPunto &p1, const TPunto &p2){
    return p1.x==p2.x && p1.y==p2.y;
}