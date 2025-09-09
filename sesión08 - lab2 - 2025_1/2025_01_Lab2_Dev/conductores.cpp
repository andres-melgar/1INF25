#include <fstream>
#include "LibreriaApertura/AperturaDeArchivos.h"
#include "comunes.h"
#include "conductores.h"

using namespace std;

void operator+=(Conductores &conductores, const char *nombre_de_archivo) {
    ifstream archivo_de_conductores;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_conductores, nombre_de_archivo);

    int buffer_dni[MAX_BUFFER_CONDUCTORES];
    char *buffer_nombre[MAX_BUFFER_CONDUCTORES];
    int cantidad = 0;

    while (true) {
        int dni;
        char nombre[MAX_BUFFER_NOMBRES];
        archivo_de_conductores >> dni;
        if (archivo_de_conductores.eof()) {
            break;
        }
        archivo_de_conductores.get(); //para el punto y coma
        archivo_de_conductores.getline(nombre, MAX_BUFFER_NOMBRES);
        cantidad++;
        buffer_dni[cantidad-1] = dni;
        buffer_nombre[cantidad-1] = mi_strdup(nombre);
        //La asignación de abajo está mal pues se asigna la
        //dirección de una variable local (stack)
        //buffer_nombre[cantidad-1] = nombre;
    }
    conductores.cantidad = cantidad;
    conductores.dnis = new int [conductores.cantidad];
    conductores.nombres = new char *[conductores.cantidad];
    for (int i = 0; i < conductores.cantidad; i++) {
        conductores.dnis[i] = buffer_dni[i];
        conductores.nombres[i] = buffer_nombre[i];
    }
    archivo_de_conductores.close();
}

int retornar_indice_del_conductor(const Conductores &conductores, int dni) {
    //TODO
    return -1;
}