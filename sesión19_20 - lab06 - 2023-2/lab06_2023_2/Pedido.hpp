#ifndef PEDIDO_HPP
#define PEDIDO_HPP
#define DNI_VACIO -1

class Pedido{
private:
    char *codigo;
    int dni_cliente;
    double precio_producto;
public:
    Pedido();
    
    Pedido(char *codigo, int dni_cliente, double precio_producto);
    
    ~Pedido();
    void SetPrecio_producto(double precio_producto);
    
    double GetPrecio_producto() const;
    
    void SetDni_cliente(int dni_cliente);
    
    int GetDni_cliente() const;
    
    void SetCodigo(char* codigo);
    
    char* GetCodigo() const;
};

#endif /* PEDIDO_HPP */

