#include "ConjuntoArreglos.h"
#include <iomanip>
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void cargar_conjunto_de_arreglos(ConjuntoArreglos &conjuntoArreglos, const char *nombre_archivo) {
    ifstream archivo(nombre_archivo, ios::in);
    if (not archivo.is_open()) {
        cout << "El archivo " << nombre_archivo << " no se ha podido aperturar." << endl;
        exit(10);
    }

    //Paso 1 de slide 48
    int buffer_codigo[50];
    char *buffer_nombre[50];
    char **buffer_cursos[50];

    int i = 0;
    while (true) {
        //Paso 2 de slide 48
        archivo >> buffer_codigo[i];
        if (archivo.eof()) {
            break;
        }
        archivo.get();
        //Paso 2 de slide 48
        buffer_nombre[i] = sacar_nombre(archivo);
        //Paso 2 de slide 48
        buffer_cursos[i] = sacar_cursos(archivo);
        i++;
    }
    //Paso 3 de slide 48
    conjuntoArreglos.cantidad = i;
    conjuntoArreglos.codigo = new int [conjuntoArreglos.cantidad];
    conjuntoArreglos.nombre = new char *[conjuntoArreglos.cantidad];
    conjuntoArreglos.cursos = new char **[conjuntoArreglos.cantidad];

    //Paso 4 de slide 48
    for (i = 0; i < conjuntoArreglos.cantidad; i++) {
        conjuntoArreglos.codigo[i] = buffer_codigo[i];
        //el siguiente código está mal pues no se ha reservado
        //espacio para conjuntoArreglos.nombre[i]
        //strcpy(conjuntoArreglos.nombre[i], buffer_nombre[i]);
        conjuntoArreglos.nombre[i] = buffer_nombre[i];
        conjuntoArreglos.cursos[i] = buffer_cursos[i];
    }
    archivo.close();
}

char *sacar_nombre(ifstream &archivo) {
    char buffer_nombre[100];
    archivo.getline(buffer_nombre, 100, ',');
    char *nombre_persona = new char[strlen(buffer_nombre) + 1];
    strcpy(nombre_persona, buffer_nombre);
    return nombre_persona;
    //el siguiente código se considera un error grave en el curso
    //y anula toda la respuesta
    //return buffer_nombre;
}

char **sacar_cursos(ifstream &archivo) {
    char *buffer_cursos[100];
    int cantidad = 1;
    while (true) {
        char *curso = new char[7];
        archivo.getline(curso, 7);
        buffer_cursos[cantidad - 1] = curso;
        cantidad++;
        char c = archivo.get();
        if (c == '\n' or c == 13)
            break;
    }
    buffer_cursos[cantidad - 1] = nullptr;
    //aca:
    // 1. Reserva memoria para el bloque cursos
    // 2. Se copia del buffer al bloque cursos
    char **cursos = new char *[cantidad];
    for (int i = 0; i < cantidad; i++) {
        cursos[i] = buffer_cursos[i];
    }
    return cursos;
}

void reporte_de_alumnos(ConjuntoArreglos conjuntoArreglos, const char *nombre_archivo) {
    ofstream archivo(nombre_archivo, ios::out);
    if (not archivo.is_open()) {
        cout << "El archivo " << nombre_archivo << " no se ha podido aperturar." << endl;
        exit(10);
    }

    for (int i = 0; i < conjuntoArreglos.cantidad; i++) {
        archivo << left << setw(10) << conjuntoArreglos.codigo[i] << setw(10) << conjuntoArreglos.nombre[i];
        for (int j = 0; conjuntoArreglos.cursos[i][j] != nullptr; j++) {
            archivo << right << setw(15) << conjuntoArreglos.cursos[i][j] << endl;
        }
    }
}
