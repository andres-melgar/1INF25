#ifndef PRIORIDADBAJA_HPP
#define PRIORIDADBAJA_HPP
#include "Pedido.hpp"

class PrioridadBaja : public Pedido {
private:
    int dias_espera;
    int nueva_fecha_entrega;
public:
    PrioridadBaja();
    
    void lee(ifstream &archivo_de_pedido) override;
    
    void imprime() override;
    
    void actualiza() override;
};

#endif /* PRIORIDADBAJA_HPP */

