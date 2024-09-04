#include "pedidos_clientes.hpp"

void inicializar_pedidos_clientes_buffer(int **pedidos_clientes_buffer, int tamanho_maximo){
    for (int i=0; i<tamanho_maximo; i++)
        pedidos_clientes_buffer[i] = nullptr;
}

void incluir_pedidos_datos_clientes(int **pedidos_clientes_buffer, int dni_buffer, int pedido_buffer){
    bool existe_cliente;
    int indice_cliente;
    buscar_cliente(pedidos_clientes_buffer, dni_buffer, existe_cliente, indice_cliente);
    if (existe_cliente){
        int *bloque_datos_cliente_buffer = pedidos_clientes_buffer[indice_cliente];
        int cantidad_de_pedidos = bloque_datos_cliente_buffer[1]+1;
        int enteros_en_el_bloque = 2 + cantidad_de_pedidos;
        int *bloque_datos_cliente_nuevo = new int[enteros_en_el_bloque];
        for(int i=0; i<enteros_en_el_bloque; i++)
            bloque_datos_cliente_nuevo[i] = bloque_datos_cliente_buffer[i];
        bloque_datos_cliente_nuevo[1] = cantidad_de_pedidos;
        bloque_datos_cliente_nuevo[enteros_en_el_bloque-1] = pedido_buffer;
        pedidos_clientes_buffer[indice_cliente] = bloque_datos_cliente_nuevo;
        delete bloque_datos_cliente_buffer;
    } else{
        int enteros_en_el_bloque = 3;
        int *bloque_datos_cliente_nuevo = new int[enteros_en_el_bloque];
        bloque_datos_cliente_nuevo[0] = dni_buffer;
        bloque_datos_cliente_nuevo[1] = 1;
        bloque_datos_cliente_nuevo[2] = pedido_buffer;
        pedidos_clientes_buffer[indice_cliente] = bloque_datos_cliente_nuevo;
    }
    
}

void pasar_pedido_datos_cliente(int **&pedidosClientes, int **pedidos_clientes_buffer){
    
}