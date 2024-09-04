#ifndef PEDIDOS_LIBROS_HPP
#define PEDIDOS_LIBROS_HPP
#define TAMANHO_INCREMENTO_PEDIDOS_LIBROS 5

void inicializar_pedidos_libros(char ***&pedidosLibros, int &capacidad_pedidos_libros);

void incluir_pedido_datos_libros(char ***&pedidosLibros, int &capacidad_pedidos_libros, int pedido_buffer, char *codigo_buffer);

void incrementar_espacio_pedidos_libros(char ***&pedidosLibros, int &capacidad_pedidos_libros, int pedido_buffer);

int contar_libros(char **bloque_codigo_libros_buffer);

#endif /* PEDIDOS_LIBROS_HPP */

