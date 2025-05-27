#ifndef CPILA_HPP
#define CPILA_HPP
#include "CLista.hpp"

class CPila: public CLista{
public:
    CPila();
    
    CPila(int cantidad, ...);
    
    void apilar(double valor);
    
    double desapilar();
    
    bool esta_pila_vacia();
};

#endif /* CPILA_HPP */

