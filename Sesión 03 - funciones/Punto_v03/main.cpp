#include <iostream>
#include <cassert>
#include "punto.h"
#include "conjunto.h"

using namespace std;

int main() {
    ConjuntoDatosPuntos conjunto;

    cargar_conjunto_de_puntos(conjunto);
    imprimir_conjunto_de_puntos(conjunto);

    return 0;
}
