#ifndef CNODO_HPP
#define CNODO_HPP

#include "CLista.hpp"

template <typename T> class CLista;

template <typename T>
class CNodo{
private:
    T dato;
    class CNodo<T> *siguiente; //estructura auto-referenciada
public:
    CNodo();
   
    friend class CLista<T>;
};

template <typename T>
CNodo<T>::CNodo(){
    this->siguiente = nullptr;
}

#endif /* CNODO_HPP */

