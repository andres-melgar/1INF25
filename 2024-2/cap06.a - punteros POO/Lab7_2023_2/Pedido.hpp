#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <iostream>
#include <fstream>
#define DNI_INVALIDO -1
#define FECHA_INVALIDA -1
#define PEDIDO_PRIORIDAD_ALTA 'A'
#define PEDIDO_PRIORIDAD_MEDIA 'M'
#define PEDIDO_PRIORIDAD_BAJA 'B'

using namespace std;

class Pedido {
private:
    char *codigo;
    int dni_cliente;
    double subtotal;
    int fecha;
    char *estado;
    double total;
public:
    Pedido();
    
    Pedido(const Pedido& orig);
    
    virtual ~Pedido();
    
    virtual void  lee(ifstream &archivo_de_pedidos);
    
    virtual void imprime();
    
    virtual void actualiza();
private:

};

#endif /* PEDIDO_HPP */

