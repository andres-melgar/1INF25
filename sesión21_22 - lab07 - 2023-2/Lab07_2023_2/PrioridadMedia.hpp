#ifndef PRIORIDADMEDIA_HPP
#define PRIORIDADMEDIA_HPP
#include "Pedido.hpp"

class PrioridadMedia : public Pedido {
private:
    char *descripcion;
    int nueva_fecha_entrega;
public:
    PrioridadMedia();
    
    ~PrioridadMedia();
    
    void lee(ifstream &archivo_de_pedido) override;
};

#endif /* PRIORIDADMEDIA_HPP */

