#include "CPunto3D.h"
#include <iostream>

using namespace std;

CPunto3D::CPunto3D(double x, double y, double z): CPunto2D(x, y) {
    this->z = z;
}

void CPunto3D::imprimir() {
    cout << "(" << this->x << ", " << this->y << ", "<< this->z << ")" << endl;
}
