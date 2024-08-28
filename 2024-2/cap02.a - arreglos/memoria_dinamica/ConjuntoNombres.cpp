#include <iostream>
#include <fstream>
#include <cstring>
#include "ConjuntoNombres.hpp"

using namespace std;

void leer_nombres_metodo_incremento(ConjuntoNombres &conjuntoNombres, const char *nombreDeArchivo){
    ifstream archivoNombres(nombreDeArchivo, ios::in);
    if (not archivoNombres.is_open()){
        cout<<"El archivo "<<nombreDeArchivo<<" no ha podido ser aperturado."<<endl;
        exit(20);
    }
    
    //paso 1: se inicializa el conjunto de datos
    conjuntoNombres.cantidad = 0;
    conjuntoNombres.capacidad = TAMANHO_DE_BLOQUE;
    conjuntoNombres.conjunto = new char*[TAMANHO_DE_BLOQUE];
    
    char nombre[100];
    while (not archivoNombres.eof()){
        archivoNombres>>nombre;        
        //paso 2: se hace el incremento de la capacidad en caso de ser necesario
        ++conjuntoNombres;
        //paso 3: colocamos el dato en el bloque
        conjuntoNombres<<nombre;
    }
    
    archivoNombres.close();
}

void operator++(ConjuntoNombres &conjuntoNombres){
    char **conjuntoAntiguo = conjuntoNombres.conjunto;
    conjuntoNombres.cantidad++;
    
    if (conjuntoNombres.cantidad>conjuntoNombres.capacidad){
        conjuntoNombres.capacidad += TAMANHO_DE_BLOQUE;
        conjuntoNombres.conjunto = new char*[conjuntoNombres.capacidad];
        for(int i=0; i<conjuntoNombres.cantidad-1; i++){
            conjuntoNombres.conjunto[i]=conjuntoAntiguo[i];
        }
        delete conjuntoAntiguo;
    }    
}

void operator<<(ConjuntoNombres &conjuntoNombres, char *nombre){
    conjuntoNombres.conjunto[conjuntoNombres.cantidad-1] = new char[strlen(nombre)+1];
    strcpy(conjuntoNombres.conjunto[conjuntoNombres.cantidad-1], nombre);
}