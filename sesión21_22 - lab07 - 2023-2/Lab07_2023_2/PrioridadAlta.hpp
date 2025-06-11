#ifndef PRIORIDADALTA_HPP
#define PRIORIDADALTA_HPP
#include "Pedido.hpp"

class PrioridadAlta : public Pedido {
private:
    double recargo;
    double total;
public:
    PrioridadAlta();
    
    void lee(ifstream &archivo_de_pedido) override;
    
    void imprime() override;
    
    void actualiza() override;
};

#endif /* PRIORIDADALTA_HPP */

