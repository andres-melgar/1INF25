#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <fstream>
#include "Estructuras.h"
#define LIBRO_NO_ENCONTRADO -1

using namespace std;

bool operator>>(istream &archivo, Libro &libro);

int buscar_libro(char codigo[], Libro arregloLibro[]);

#endif /* LIBRO_HPP */

