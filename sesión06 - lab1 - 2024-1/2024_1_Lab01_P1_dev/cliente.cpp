#include <iostream>
#include <iomanip>
#include <fstream>
#include "Estructuras.h"
#include "cliente.hpp"

using namespace std;

bool operator>>(ifstream &archivo, Cliente &cliente) {
    archivo >> cliente.dni;
    if (archivo.eof())
        return false;
    archivo.get(); //sacamos la coma
    archivo.getline(cliente.nombre, 60);
    cliente.cantDeLibros = 0;
    cliente.pagoTotal = 0;
    return true;
}

ostream & operator<<(ostream &out, const Cliente &cliente) {
    out << cliente.dni;
    out << " ";
    out << cliente.nombre;
}

bool operator<<(Cliente &cliente, const LibroSolicitado &libroSolicitado){
    
}