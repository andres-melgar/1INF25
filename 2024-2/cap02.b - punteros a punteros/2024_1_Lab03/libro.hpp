#ifndef LIBRO_HPP
#define LIBRO_HPP
#define TAMANHO_INCREMENTO_LIBRO 10
#define LIBRO_NO_ENCONTRADO -1

void inicializar_libros(char ***&libros, int &capacidad_libros);

char *mi_strdup(char *cadena);

void incluir_libro(char ***&libros, int i, int &capacidad_libros, char *codigo_buffer, char *titulo_buffer, char *autor_buffer);

void incrementar_espacio_libros(char ***&libros, int &capacidad_libros);

void incluir_fin_libro(char ***&libros, int i, int &capacidad_libros);

int buscar_libro(char *codigo_libro, char ***libros);

#endif /* LIBRO_HPP */

