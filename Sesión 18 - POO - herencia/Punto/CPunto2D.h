#ifndef PUNTO_V01_CPUNTO2D_H
#define PUNTO_V01_CPUNTO2D_H


class CPunto2D {
private:
    double x;
    double y;
    //double puntos[2];
public:
    CPunto2D();

    CPunto2D(double x, double y);

    void imprimir();

    double distancia(const CPunto2D &punto);

    bool es_igual(const CPunto2D &punto);

    void setX(double x);

    void setY(double y);

    double getX();

    double getY();
};


#endif //PUNTO_V01_CPUNTO2D_H