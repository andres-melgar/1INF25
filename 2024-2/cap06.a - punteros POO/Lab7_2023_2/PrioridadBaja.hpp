#ifndef PRIORIDADBAJA_HPP
#define PRIORIDADBAJA_HPP

#include <iostream>
#include <fstream>
#include "Pedido.hpp"

using namespace std;

class PrioridadBaja : public Pedido {
public:
    int dias_espera;
    int nueva_fecha_entrega;
public:
    PrioridadBaja();

    PrioridadBaja(const PrioridadBaja& orig);

    virtual ~PrioridadBaja();
    
    void  lee(ifstream &archivo_de_pedidos) override;
    
    void imprime() override;
    
    void actualiza() override;
private:

};

#endif /* PRIORIDADBAJA_HPP */

