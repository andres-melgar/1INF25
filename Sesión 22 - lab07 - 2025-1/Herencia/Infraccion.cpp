#include <iostream>
#include <fstream>
#include "Infraccion.h"
#include "Comunes.h"

using namespace std;

Infraccion::Infraccion() {
    this->inicializar();
}

Infraccion::Infraccion(const Infraccion &infraccion) {
    this->inicializar();
    this->copiar(infraccion);
}

Infraccion::~Infraccion() {
    this->liberar();
}

void Infraccion::operator=(const Infraccion &infraccion) {
    this->liberar();
    this->copiar(infraccion);
}

void Infraccion::leer(ifstream &arch) {
    //vamos a asumir que tenemos que leer una línea con este formato
    //DV253,PLT-100,15/06/2025,65
    char id_drone_buffer[6];
    char placa_buffer[8];
    int dia_buffer;
    int mes_buffer;
    int anho_buffer;
    int condicion_buffer;

    arch.getline(id_drone_buffer, 6, ',');
    arch.getline(placa_buffer, 8, ',');
    arch >> dia_buffer >> mes_buffer >> anho_buffer >> anho_buffer >> condicion_buffer;
    arch.get();
    arch >> condicion_buffer;

    this->set_placa(placa_buffer);

}

void Infraccion::imprimir(ofstream &arch) const {
}

void Infraccion::set_fecha_evento(int fecha_evento) {
    this->fecha_evento = fecha_evento;
}

void Infraccion::set_tipo_infraccion(char *tipo_infraccion) {
    liberar_cadena(this->tipo_infraccion);
    this->tipo_infraccion = mi_strdup(tipo_infraccion);
}

void Infraccion::set_monto(double monto) {
    this->monto = monto;
}

void Infraccion::set_fecha_pago_limite(int fecha_pago_limite) {
    this->fecha_pago_limite = fecha_pago_limite;
}

void Infraccion::set_placa(char *placa) {
    liberar_cadena(placa);
    this->placa = mi_strdup(placa);
}

int Infraccion::get_fecha_evento() {
    return this->fecha_evento;
}

char * Infraccion::get_tipo_infraccion() {
    return mi_strdup(this->tipo_infraccion);
}

double Infraccion::get_monto() {
    return this->monto;
}

int Infraccion::get_fecha_pago_limite() {
    return this->fecha_pago_limite;
}

char * Infraccion::get_placa() {
    return mi_strdup(this->placa);
}

void Infraccion::inicializar() {
    this->fecha_evento = FECHA_VACIA;
    this->tipo_infraccion = nullptr;
    this->monto = 0;
    this->fecha_pago_limite = FECHA_VACIA;
    this->placa = nullptr;
}

void Infraccion::liberar() {
    liberar_cadena(this->tipo_infraccion);
    liberar_cadena(this->placa);
}

void Infraccion::copiar(const Infraccion &infraccion) {
    this->fecha_evento = infraccion.fecha_evento;
    this->tipo_infraccion = mi_strdup(infraccion.tipo_infraccion);
    this->monto = infraccion.monto;
    this->fecha_pago_limite = infraccion.fecha_pago_limite;
    this->placa = mi_strdup(infraccion.placa);
}
