#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
#include "Estante.hpp"

class Biblioteca {
private:
    Estante AEstantes[10];
    int cantidad_estantes;
public:
    Biblioteca();
    
    Biblioteca(const Biblioteca& orig);
    
    virtual ~Biblioteca();
    
    void carga();
    void llena();
    void baja();
    void muestra();
private:

};

#endif /* BIBLIOTECA_HPP */

