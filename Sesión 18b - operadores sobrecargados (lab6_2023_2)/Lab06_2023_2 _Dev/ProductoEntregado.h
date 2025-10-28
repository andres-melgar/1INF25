#ifndef LAB06_2023_2_PRODUCTOENTREGADO_H
#define LAB06_2023_2_PRODUCTOENTREGADO_H

#include <iostream>

using namespace std;

class ProductoEntregado{
private:
    char *codigo;
    double precio;
public:
    ProductoEntregado();

    ProductoEntregado(char *codigo, double precio);

    ~ProductoEntregado();

    void SetPrecio(double precio);

    double GetPrecio() const;

    void SetCodigo(char* codigo);

    char* GetCodigo() const;

    friend ostream & operator<<(ostream &out, const ProductoEntregado &productoEntregado);

    friend ostream & operator<<(ostream &out, const ProductoEntregado &productoEntregado);
};

#endif //LAB06_2023_2_PRODUCTOENTREGADO_H