#include <fstream>
#include "LibreriaApertura/AperturaDeArchivos.h"
#include "comunes.h"
#include "conductores.h"

using namespace std;

void operator+=(Conductores &conductores, const char *nombre_de_archivo) {
    ifstream archivo_de_conductores;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_conductores, nombre_de_archivo);

    //TODO

    archivo_de_conductores.close();
}

int retornar_indice_del_conductor(const Conductores &conductores, int dni) {
    //TODO
    return -1;
}