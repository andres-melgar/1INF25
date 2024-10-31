#ifndef PRIORIDADALTA_HPP
#define PRIORIDADALTA_HPP

#include <iostream>
#include <fstream>
#include "Pedido.hpp"

using namespace std;

class PrioridadAlta : public Pedido {
private:
    double recargo;
    double total;
public:
    PrioridadAlta();

    PrioridadAlta(const PrioridadAlta& orig);

    virtual ~PrioridadAlta();
    
    void  lee(ifstream &archivo_de_pedidos) override;
    
    void imprime() override;
    
    void actualiza() override;
private:

};

#endif /* PRIORIDADALTA_HPP */

