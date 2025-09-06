#include "ConjuntoArreglos.h"
#include <iomanip>
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void cargar_conjunto_de_arreglos(ConjuntoArreglos &conjuntoArreglos, const char *nombre_archivo){
    ifstream archivo(nombre_archivo, ios::in);
    if (not archivo.is_open()){
        cout<<"El archivo "<<nombre_archivo<<" no se ha podido aperturar."<<endl;
        exit(10);
    }
       
   //TODO

    archivo.close();
}

char *sacar_nombre(ifstream &archivo){
    //TODO
}

char **sacar_cursos(ifstream &archivo){    
    //TODO
}

void reporte_de_alumnos(ConjuntoArreglos conjuntoArreglos, const char *nombre_archivo){
    ofstream archivo(nombre_archivo, ios::out);
    if (not archivo.is_open()){
        cout<<"El archivo "<<nombre_archivo<<" no se ha podido aperturar."<<endl;
        exit(10);
    }
    
    //TODO
}