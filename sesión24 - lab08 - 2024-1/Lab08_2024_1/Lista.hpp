#ifndef LISTA_HPP
#define LISTA_HPP
#include "Nodo.hpp"

class Lista {
private:
    double peso;
    Nodo *ini; //se apunta al inicio de la lista, al primer nodo de la lista
    Nodo *fin; //NO SE PIDE, pero lo incluimos para facilitar la inclusión al final
public:
    Lista();    
    
    ~Lista();
    
    void insertar(char tipo_libro, int capacidad, ifstream &archivo_de_libros);
private:
    void inicializar();        
    
    void eliminar();
};

#endif /* LISTA_HPP */

