#ifndef METODOEXACTODEMEMORIA_H
#define METODOEXACTODEMEMORIA_H

#define TAMANHO_BUFFER_LIBROS 300
#define TAMANHO_BUFFER_PEDIDOS 200
#define MAX_ARREGLO_PEDIDOS 200

void lecturaDeLibros(const char *nombre_de_archivo, char ***&libros, int **&stock);

void pruebaDeLecturaDeLibros (const char *nombre_de_archivo, char ***libros, int **stock);

void atencionDePedidos(const char *nombre_de_archivo, char ***libros, int **stock, int **&pedidosClientes, char ***&pedidosLibros, bool **&pedidosAtendidos);

void reporteDeEntregaDePedidos (const char *nombre_de_archivo, int **pedidosClientes, char ***pedidosLibros, 
                                                           bool **pedidosAtendidos);

#endif /* METODOEXACTODEMEMORIA_H */

