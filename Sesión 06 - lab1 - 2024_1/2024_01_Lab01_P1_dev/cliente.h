//
// Created by amelgar on 2/09/2025.
//

#ifndef INC_2024_01_LAB01_P1_DEV_CLIENTE_H
#define INC_2024_01_LAB01_P1_DEV_CLIENTE_H
#include <fstream>
#include "Estructuras.h"

using namespace std;

bool operator>>(ifstream &archivo, Cliente &cliente);

ostream &operator<<(ostream &out, const Cliente &cliente);

#endif //INC_2024_01_LAB01_P1_DEV_CLIENTE_H