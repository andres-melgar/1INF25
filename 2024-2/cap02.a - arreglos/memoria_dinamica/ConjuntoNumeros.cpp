#include <iostream>
#include <fstream>
#include "ConjuntoNumeros.hpp"

using namespace std;

void leer_numeros_metodo_exacto(ConjuntoNumeros &conjuntoNumeros, const char *nombreDeArchivo){
    ifstream archivoNumeros(nombreDeArchivo, ios::in);
    if (not archivoNumeros.is_open()){
        cout<<"El archivo "<<nombreDeArchivo<<" no ha podido ser aperturado."<<endl;
        exit(10);
    }
    
    //paso 1: leemos los datos en una estructura estática de un tamaño suficiente
    int buffer[500];
    int i=0;
    while (true){
        int dato;
        archivoNumeros>>dato;
        if (archivoNumeros.eof())
            break;
        buffer[i++] = dato;
    }
    
    //paso 2: asignamos un bloque de memoria dinámica al conjunto de datos con tamaño exacto
    conjuntoNumeros.cantidad = i;
    conjuntoNumeros.conjunto = new int[conjuntoNumeros.cantidad];
    
    //paso 3: copiamos los datos del bloque estático al bloque dinámico
    for(i=0; i<conjuntoNumeros.cantidad; i++)
        conjuntoNumeros.conjunto[i] = buffer[i];
    
    archivoNumeros.close();
}

void leer_numeros_metodo_incremento_en_uno(ConjuntoNumeros &conjuntoNumeros, const char *nombreDeArchivo){
    ifstream archivoNumeros(nombreDeArchivo, ios::in);
    if (not archivoNumeros.is_open()){
        cout<<"El archivo "<<nombreDeArchivo<<" no ha podido ser aperturado."<<endl;
        exit(10);
    }
    
    //paso 1: inicializamos el bloque como un conjunto sin tamaño, un conjunto que no tiene elementos, un bloque que no existe
    conjuntoNumeros.cantidad = 0;
    conjuntoNumeros.conjunto = nullptr;
    
    while (true){
        int dato;
        archivoNumeros>>dato;
        if (archivoNumeros.eof())
            break;
        //paso 2: creamos un bloque de tamaño incrementado en 1 y copiamos
        // el bloque antiguo al bloque nuevo
        ++conjuntoNumeros;
        
        //paso 3: colocamos el nuevo dato en el bloque nuevo
        conjuntoNumeros<<dato;
    }        
    archivoNumeros.close();
}

void operator++(ConjuntoNumeros &conjuntoNumeros){
    int *conjuntoAntiguo = conjuntoNumeros.conjunto;
    conjuntoNumeros.cantidad++;
    conjuntoNumeros.conjunto = new int[conjuntoNumeros.cantidad];
    
    for(int i=0; i<conjuntoNumeros.cantidad-1; i++)
        conjuntoNumeros.conjunto[i]=conjuntoAntiguo[i];
    
    delete conjuntoAntiguo;
}

void operator<<(ConjuntoNumeros &conjuntoNumeros, int dato){
    conjuntoNumeros.conjunto[conjuntoNumeros.cantidad-1] = dato;
}