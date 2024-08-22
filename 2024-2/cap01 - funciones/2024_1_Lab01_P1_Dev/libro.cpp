#include <fstream>
#include "Estructuras.h"

using namespace std;

bool operator>>(istream &archivo, Libro &libro){
    archivo.getline(libro.codigo, 8, ',');
    if (archivo.eof())
        return false;
    archivo.getline(libro.titulo, 80, ',');
    archivo.getline(libro.autor, 60, ',');
    archivo>>libro.stock;
    archivo.get(); //esto es para sacar la coma
    archivo>>libro.precio;
    //leo el cambio de línea
    char buffer[256];
    archivo.getline(buffer, 255);
    return true;
}