#ifndef CFAMILIA_HPP
#define CFAMILIA_HPP
#include "CPersona.hpp"

class CFamilia{
private:
    CPersona *padres[2];
    CPersona **hijos;
    int cantidad_hijos;
public:
    CFamilia();
    
    ~CFamilia();
private:
    void liberar_padres(int indice);
    
    void liberar_hijos();
};

#endif /* CFAMILIA_HPP */

