#include <cstring>

char *mi_strdup(char *cadena) {
    char *copia = new char[strlen(cadena)+1];
    strcpy(copia, cadena);
    return copia;
}
