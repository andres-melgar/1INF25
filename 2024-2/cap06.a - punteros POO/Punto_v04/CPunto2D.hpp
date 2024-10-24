#ifndef CPUNTO2D_HPP
#define CPUNTO2D_HPP

class CPunto2D {
protected:
    double x;
    double y;
public:    
    CPunto2D(double x=0, double y=0);
    
    virtual void imprimir();

    double distancia(const CPunto2D &punto);
    
    bool es_igual(const CPunto2D &punto);

    void setX(double x);

    double getX();

    void setY(double y);

    double getY();
};

#endif /* CPUNTO2D_HPP */

