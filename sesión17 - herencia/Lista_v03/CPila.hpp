#ifndef CPILA_HPP
#define CPILA_HPP
#include "CLista.hpp"

//se cambia a herencia de tipo privada para que la Pila no se comporte
//como una lista. Ahora los métodos públicos de Lista se heredan como
//privados en la Pila, y esto significa que no pueden ser usados desde
//fuera de la clase.
class CPila: private CLista{
public:
    CPila();
    
    CPila(int cantidad, ...);
    
    void apilar(double valor);
    
    double desapilar();
    
    bool estaVacia() override;
    
    int getLongitud() const override;
    
    friend ostream & operator<<(ostream &out, CPila &pila);
};

#endif /* CPILA_HPP */

