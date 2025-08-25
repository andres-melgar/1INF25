#include <iostream>
#include "LibreriaEstatica/conjunto.h"

using namespace std;

int main() {
    cout << "creando librería estática" << endl;
    ConjuntoDatosPuntos conjunto;

    cargar_conjunto_de_puntos(conjunto, "puntos.csv");
    imprimir_conjunto_de_puntos(conjunto);

    return 0;
}
