#ifndef PRIORIDADMEDIA_HPP
#define PRIORIDADMEDIA_HPP

#include "Pedido.hpp"

class PrioridadMedia : public Pedido {
private:
    char *descripcion;
    int nueva_fecha_entrega;  
public:
    PrioridadMedia();

    PrioridadMedia(const PrioridadMedia& orig);

    virtual ~PrioridadMedia();
private:

};

#endif /* PRIORIDADMEDIA_HPP */

