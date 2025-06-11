#ifndef ORDENVENTA_HPP
#define ORDENVENTA_HPP
#include <fstream>
#include "Pedido.hpp"
#define PEDIDO_PRIODIDAD_ALTA 'A'
#define PEDIDO_PRIODIDAD_MEDIA 'M'
#define PEDIDO_PRIODIDAD_BAJA 'B'

using namespace std;

class OrdenVenta{
private:
    Pedido *ptr_orden;
public:
    OrdenVenta();
    
    ~OrdenVenta();
    
    void crearPedido(char tipo_de_pedido);
    
    void leerPedido(ifstream &archivo_de_pedido);
    
    void imprimirPedido();
    
    void actualizarPedido();
};

#endif /* ORDENVENTA_HPP */

