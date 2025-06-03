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
};

#endif /* PEDIDO_HPP */

