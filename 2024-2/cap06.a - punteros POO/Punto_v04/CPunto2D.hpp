/* 
 * Archivo: CPunto2D.hpp
 * Autor: Andrés Melgar
 * Fecha: 25 de septiembre de 2024, 20:46
 */

#ifndef CPUNTO2D_HPP
#define CPUNTO2D_HPP

class CPunto2D {
private:
    double x;
    double y;
public:    
    CPunto2D(double x=0, double y=0);
    
    void imprimir();

    double distancia(const CPunto2D &punto);
    
    bool es_igual(const CPunto2D &punto);

    void setX(double x);

    double getX();

    void setY(double y);

    double getY();
};

#endif /* CPUNTO2D_HPP */

