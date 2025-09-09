#ifndef FALTAS_HPP
#define FALTAS_HPP
#include "conductores.h"
#include "infracciones.h"
#define INCREMENTO_BLOQUE 2

struct Faltas {
    Conductores conductores;
    Infracciones infracciones;
    
    int *capacidades;
    char ***placas;
};

void cargar_faltas_de_los_conductores(Faltas & faltas, const char *archivo_conductores, const char *archivo_infracciones, const char *nombre_de_archivo_faltas);

void inicializar_estructuras_de_faltas(Faltas & faltas);

void incluir_placa(Faltas & faltas, int indice_conductor, char *placa_buffer);

#endif /* FALTAS_HPP */

