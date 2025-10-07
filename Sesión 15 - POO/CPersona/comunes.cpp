#include <cstring>
#include <cctype>

char *mi_strdup(char *cadena) {
    if (cadena == nullptr)
        return nullptr;
    char *copia = new char[strlen(cadena)+1];
    strcpy(copia, cadena);
    return copia;
}

void a_mayuscula(char *cadena) {
    while (*cadena) {
        *cadena = toupper(*cadena);
        cadena++;
    }
}