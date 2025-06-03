#ifndef PRODUCTOENTREGADO_HPP
#define PRODUCTOENTREGADO_HPP

class ProductoEntregado{
private:
    char *codigo;
    double precio;
public:    
    ProductoEntregado();
    
    ProductoEntregado(char *codigo, double precio);
    
    ~ProductoEntregado();
    
    void operator=(const ProductoEntregado &productoEntregado);
};

#endif /* PRODUCTOENTREGADO_HPP */

