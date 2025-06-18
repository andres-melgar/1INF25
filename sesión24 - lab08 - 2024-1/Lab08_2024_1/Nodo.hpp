#ifndef NODO_HPP
#define NODO_HPP
#include "Libro.hpp"

class Nodo {
private:
    Libro *plibro; //este atributo permitirá la ejecución del polimorfismo
    Nodo *sig; //atributo que define la estructura auto-referenciada
public:
    Nodo(char tipo_libro);    
    
    ~Nodo();
    
    Nodo* GetSig() const;

};

#endif /* NODO_HPP */

