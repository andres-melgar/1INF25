#ifndef PEDIDOS_CLIENTES_HPP
#define PEDIDOS_CLIENTES_HPP

void inicializar_pedidos_clientes_buffer(int **pedidos_clientes_buffer, int tamanho_maximo);

void incluir_pedidos_datos_clientes(int **pedidos_clientes_buffer, int dni_buffer, int pedido_buffer);

void pasar_pedido_datos_cliente(int **&pedidosClientes, int **pedidos_clientes_buffer);

#endif /* PEDIDOS_CLIENTES_HPP */

