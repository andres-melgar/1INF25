#ifndef PUNTO_V01_CPUNTO2D_H
#define PUNTO_V01_CPUNTO2D_H


class CPunto2D {
private:
    double x;
    double y;
    //double puntos[2];
public:
    void imprimir();

    double distancia(const CPunto2D &punto);

    void setX(double x);

    void setY(double y);

    double getX();

    double getY();
};


#endif //PUNTO_V01_CPUNTO2D_H