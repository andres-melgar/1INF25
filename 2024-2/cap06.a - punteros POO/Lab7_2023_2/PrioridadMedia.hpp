#ifndef PRIORIDADMEDIA_HPP
#define PRIORIDADMEDIA_HPP

#include <iostream>
#include <fstream>
#include "Pedido.hpp"

using namespace std;

class PrioridadMedia : public Pedido {
private:
    char *descripcion;
    int nueva_fecha_entrega;  
public:
    PrioridadMedia();

    PrioridadMedia(const PrioridadMedia& orig);

    virtual ~PrioridadMedia();
    
    void  lee(ifstream &archivo_de_pedidos) override;
    
    void imprime() override;
    
    void actualiza() override;
private:

};

#endif /* PRIORIDADMEDIA_HPP */

