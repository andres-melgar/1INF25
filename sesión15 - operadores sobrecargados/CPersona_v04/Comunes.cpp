#include "Comunes.hpp"
#include <cstring>
#include <cctype>

char *mi_strdup(char *cadena) {
    if (cadena == nullptr)
        return nullptr;
    char *resultado = new char[strlen(cadena) + 1];
    strcpy(resultado, cadena);
    return resultado;
}

void a_mayuscula(char *cadena){
    while(*cadena){
        *cadena=toupper(*cadena);
        cadena++;
    }
}