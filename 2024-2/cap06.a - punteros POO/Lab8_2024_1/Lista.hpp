#ifndef LISTA_HPP
#define LISTA_HPP
#include <fstream>
#include "Nodo.hpp"

using namespace std;

class Lista {
private:
    Nodo *ini;
    Nodo *fin;
    double peso;
public:
    Lista();
    
    Lista(const Lista& orig);
    
    virtual ~Lista();
    
    void insertar(char tipo_libro, int capacidad, ifstream &archivo_de_libros);
private:

};

#endif /* LISTA_HPP */

