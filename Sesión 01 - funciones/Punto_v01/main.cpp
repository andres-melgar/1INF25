#include <iostream>
#include <cassert>

using namespace std;

struct TPunto {
    double x;
    double y;
};

/*void inicializa_punto(TPunto &p) {
    p.x = 0;
    p.y = 0;
}*/

void actualiza_punto(TPunto &p, int x=0, int y = 0) {
    p.x = x;
    p.y = y;
}

void inicializa_punto(TPunto &p) {
    actualiza_punto(p);
}

void imprimir_punto(TPunto p) {
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

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
    return 0;
}
