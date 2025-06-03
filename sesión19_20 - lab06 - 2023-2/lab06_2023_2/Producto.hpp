#ifndef PRODUCTO_HPP
#define PRODUCTO_HPP

class Producto{
private:
    char *codigo;
    char *descripcion;
    double precio;
    int stock;
    int clientes_servidos[200];
    int clientes_no_servidos[200];
    int cantidad_clientes_servidos;
    int cantidad_clientes_no_servidos;
public:
    Producto();
    
    Producto(char *codigo, char *descripcion, double precio, int stock);
    
    Producto(const Producto &producto);
    
    ~Producto();
    
    void operator=(const Producto &producto);
    
private:
    void copia_producto(const Producto &producto);
    
    void liberar_producto();
};

#endif /* PRODUCTO_HPP */

