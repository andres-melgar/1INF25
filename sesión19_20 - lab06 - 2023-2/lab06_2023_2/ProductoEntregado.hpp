#ifndef PRODUCTOENTREGADO_HPP
#define PRODUCTOENTREGADO_HPP
#include <fstream>

using namespace std;

class ProductoEntregado{
private:
    char *codigo;
    double precio;
public:    
    ProductoEntregado();
    
    ProductoEntregado(char *codigo, double precio);
    
    ~ProductoEntregado();
    
    void operator=(const ProductoEntregado &productoEntregado);
    
    void SetPrecio(double precio);
    
    double GetPrecio() const;
    
    void SetCodigo(char* codigo);
    
    char* GetCodigo() const;
    
    friend ostream & operator<<(ostream &out, const ProductoEntregado &productoEntregado);
};

#endif /* PRODUCTOENTREGADO_HPP */

