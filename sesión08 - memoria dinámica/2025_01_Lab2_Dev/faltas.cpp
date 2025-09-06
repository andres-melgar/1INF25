#include "LibreriaApertura/AperturaDeArchivos.h"
#include "faltas.h"
#include "comunes.h"

using namespace std;

void cargar_faltas_de_los_conductores(Faltas & faltas, const char *archivo_conductores, const char *archivo_infracciones, const char *nombre_de_archivo_faltas) {

    ifstream archivo_de_faltas;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_faltas, nombre_de_archivo_faltas);



    archivo_de_faltas.close();
}

void inicializar_estructuras_de_faltas(Faltas & faltas) {

}

void incluir_placa(Faltas & faltas, int indice_conductor, char *placa_buffer) {

}