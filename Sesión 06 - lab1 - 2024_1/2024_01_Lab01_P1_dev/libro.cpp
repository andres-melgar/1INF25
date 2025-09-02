#include <iostream>
#include <iomanip>
#include <fstream>
#include "Estructuras.h"
#include "libro.h"

using namespace std;

bool operator>>(ifstream &archivo, Libro &libro) {
    archivo.getline(libro.codigo, 8, ',');
    if (archivo.eof())
        return false;
    archivo.getline(libro.titulo, 80, ',');
    archivo.getline(libro.autor, 60, ',');
    archivo >> libro.stock;
    archivo.get(); //para sacar la coma
    archivo >> libro.precio;
    //leemos el cambio de línea
    archivo.get();
    return true;
}

ostream &operator<<(ostream &out, const Libro &libro) {
    out << left << setw(8) << libro.codigo;
    out << left << setw(80) << libro.titulo;
    out << left << setw(60) << libro.autor;
    out << right << setw(10) << libro.stock;
    out << right << setw(10) << setprecision(2) << fixed << libro.precio;
    return out;
}
