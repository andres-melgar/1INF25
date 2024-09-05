#include "libro.hpp"
#include <cstring>

void inicializar_libros(char ***&libros, int &capacidad_libros) {
    capacidad_libros = TAMANHO_INCREMENTO_LIBRO;
    libros = new char**[capacidad_libros];
    for (int i=0; i<capacidad_libros; i++)
        libros[i] = nullptr;
}

char *mi_strdup(char *cadena) {
    char *resultado = new char[strlen(cadena) + 1];
    strcpy(resultado, cadena);
    return resultado;
}

void incluir_libro(char ***&libros, int i, int &capacidad_libros, char *codigo_buffer, char *titulo_buffer, char *autor_buffer) {
    if (i == capacidad_libros)
        incrementar_espacio_libros(libros, capacidad_libros);
    char **libro_bloque = new char*[3];
    libro_bloque[0] = mi_strdup(codigo_buffer);
    libro_bloque[1] = mi_strdup(titulo_buffer);
    libro_bloque[2] = mi_strdup(autor_buffer);
    libros[i] = libro_bloque;
}

void incrementar_espacio_libros(char ***&libros, int &capacidad_libros) {
    char ***libros_anterior = libros;
    int capacidad_libros_anterior = capacidad_libros;
    
    capacidad_libros += TAMANHO_INCREMENTO_LIBRO;
    libros = new char**[capacidad_libros];
    for(int i=0; i<capacidad_libros; i++)
        if (i<capacidad_libros_anterior)
            libros[i] = libros_anterior[i];
        else
            libros[i] = nullptr;
    delete libros_anterior;
}

void incluir_fin_libro(char ***&libros, int i, int &capacidad_libros) {
    if (i == capacidad_libros)
        incrementar_espacio_libros(libros, capacidad_libros);
    libros[i] = nullptr;
}

int buscar_libro(char *codigo_libro, char ***libros) {
    int indice = 0;
    while (*libros) {
        if (strcmp((*libros)[0], codigo_libro) == 0)
            return indice;
        indice++;
        libros++;
    }
    return LIBRO_NO_ENCONTRADO;
}