/* 
 * Archivo: CPunto2D.hpp
 * Autor: Andrés Melgar
 * Fecha: 26 de septiembre de 2024, 07:23
 */

#ifndef CPUNTO2D_HPP
#define CPUNTO2D_HPP

class CPunto2D{
private:
    double x;
    double y;
public:    
    void imprimir();
    
    double distancia(const CPunto2D &punto);
    
    void setX(double x);
    
    double getX();
    
    void setY(double y);
    
    double getY();
};

#endif /* CPUNTO2D_HPP */

