#ifndef PEDIDOS_CLIENTES_HPP
#define PEDIDOS_CLIENTES_HPP
#define TAMANHO_INCREMENTO_PEDIDOS_CLIENTE 5

void inicializar_pedidos_clientes(int **&pedidosClientes, int &capacidad_pedidos_clientes);

void incluir_pedido_datos_cliente(int **&pedidosClientes, int &capacidad_pedidos_clientes, int dni_buffer, int pedido_buffer);

void incrementar_espacio_pedidos_clientes(int **&pedidosClientes, int &capacidad_pedidos_clientes);

void buscar_cliente(int **pedidosClientes, int dni_buffer, bool &existe_cliente, int &indice_cliente);

int indice_ultimo_cliente(int **pedidosClientes);

void quick_sort(int **pedidosClientes, int izq, int der);

void cambiar_datos(int *&datoI, int*&datoK);

bool es_mayor(int **pedidosClientes, int i, int izq);

#endif /* PEDIDOS_CLIENTES_HPP */

