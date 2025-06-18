#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
#include "Estante.hpp"

class Biblioteca {
private:
    Estante AEstante[10];
    int cantidad_estantes;
public:
    Biblioteca();
    
    void carga();
    
    void llena();
    
    void baja();
    
    void muestra();
};

#endif /* BIBLIOTECA_HPP */

