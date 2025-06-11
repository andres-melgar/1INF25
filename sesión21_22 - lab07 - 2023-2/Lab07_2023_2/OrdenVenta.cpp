#include <fstream>
#include "OrdenVenta.hpp"
#include "Comunes.hpp"
#include "Pedido.hpp"
#include "PrioridadAlta.hpp"
#include "PrioridadMedia.hpp"
#include "PrioridadBaja.hpp"

OrdenVenta::OrdenVenta() {
    this->ptr_orden = nullptr;
}

OrdenVenta::~OrdenVenta() {
    if (this->ptr_orden != nullptr)
        delete this->ptr_orden;
}

//este método tiene por objetivo asignar memoria válida al atributo
//ptr_orden
void OrdenVenta::crearPedido(char tipo_de_pedido){
    Pedido *ptrPedidoCreado;
    switch(tipo_de_pedido){
        case PEDIDO_PRIODIDAD_ALTA:
            ptrPedidoCreado = new PrioridadAlta();
            break;
        case PEDIDO_PRIODIDAD_MEDIA:
            ptrPedidoCreado = new PrioridadMedia();
            break;
        case PEDIDO_PRIODIDAD_BAJA:
            ptrPedidoCreado = new PrioridadBaja();
            break;
        default:
            ptrPedidoCreado = nullptr;
    }
    this->ptr_orden = ptrPedidoCreado;
}

//en ese método ocurre el polimorfismo
//dependiendo de la referencia se invoca a 
//  o lee de Prioridad Alta 
//  o lee de Prioridad Media
//  o lee de Prioridad Baja
void OrdenVenta::leerPedido(ifstream &archivo_de_pedido){
    this->ptr_orden->lee(archivo_de_pedido);
}

//en ese método ocurre el polimorfismo
//dependiendo de la referencia se invoca a 
//  o imprime de Prioridad Alta 
//  o imprime de Prioridad Media
//  o imprime de Prioridad Baja
void OrdenVenta::imprimirPedido(){
    this->ptr_orden->imprime();
}

//en ese método ocurre el polimorfismo
//dependiendo de la referencia se invoca a 
//  o actualiza de Prioridad Alta 
//  o actualiza de Prioridad Media
//  o actualiza de Prioridad Baja
void OrdenVenta::actualizarPedido(){
    this->ptr_orden->actualiza();
}