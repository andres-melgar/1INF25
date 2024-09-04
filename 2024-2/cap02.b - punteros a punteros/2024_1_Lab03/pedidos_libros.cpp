#include <iostream>
#include "pedidos_libros.hpp"
#include "libro.hpp"

void inicializar_pedidos_libros(char ***&pedidosLibros, int &capacidad_pedidos_libros) {
    
}

void incluir_pedido_datos_libros(char ***&pedidosLibros, int &capacidad_pedidos_libros, int pedido_buffer, char *codigo_buffer) {

}

void incrementar_espacio_pedidos_libros(char ***&pedidosLibros, int &capacidad_pedidos_libros, int pedido_buffer) {

}

int contar_libros(char **bloque_codigo_libros_buffer) {
    int cantidad = 0;
    if (bloque_codigo_libros_buffer != nullptr)
        while (*bloque_codigo_libros_buffer != nullptr) {
            cantidad++;
            bloque_codigo_libros_buffer++;
        }
    return cantidad;
}