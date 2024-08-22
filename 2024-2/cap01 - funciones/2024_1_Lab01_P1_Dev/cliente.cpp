#include <iostream>
#include <fstream>
#include "Estructuras.h"

using namespace std;

bool operator>>(istream &archivo, Cliente &cliente){
    archivo>>cliente.dni;
    if (archivo.eof())
        return false;
    archivo.get(); //sacamos la coma
    archivo.getline(cliente.nombre, 60);
    cliente.cantDeLibros=0;
    cliente.pagoTotal=0;
    return true;
};