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
    
    void SetPrecio(double precio);
    
    double GetPrecio() const;
    
    void SetCodigo(char* codigo);
    
    char* GetCodigo() const;
};

#endif /* PRODUCTOENTREGADO_HPP */

