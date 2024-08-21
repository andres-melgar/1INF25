/* 
 * File:   main.cpp
 * Author: amelgar
 *
 * Created on 21 de agosto de 2024, 7:30
 */

#include <iostream>
#include <assert.h>
#include "Punto.hpp"

using namespace std;

int main(int argc, char** argv) {
    TPunto p1={10,20};
    
    imprime_punto(p1);
    actualiza_punto(p1, 5, 6);
    imprime_punto(p1);
    assert(p1.x==5 && p1.y==6);
    
    actualiza_punto(p1, 5);
    assert(p1.x==5 && p1.y==0);
    
    actualiza_punto(p1);
    assert(p1.x==0 && p1.y==0);
    
    suma(p1, 10, 20);
    assert(p1.x==10 && p1.y==20);
    
    suma(p1, 4, 3);
    assert(p1.x==14 && p1.y==23);
    
    TPunto p2={4, 6};
    suma(p1, p2);
    assert(p1.x==18 && p1.y==29);
    
    suma(p1, 10);
    assert(p1.x==28 && p1.y==39);
    
    incremento(p1);
    assert(p1.x==29 && p1.y==40);
    
    ++p1;
    assert(p1.x==30 && p1.y==41);
    
    p1++;
    assert(p1.x==31 && p1.y==42);
    
    cout<<endl<<p1<<endl<<p2;
    
    if (p1==p2)
        cout<<"Iguales";
    else
        cout<<"Diferentes";     
    return 0;
}

