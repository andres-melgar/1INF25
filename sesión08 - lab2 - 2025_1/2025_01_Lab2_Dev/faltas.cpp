#include "LibreriaApertura/AperturaDeArchivos.h"
#include "faltas.h"
#include <cstring>

#include "comunes.h"

using namespace std;

void cargar_faltas_de_los_conductores(Faltas & faltas, const char *archivo_conductores, const char *archivo_infracciones, const char *nombre_de_archivo_faltas) {
    faltas.conductores += archivo_conductores;
    faltas.infracciones += archivo_infracciones;
    inicializar_estructuras_de_faltas(faltas);

    ifstream archivo_de_faltas;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_faltas, nombre_de_archivo_faltas);

    while (true) {
        int dni_buffer;
        char placa_buffer[8];
        char buffer_linea[255];

        archivo_de_faltas >> dni_buffer;
        if (archivo_de_faltas.eof()) {
            break;
        }
        archivo_de_faltas.get(); //para sacar el punto y coma
        archivo_de_faltas.getline(placa_buffer, 8, ';');
        archivo_de_faltas.getline(buffer_linea, 255, '\n');

        //ubicar la posición del conductor en el arreglo
        int indice_conductor = retornar_indice_del_conductor(faltas.conductores, dni_buffer);
        incluir_placa(faltas, indice_conductor, placa_buffer);
    }


    archivo_de_faltas.close();
}

void inicializar_estructuras_de_faltas(Faltas & faltas) {
    int cantidad = faltas.conductores.cantidad;

    faltas.placas = new char**[cantidad];
    faltas.capacidades = new int[cantidad];

    for (int i = 0; i < cantidad; i++) {
        faltas.placas[i] = nullptr;
        faltas.capacidades[i] = 0;
    }
}

void incluir_placa(Faltas & faltas, int indice_conductor, char *placa_buffer) {
    //obtenemos las placas vinculadas al conductor
    char **bloque_placas_original = faltas.placas[indice_conductor];
    int capacidad_original = faltas.capacidades[indice_conductor];

    //vamos a buscar la placa:
    //  placa_buffer
    //en el bloque
    //  bloque_placas_original
    //de tamaño
    //  capacidad_original
    bool existe_placa = false;
    int cantidad_de_placas = 0;
    for (int i=0; i < capacidad_original && bloque_placas_original[i]!=nullptr; i++) {
        //contiene la cantidad de placas en caso
        //la placa no se encuentre
        cantidad_de_placas++;
        if (strcmp(bloque_placas_original[i], placa_buffer) == 0) {
            existe_placa = true;
            break;
        }
    }
    if (!existe_placa) {
        if (cantidad_de_placas+2 >= capacidad_original) {
            faltas.capacidades[indice_conductor] += INCREMENTO_BLOQUE;
            faltas.placas[indice_conductor] = new char*[faltas.capacidades[indice_conductor]];

            for (int i=0; i < capacidad_original; i++) {
                char **bloque_del_conductor = faltas.placas[indice_conductor];
                bloque_del_conductor[i] = bloque_placas_original[i];
            }
            delete [] bloque_placas_original;
        }
        char **bloque_del_conductor = faltas.placas[indice_conductor];
        bloque_del_conductor[cantidad_de_placas] = mi_strdup(placa_buffer);
        bloque_del_conductor[cantidad_de_placas+1] = nullptr;
    }
}