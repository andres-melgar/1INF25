#include <iostream>
#include <cassert>
#include "punto.h"

using namespace std;

int main() {
    TPunto p1 = {10.5, 20.5};

    assert(p1.x==10.5 && p1.y==20.5);
    imprimir_punto(p1);

    inicializa_punto(p1);
    assert(p1.x==0 && p1.y==0);
    imprimir_punto(p1);

    actualiza_punto(p1, 2.0, 3.0);
    assert(p1.x==2.0 && p1.y==3.0);

    actualiza_punto(p1, 5.0);
    assert(p1.x==5.0 && p1.y==0.0);

    actualiza_punto(p1);
    assert(p1.x==0.0 && p1.y==0.0);

    TPunto p2;
    inicializa_punto(p2);
    assert(p2.x==0 && p2.y==0);

    suma(p2, 15, 24);
    assert(p2.x==15 && p2.y==24);

    suma(p2, 3, 2);
    assert(p2.x==18 && p2.y==26);

    suma(p2, p1);
    assert(p2.x==18 && p2.y==26);

    suma(p2, 100);
    assert(p2.x==118 && p2.y==126);

    incrementa(p2);
    assert(p2.x==119 && p2.y==127);

    ++p2;
    assert(p2.x==120 && p2.y==128);

    operator++(p2);
    assert(p2.x==121 && p2.y==129);

    p2++;
    assert(p2.x==122 && p2.y==130);

    cout << p1 <<endl;
    cout << p2 <<endl;

    actualiza_punto(p1, 2.0, 3.0);
    actualiza_punto(p2, 2.0, 4.0);
    if (p1==p2)
        cout<<"Los puntos son iguales";
    else
        cout<<"Los puntos son diferentes";

    TPunto p3 = p1+p2;
    assert(p3.x==4 && p3.y==7);
    return 0;
}
