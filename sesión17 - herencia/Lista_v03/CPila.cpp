#include <iostream>
#include <cstdarg>
#include "CLista.hpp"
#include "CPila.hpp"

using namespace std;

CPila::CPila(): CLista(){
    cout<<"constructor CPila sin parámetros"<<endl;
}

CPila::CPila(int cantidad, ...): CLista(AL_INICIO, 0) {
    cout<<"constructor CPila con parámetros"<<endl;
    
    va_list ap;
    va_start(ap, cantidad);
    
    for(int i=0; i<cantidad; i++){
        double valor = va_arg(ap, double);
        this->apilar(valor);
    }
}

void CPila::apilar(double valor){
    this->insertar(valor);
}

double CPila::desapilar(){
    return this->eliminarCabeza();
}

bool CPila::estaVacia(){
    return CLista::estaVacia();
}

int CPila::getLongitud() const{
    return CLista::getLongitud();
}

ostream & operator<<(ostream &out, CPila &pila){
    return pila.imprimir(out);
}