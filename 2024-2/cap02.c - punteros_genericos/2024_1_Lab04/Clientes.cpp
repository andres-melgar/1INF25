#include <iostream>
#include "Clientes.hpp"
#include "Comunes.hpp"

using namespace std;

void inicializar_conjunto_de_clientes(ConjuntoClientes &conjuntoClientes) {
    conjuntoClientes.cantidad = 0;
}

void incluir_cliente(ConjuntoClientes &conjuntoClientes, int dni_buffer, char *nombre_buffer) {
    void **bloque_cliente = new void*[2];
    
    int *dni_dinamico = retorna_referencia_a_entero(dni_buffer);
    char *nombre_dinamico = mi_strdup(nombre_buffer);
    
    bloque_cliente[0] = dni_dinamico;
    bloque_cliente[1] = nombre_dinamico;   
    
    conjuntoClientes.clientes[conjuntoClientes.cantidad] = bloque_cliente;
    conjuntoClientes.cantidad++;
}

void incluir_fin_cliente(ConjuntoClientes &conjuntoClientes) {
    conjuntoClientes.clientes[conjuntoClientes.cantidad] = nullptr;
    conjuntoClientes.cantidad++;
}

void operator>>(const ConjuntoClientes &conjuntoClientes, void *&clientes) {
    void **bloque_clientes = new void*[conjuntoClientes.cantidad];
    for(int i=0; i<conjuntoClientes.cantidad; i++)
        bloque_clientes[i] = conjuntoClientes.clientes[i];
    clientes = bloque_clientes;
}

void imprimir_clientes_void(void *clientes) {
    void **bloque_clientes = (void**)clientes;
    int i = 0;
    /*while(bloque_clientes[i] != nullptr){
        void **bloque_cliente = (void**)bloque_clientes[i];
        int *dni_dinamico = (int*)bloque_cliente[0];
        char *nombre_dinamico = (char*)bloque_cliente[1];
        cout<<*dni_dinamico<<" - "<<nombre_dinamico<<endl;
        i++;
    }*/
    /*while(*bloque_clientes){
        void **bloque_cliente = (void**)bloque_clientes[0];
        int *dni_dinamico = (int*)bloque_cliente[0];
        char *nombre_dinamico = (char*)bloque_cliente[1];
        cout<<*dni_dinamico<<" - "<<nombre_dinamico<<endl;
        bloque_clientes++;
    }*/
    while(*bloque_clientes){
        void **bloque_cliente = (void**)*bloque_clientes;
        int *dni_dinamico = (int*)bloque_cliente[0];
        char *nombre_dinamico = (char*)bloque_cliente[1];
        cout<<*dni_dinamico<<" - "<<nombre_dinamico<<endl;
        bloque_clientes++;
    }
}

char *buscar_cliente(void *clientes, int dni_buffer) {

}