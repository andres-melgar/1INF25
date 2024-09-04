#include "pedidos_clientes.hpp"

void inicializar_pedidos_clientes(int **&pedidosClientes, int &capacidad_pedidos_clientes) {
    
}

void incluir_pedido_datos_cliente(int **&pedidosClientes, int &capacidad_pedidos_clientes, int dni_buffer, int pedido_buffer) {
    
}

void incrementar_espacio_pedidos_clientes(int **&pedidosClientes, int &capacidad_pedidos_clientes) {

}

void buscar_cliente(int **pedidosClientes, int dni_buffer, bool &existe_cliente, int &indice_cliente) {
    existe_cliente = false;
    indice_cliente = 0;
    while (pedidosClientes[indice_cliente]) {
        int *bloque_datos_cliente_buffer = pedidosClientes[indice_cliente];
        if (bloque_datos_cliente_buffer[0] == dni_buffer) {
            existe_cliente = true;
            return;
        }
        indice_cliente++;
    }
}

int indice_ultimo_cliente(int **pedidosClientes) {
    int indice_cliente = 0;
    while (pedidosClientes[indice_cliente]) {
        indice_cliente++;
    }
    return indice_cliente - 1;
}

void quick_sort(int **pedidosClientes, int izq, int der) {
    if (izq >= der)
        return;
    int pos = (izq + der) / 2;
    cambiar_datos(pedidosClientes[izq], pedidosClientes[pos]);
    int limite = izq;
    for (int i = izq + 1; i <= der; i++) {
        if (es_mayor(pedidosClientes, i, izq)) {
            limite++;
            cambiar_datos(pedidosClientes[limite], pedidosClientes[i]);
        }
    }
    cambiar_datos(pedidosClientes[limite], pedidosClientes[izq]);
    quick_sort(pedidosClientes, izq, limite - 1);
    quick_sort(pedidosClientes, limite + 1, der);
}

void cambiar_datos(int *&datoI, int*&datoK) {
    int *aux = datoI;
    datoI = datoK;
    datoK = aux;
}

bool es_mayor(int **pedidosClientes, int i, int izq) {
    int *bloqueI = pedidosClientes[i];
    int *bloqueIzq = pedidosClientes[izq];
    if (bloqueI[1] > bloqueIzq[1])
        return true;
    else {
        if (bloqueI[1] == bloqueIzq[izq])
            return bloqueI[0] < bloqueIzq[0];
        else
            return false;
    }
}