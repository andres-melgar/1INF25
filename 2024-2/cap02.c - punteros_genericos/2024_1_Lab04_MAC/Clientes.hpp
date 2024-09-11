#ifndef CLIENTES_HPP
#define CLIENTES_HPP

typedef struct {
    void *clientes[100];
    int cantidad;    
} ConjuntoClientes;

void inicializar_conjunto_de_clientes(ConjuntoClientes &conjuntoClientes);

void incluir_cliente(ConjuntoClientes &conjuntoClientes, int dni_buffer, char *nombre_buffer);

void incluir_fin_cliente(ConjuntoClientes &conjuntoClientes);

void operator>>(const ConjuntoClientes &conjuntoClientes, void *&clientes);

void imprimir_clientes_void(void *clientes);

char *buscar_cliente(void *clientes, int dni_buffer);

#endif /* CLIENTES_HPP */

