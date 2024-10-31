#include <iostream>
#include <fstream>
#include "OrdenVenta.hpp"
#include "Pedido.hpp"
#include "PrioridadAlta.hpp"
#include "PrioridadMedia.hpp"
#include "PrioridadBaja.hpp"

using namespace std;

OrdenVenta::OrdenVenta() {
    this->ptr_orden = nullptr;
}

OrdenVenta::OrdenVenta(const OrdenVenta& orig) {
}

OrdenVenta::~OrdenVenta() {
    if (this->ptr_orden != nullptr)
        delete this->ptr_orden;
}

void OrdenVenta::crearPedido(char tipo_de_pedido) {
    Pedido *ptrPedidoCreado = nullptr;
    switch (tipo_de_pedido) {
        case PEDIDO_PRIORIDAD_ALTA:
            ptrPedidoCreado = new PrioridadAlta();
            break;
        case PEDIDO_PRIORIDAD_MEDIA:
            ptrPedidoCreado = new PrioridadMedia();
            break;
        case PEDIDO_PRIORIDAD_BAJA:
            ptrPedidoCreado = new PrioridadBaja();
            break;
    }
    this->ptr_orden = ptrPedidoCreado;
}

void OrdenVenta::leerPedido(ifstream &archivo_de_pedidos){
    this->ptr_orden->lee(archivo_de_pedidos);
}

void OrdenVenta::imprimirPedido(){
    this->ptr_orden->imprime();
}

void OrdenVenta::actualizarPedido(){
    this->ptr_orden->actualiza();
}