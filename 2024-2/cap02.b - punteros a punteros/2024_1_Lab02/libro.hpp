#ifndef LIBRO_HPP
#define LIBRO_HPP
#define LIBRO_NO_ENCONTRADO -1

char *mi_strdup(char *cadena);

void incluir_libro(char ***libros_buffer, int i, char *codigo_buffer, char *titulo_buffer, char *autor_buffer);

void incluir_fin_de_libro(char ***libros_buffer, int i);

char ***gestionar_espacio_exacto(char ***libros_buffer, int cantidad);

#endif /* LIBRO_HPP */

