#ifndef CPILA_HPP
#define CPILA_HPP

#include "CLista.hpp"

class CPila: private CLista{
private:
public:
    CPila();
    
    CPila(int cantidad, ...);
    
    void apilar(double elemento);
    
    double desapilar();  
    
    bool estaVacia() override;
    
    int getLongitud() const override;
    
    friend ostream & operator<<(ostream &out, CPila &pila);
};

#endif /* CPILA_HPP */

