#include "Comunes.hpp"
#include <cstring>

using namespace std;

char *mi_strdup(char *cadena) {
    char *resultado = new char[strlen(cadena) + 1];
    strcpy(resultado, cadena);
    return resultado;
}

int *retorna_referencia_a_entero(int entero){
    int *ptrEntero = new int;
    *ptrEntero = entero;
    return ptrEntero;
}