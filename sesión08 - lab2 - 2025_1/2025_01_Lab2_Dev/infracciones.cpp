#include "LibreriaApertura/AperturaDeArchivos.h"
#include "comunes.h"
#include "infracciones.h"

using namespace std;

void operator+=(Infracciones &infracciones, const char *nombre_de_archivo) {
    ifstream archivo_de_infracciones;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_infracciones, nombre_de_archivo);

    int buffer_codigos[MAX_BUFFER_INFRACCIONES];
    char *buffer_descripciones[MAX_BUFFER_INFRACCIONES];
    char *buffer_tipos[MAX_BUFFER_INFRACCIONES];
    double buffer_valores[MAX_BUFFER_INFRACCIONES];
    int cantidad = 0;

    while (true) {
        int codigo;
        char descripcion[MAX_BUFFER_INFRACCION_DESCRIPCION];
        char tipo[MAX_BUFFER_INFRACCION_TIPO];
        double valor;

        archivo_de_infracciones >> codigo;
        if (archivo_de_infracciones.eof())
            break;
        archivo_de_infracciones.get(); // para sacar el punto y coma
        archivo_de_infracciones.getline(descripcion, MAX_BUFFER_INFRACCION_DESCRIPCION, ';');
        archivo_de_infracciones.getline(tipo, MAX_BUFFER_INFRACCION_TIPO, ';');
        archivo_de_infracciones >> valor;

        cantidad++;
        buffer_codigos[cantidad-1] = codigo;
        buffer_descripciones[cantidad-1] = mi_strdup(descripcion);
        buffer_tipos[cantidad-1] = mi_strdup(tipo);
        buffer_valores[cantidad-1] = valor;
    }
    infracciones.cantidad = cantidad;
    infracciones.codigos = new int[infracciones.cantidad];
    infracciones.descripciones = new char*[infracciones.cantidad];
    infracciones.tipos = new char*[infracciones.cantidad];
    infracciones.valores = new double[infracciones.cantidad];
    for (int i=0; i<infracciones.cantidad; i++) {
        infracciones.codigos[i] = buffer_codigos[i];
        infracciones.descripciones[i] = buffer_descripciones[i];
        infracciones.tipos[i] = buffer_tipos[i];
        infracciones.valores[i] = buffer_valores[i];
    }
    archivo_de_infracciones.close();
}