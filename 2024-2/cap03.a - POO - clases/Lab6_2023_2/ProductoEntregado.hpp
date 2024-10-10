#ifndef PRODUCTOENTREGADO_HPP
#define PRODUCTOENTREGADO_HPP

#include <iostream>

using namespace std;

class ProductoEntregado{
private:
    char *codigo;
    double precio;    
public:
    ProductoEntregado();
    
    ~ProductoEntregado();
    
    void operator=(const ProductoEntregado &productoEntregado);
    
    friend ostream & operator<<(ostream &out, const ProductoEntregado &productoEntregado);
    
    void SetPrecio(double precio);
    
    double GetPrecio() const;
    
    void SetCodigo(char* codigo);
    
    char* GetCodigo() const;
};

#endif /* PRODUCTOENTREGADO_HPP */

