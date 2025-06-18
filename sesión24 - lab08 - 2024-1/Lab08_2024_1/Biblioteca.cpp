#include <iostream>
#include <fstream>
#include "Biblioteca.hpp"
#include "AperturaDeArchivos.h"

using namespace std;

Biblioteca::Biblioteca() {
    this->cantidad_estantes = 0;
}

void Biblioteca::carga() {
    ifstream archivo_de_estantes;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_estantes, "Estantes2.csv");
    
    char clase_buffer;
    int identificador_buffer;
    double peso_buffer;
    
    while(true){
        archivo_de_estantes.get(clase_buffer);
        if (archivo_de_estantes.eof())
            break;
        archivo_de_estantes.get(); //sacar la coma
        archivo_de_estantes >> identificador_buffer;
        archivo_de_estantes.get(); //sacar la coma
        archivo_de_estantes >> peso_buffer;
        
        char buffer[256];
        archivo_de_estantes.getline(buffer, 255);
        
        Estante estante(clase_buffer, identificador_buffer, peso_buffer);
        this->cantidad_estantes++;
        /* se está creando recien el estante, por lo tanto la lista está
         * vacía, es decir apunta a null. Justamente en este momento, es
         * factible que se haga una copia superficial del objeto. Por lo
         * tanto, no es necesario sobrecargar el operador =
         */
        this->AEstante[this->cantidad_estantes-1] = estante;
    }
    archivo_de_estantes.close();
}

void Biblioteca::llena() {

}

void Biblioteca::baja() {

}

void Biblioteca::muestra() {

}
