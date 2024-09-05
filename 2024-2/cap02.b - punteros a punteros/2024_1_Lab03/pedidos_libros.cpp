#include <iostream>
#include "pedidos_libros.hpp"
#include "libro.hpp"

void inicializar_pedidos_libros(char ***&pedidosLibros, int &capacidad_pedidos_libros) {
    capacidad_pedidos_libros = TAMANHO_INCREMENTO_PEDIDOS_LIBROS;
    pedidosLibros = new char**[capacidad_pedidos_libros];
    for(int i=0; i<capacidad_pedidos_libros; i++)
        pedidosLibros[i] = nullptr;
}

void incluir_pedido_datos_libros(char ***&pedidosLibros, int &capacidad_pedidos_libros, int pedido_buffer, char *codigo_buffer) {
    if (capacidad_pedidos_libros <= pedido_buffer)
        incrementar_espacio_pedidos_libros(pedidosLibros, capacidad_pedidos_libros);
    
    char **bloque_codigo_libros_buffer = pedidosLibros[pedido_buffer];
    if (bloque_codigo_libros_buffer == nullptr){
        char **bloque_codigo_libros_nuevo = new char*[2];
        bloque_codigo_libros_nuevo[0] = mi_strdup(codigo_buffer);
        bloque_codigo_libros_nuevo[1] = nullptr;
        pedidosLibros[pedido_buffer] = bloque_codigo_libros_nuevo;
    }
    else{
        int cantidad = contar_libros(bloque_codigo_libros_buffer);
        cantidad += 2;
        char **bloque_codigo_libros_nuevo = new char*[cantidad];
        for(int i=0; i<cantidad-1; i++)
            bloque_codigo_libros_nuevo[i] = bloque_codigo_libros_buffer[i];
        bloque_codigo_libros_nuevo[cantidad-2] = mi_strdup(codigo_buffer);
        bloque_codigo_libros_nuevo[cantidad-1] = nullptr;
        pedidosLibros[pedido_buffer] = bloque_codigo_libros_nuevo;
        delete bloque_codigo_libros_buffer;
    }
}

void incrementar_espacio_pedidos_libros(char ***&pedidosLibros, int &capacidad_pedidos_libros, int pedido_buffer) {
    char ***pedidos_libros_anterior = pedidosLibros;
    int capacidad_pedidos_libros_anterior = capacidad_pedidos_libros;
    
    capacidad_pedidos_libros = pedido_buffer + TAMANHO_INCREMENTO_PEDIDOS_LIBROS;
    pedidosLibros = new char**[capacidad_pedidos_libros];
    for(int i=0; i<capacidad_pedidos_libros; i++)
        if (i<capacidad_pedidos_libros_anterior)
            pedidosLibros[i] = pedidos_libros_anterior[i];
        else
            pedidosLibros[i] = nullptr;
    delete pedidos_libros_anterior;
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