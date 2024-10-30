#ifndef ORDENVENTA_HPP
#define ORDENVENTA_HPP

#include "Pedido.hpp"

class OrdenVenta {
private:
    Pedido *ptr_orden;
public:
    OrdenVenta();
    
    OrdenVenta(const OrdenVenta& orig);
    
    virtual ~OrdenVenta();
    
    void crearPedido(char tipo_de_pedido);
private:

};

#endif /* ORDENVENTA_HPP */

