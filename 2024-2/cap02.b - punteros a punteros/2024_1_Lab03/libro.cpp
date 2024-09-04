#include "libro.hpp"
#include <cstring>

void inicializar_libros(char ***&libros, int &capacidad_libros) {

}

char *mi_strdup(char *cadena) {
    char *resultado = new char[strlen(cadena) + 1];
    strcpy(resultado, cadena);
    return resultado;
}

void incluir_libro(char ***&libros, int i, int &capacidad_libros, char *codigo_buffer, char *titulo_buffer, char *autor_buffer) {

}

void incrementar_espacio_libros(char ***&libros, int &capacidad_libros) {

}

void incluir_fin_libro(char ***&libros, int i, int &capacidad_libros) {

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