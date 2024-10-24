#ifndef CPUNTO3D_HPP
#define CPUNTO3D_HPP

class CPunto3D : public CPunto2D {
private:
    double z;
public:
    CPunto3D(double x=0, double y=0, double z=0);
    
    void imprimir() override;
};

#endif /* CPUNTO3D_HPP */

