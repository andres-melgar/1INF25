#ifndef PUNTO_V01_CPUNTO3D_H
#define PUNTO_V01_CPUNTO3D_H
#include "CPunto2D.h"


class CPunto3D: public CPunto2D {
private:
    double z;
public:
    CPunto3D(double x=0, double y=0, double z=0);

    void imprimir() override;
};


#endif //PUNTO_V01_CPUNTO3D_H