#include "OrdenVenta.hpp"
#include "Pedido.hpp"
#include "PrioridadAlta.hpp"
#include "PrioridadMedia.hpp"
#include "PrioridadBaja.hpp"

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
