#ifndef CPILA_HPP
#define CPILA_HPP

#include "CLista.hpp"

class CPila: public CLista{
private:
public:
    CPila();
    
    CPila(int cantidad, ...);
    
    void apilar(double elemento);
    
    double desapilar();    
};

#endif /* CPILA_HPP */

