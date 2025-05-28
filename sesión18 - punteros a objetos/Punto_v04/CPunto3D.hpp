#ifndef CPUNTO3D_HPP
#define CPUNTO3D_HPP
#include "CPunto2D.hpp"

class CPunto3D : public CPunto2D {
private:
    int z;
public:
    CPunto3D(int x=0, int y=0, int z=0);    
    
    void imprimir() override;
};

#endif /* CPUNTO3D_HPP */

