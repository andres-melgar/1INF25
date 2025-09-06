#include <cstring>
#include "comunes.h"

using namespace std;

char *mi_strdup(const char *cadena) {
    int tamanho_cadena = strlen(cadena);
    char *bloque_nuevo = new char[tamanho_cadena + 1];
    strcpy(bloque_nuevo, cadena);
    return bloque_nuevo;
}