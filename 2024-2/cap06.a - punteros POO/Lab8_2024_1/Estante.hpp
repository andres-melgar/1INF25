#ifndef ESTANTE_HPP
#define ESTANTE_HPP
#include "Lista.hpp"

class Estante {
private:
    char clase;
    int id;
    double capacidad;
    Lista Llibros;
public:
    Estante();
    
    Estante(const Estante& orig);
    
    virtual ~Estante();
private:

};

#endif /* ESTANTE_HPP */

