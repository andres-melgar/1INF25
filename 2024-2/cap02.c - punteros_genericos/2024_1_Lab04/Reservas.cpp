#include <iostream>
#include <cstring>
#include "Reservas.hpp"
#include "Clientes.hpp"
#include "Comunes.hpp"

using namespace std;

void inicializar_conjunto_de_reservas(ConjuntoReservas &conjuntoReservas) {
    conjuntoReservas.cantidad = 0 ;
}

void incluir_libro(ConjuntoReservas &conjuntoReservas, char *codigo_buffer, char *titulo_buffer, char *autor_buffer, int stock__buffer) {
    void **bloque_reserva = new void*[5];
    
    char *codigo_dinamico = mi_strdup(codigo_buffer);
    char *titulo_dinamico = mi_strdup(titulo_buffer);
    char *autor_dinamico = mi_strdup(autor_buffer);
    void **bloque_pedidos = nullptr;
    int *stock_dinamico = retorna_referencia_a_entero(stock__buffer);
    
    if (stock__buffer>0){
        bloque_pedidos = new void*[stock__buffer];
        for(int i=0; i<stock__buffer; i++)
            bloque_pedidos[i] = nullptr;
    }
    
    bloque_reserva[0] = codigo_dinamico;
    bloque_reserva[1] = titulo_dinamico;
    bloque_reserva[2] = autor_dinamico;
    bloque_reserva[3] = bloque_pedidos;
    bloque_reserva[4] = stock_dinamico;
    
    conjuntoReservas.reservas[conjuntoReservas.cantidad] = bloque_reserva;
    conjuntoReservas.cantidad++;
}

void incluir_fin_reserva(ConjuntoReservas &conjuntoReservas) {
    conjuntoReservas.reservas[conjuntoReservas.cantidad] = nullptr;
    conjuntoReservas.cantidad++;
}

void operator>>(const ConjuntoReservas &conjuntoReservas, void *&reserva) {
    void **bloque_reservas = new void*[conjuntoReservas.cantidad];
    for(int i=0; i<conjuntoReservas.cantidad; i++)
        bloque_reservas[i] = conjuntoReservas.reservas[i];
    reserva = bloque_reservas;
}

void imprimir_reservas_void(void *reserva) {

}

void procesar_reserva(void *clientes, void *reserva, int dni_buffer, char *codigo_buffer) {
    void **bloque_reserva = buscar_bloque_del_libro(reserva, codigo_buffer);
    if (bloque_reserva != nullptr){
        int *stock_dinamico = (int*)bloque_reserva[4];
        if (*stock_dinamico>0){
            void **bloque_pedidos = (void**)bloque_reserva[3];
            for(int i=0; i<*stock_dinamico; i++){
                if (bloque_pedidos[i] == nullptr){
                    char *nombre_cliente = buscar_cliente(clientes, dni_buffer);
                    if (nombre_cliente != nullptr){
                        void **bloque_pedido = new void*[2];
                        bloque_pedido[0] = retorna_referencia_a_entero(dni_buffer);
                        bloque_pedido[1] = mi_strdup(nombre_cliente); 
                        bloque_pedidos[i] = bloque_pedido;
                    }
                    break;
                }
            }
        }
    }
}

void **buscar_bloque_del_libro(void *reserva, char *codigo_buffer){

}