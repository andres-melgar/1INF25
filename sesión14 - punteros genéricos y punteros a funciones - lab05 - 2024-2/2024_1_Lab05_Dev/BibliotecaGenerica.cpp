#include <fstream>
#include "AperturaDeArchivos.h"
#include "BibliotecaGenerica.hpp"

using namespace std;

void crealista(void *&pedidos, void *(*funcion_de_lectura)(ifstream &), const char *nombre_de_archivo) {
    ifstream archDatos;
    AperturaDeUnArchivoDeTextosParaLeer(archDatos, nombre_de_archivo);

    
    while (true) {
        
        if (archDatos.eof())
            break;
        
    }
    archDatos.close();
}

void insertalista(void *&pedidos, void *ptrDato) {
    
}

void imprimelista(void *pedidos, void(*funcion_de_impresion)(ofstream &, void *), const char *nombre_de_archivo) {
    ofstream archReporte;
    AperturaDeUnArchivoDeTextosParaEscribir(archReporte, nombre_de_archivo);
   
    
    
    archReporte.close();
}

void combinalista(void *pedidos1, void *pedidos2, void *&pedidosfinal, bool(*funcion_de_comparacion)(void *, void*)) {
    
}