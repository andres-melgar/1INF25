#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <fstream>
#include "Estructuras.h"
#define MAX_LIBROS_X_CLIENTE 30

using namespace std;

bool operator>>(istream &archivo, Cliente &cliente);

bool operator<<(Cliente &cliente, const LibroSolicitado &libroSolicitado);

#endif /* CLIENTE_HPP */

