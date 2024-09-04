#ifndef PEDIDOS_ATENDIDOS_HPP
#define PEDIDOS_ATENDIDOS_HPP
#define TAMANHO_INCREMENTO_PEDIDOS_ATENDIDOS 5

void inicializar_pedidos_atendidos(bool **&pedidosAtendidos, int &capacidad_pedidos_antendidos);

void atender_pedido(bool **&pedidosAtendidos, int &capacidad_pedidos_atendidos, int pedido_buffer, char***libros, int **stock, char ***pedidosLibros);

void incrementar_espacio_pedidos_atendidos(bool **&pedidosAtendidos, int &capacidad_pedidos_atendidos, int pedido_buffer);

bool atender_libro(char *codigo_libro, char ***libros, int **stock);

#endif /* PEDIDOS_ATENDIDOS_HPP */

