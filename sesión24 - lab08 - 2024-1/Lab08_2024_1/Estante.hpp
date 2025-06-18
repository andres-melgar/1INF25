#ifndef ESTANTE_HPP
#define ESTANTE_HPP
#include "Lista.hpp"
#define ESTANTE_HORIZONTAL 'H'
#define ESTANTE_VERTICAL 'V'
#define ID_INVALIDO -1

class Estante {
private:
    char clase;
    int id;
    double capacidad;
    Lista Llibros;
public:
    Estante();
    
    Estante(char clase, int id, double capacidad);
};

#endif /* ESTANTE_HPP */

