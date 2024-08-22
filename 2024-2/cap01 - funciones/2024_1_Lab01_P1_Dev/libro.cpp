#include <fstream>
#include <cstring>
#include "Estructuras.h"
#include "libro.hpp"

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

int buscar_libro(char codigo[], Libro arregloLibro[]){
    int i=0;
    while (true){
        Libro libro=arregloLibro[i];
        if (strcmp(libro.codigo, "FIN")==0)
            return LIBRO_NO_ENCONTRADO;
        else if (strcmp(libro.codigo, codigo)==0)
            return i;
        else
            i++;
    }
}