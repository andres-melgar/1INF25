#ifndef NODO_HPP
#define NODO_HPP
#include "Libro.hpp"

class Nodo {
private:
    Libro *plibro;
    Nodo *sig;
public:
    Nodo();
    
    Nodo(const Nodo& orig);
    
    virtual ~Nodo();
    
    void SetSig(Nodo* sig);
    
    Nodo* GetSig() const;
    
    double GetPeso();
private:

};

#endif /* NODO_HPP */

