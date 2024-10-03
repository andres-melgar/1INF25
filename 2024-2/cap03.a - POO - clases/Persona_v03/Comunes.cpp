#include "Comunes.hpp"
#include <cstring>
#include <cctype>

using namespace std;

char *mi_strdup(char *cadena) {
    char *resultado = new char[strlen(cadena) + 1];
    strcpy(resultado, cadena);
    return resultado;
}

void a_mayusculas(char *cadena){
    while(*cadena){
        *cadena = toupper(*cadena);
        cadena++;
    }
}

void libera_cadena(char *&cadena){
    if (cadena != nullptr){
        delete cadena;
        cadena = nullptr;
    }
}