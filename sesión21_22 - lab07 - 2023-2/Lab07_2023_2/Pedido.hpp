#ifndef PEDIDO_HPP
#define PEDIDO_HPP
#include <fstream>
#define DNI_INVALIDO -1
#define FECHA_INVALIDA -1

using namespace std;

class Pedido{
private:
    char *codigo;
    int dni_cliente;
    double subtotal;
    int fecha;
    char *estado;
    double total;
public:
    Pedido();
    
    virtual ~Pedido();
    
    virtual void lee(ifstream &archivo_de_pedido);
};

#endif /* PEDIDO_HPP */

