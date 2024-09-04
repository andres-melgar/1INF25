#include "libro.hpp"
#include <cstring>
#include <iostream>
#include <iomanip>

using namespace std;

char *mi_strdup(char *cadena){
    char *resultado = new char[strlen(cadena)+1];
    strcpy(resultado, cadena);
    return resultado;
}

void incluir_libro(char ***libros_buffer, int i, char *codigo_buffer, char *titulo_buffer, char *autor_buffer){
    char **libro_bloque = new char*[3];
    libro_bloque[0] = mi_strdup(codigo_buffer);
    libro_bloque[1] = mi_strdup(titulo_buffer);
    libro_bloque[2] = mi_strdup(autor_buffer);
    libros_buffer[i] = libro_bloque; 
}

void incluir_fin_de_libro(char ***libros_buffer, int i){
    libros_buffer[i] = nullptr;
}

char ***gestionar_espacio_exacto(char ***libros_buffer, int cantidad){
    char ***libros = new char**[cantidad];
    for(int i=0; i<cantidad; i++)
        libros[i] = libros_buffer[i];
    return libros;
}