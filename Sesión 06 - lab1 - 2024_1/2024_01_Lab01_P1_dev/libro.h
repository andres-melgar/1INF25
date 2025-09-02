#ifndef INC_2024_01_LAB01_P1_DEV_LIBRO_H
#define INC_2024_01_LAB01_P1_DEV_LIBRO_H
#include <fstream>
#include "Estructuras.h"

using namespace std;

bool operator>>(ifstream &archivo, Libro &libro);

ostream &operator<<(ostream &out, const Libro &libro);

#endif //INC_2024_01_LAB01_P1_DEV_LIBRO_H