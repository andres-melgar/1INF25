#ifndef CPUNTO2D_HPP
#define CPUNTO2D_HPP

class CPunto2D{
private:
    int x;
    int y;

public:    
    CPunto2D(int x = 0, int y = 0);
    
    void imprimir();
    
    double distancia(const CPunto2D &punto);
    
    void setX(int x);
    
    void setY(int y);
    
    int getX();
    
    int getY();
};

#endif /* CPUNTO2D_HPP */

