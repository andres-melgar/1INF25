#ifndef ORDENVENTA_HPP
#define ORDENVENTA_HPP

#include <iostream>
#include <fstream>
#include "Pedido.hpp"

using namespace std;

class OrdenVenta {
private:
    Pedido *ptr_orden;
public:
    OrdenVenta();
    
    OrdenVenta(const OrdenVenta& orig);
    
    virtual ~OrdenVenta();
    
    void crearPedido(char tipo_de_pedido);
    
    void leerPedido(ifstream &archivo_de_pedidos);
    
    void imprimirPedido();
    
    void actualizarPedido();
private:

};

#endif /* ORDENVENTA_HPP */

