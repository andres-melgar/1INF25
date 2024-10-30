#ifndef PRIORIDADBAJA_HPP
#define PRIORIDADBAJA_HPP

#include "Pedido.hpp"

class PrioridadBaja : public Pedido {
public:
    int dias_espera;
    int nueva_fecha_entrega;
public:
    PrioridadBaja();

    PrioridadBaja(const PrioridadBaja& orig);

    virtual ~PrioridadBaja();
private:

};

#endif /* PRIORIDADBAJA_HPP */

