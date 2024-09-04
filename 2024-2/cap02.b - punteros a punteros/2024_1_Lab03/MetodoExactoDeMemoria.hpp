#ifndef METODOEXACTODEMEMORIA_HPP
#define METODOEXACTODEMEMORIA_HPP

void lecturaDeLibros(char const *nombre_de_archivo, char ***&libros, int **&stock);

void pruebaDeLecturaDeLibros(char const *nombre_de_archivo, char ***libros, int **stock);

void atencionDePedidos(char const *nombre_de_archivo, char ***libros, int **stock, int **&pedidosClientes, char ***&pedidosLibros, bool **&pedidosAtendidos);

void pruebaDeLecturaDeLibros(char const *nombre_de_archivo, char ***libros, int **stock);

void ordenarPedidosClientes(int **pedidosClientes);

void reporteDeEntregaDePedidos(char const *nombre_de_archivo, int **pedidosClientes, char ***&pedidosLibros,
        bool **pedidosAtendidos);

#endif /* METODOEXACTODEMEMORIA_HPP */

