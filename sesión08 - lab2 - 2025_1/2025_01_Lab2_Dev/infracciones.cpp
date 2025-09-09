#include "LibreriaApertura/AperturaDeArchivos.h"
#include "comunes.h"
#include "infracciones.h"

using namespace std;

void operator+=(Infracciones &infracciones, const char *nombre_de_archivo) {
    ifstream archivo_de_infracciones;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_infracciones, nombre_de_archivo);

    //TODO
    
    archivo_de_infracciones.close();
}