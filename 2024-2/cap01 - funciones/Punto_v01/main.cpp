/* 
 * File:   main.cpp
 * Author: amelgar
 *
 * Created on 21 de agosto de 2024, 7:30
 */

#include <iostream>
#include <assert.h>

using namespace std;

struct TPunto{
    int x;
    int y;
};

void imprime_punto(TPunto p){
    cout<<"("<<p.x<<", "<<p.y<<")";
}

void actualiza_punto(TPunto &p, int x = 0, int y = 0){
    p.x=x;
    p.y=y;
}

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
    return 0;
}

