#ifndef PRIORIDADALTA_HPP
#define PRIORIDADALTA_HPP

#include "Pedido.hpp"

class PrioridadAlta : public Pedido {
private:
    double recargo;
    double total;
public:
    PrioridadAlta();

    PrioridadAlta(const PrioridadAlta& orig);

    virtual ~PrioridadAlta();
private:

};

#endif /* PRIORIDADALTA_HPP */

