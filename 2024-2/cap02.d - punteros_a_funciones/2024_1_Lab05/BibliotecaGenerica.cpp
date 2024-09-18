#include <fstream>
#include "AperturaDeArchivos.h"
#include "BibliotecaGenerica.hpp"
#include "Comunes.hpp"

using namespace std;

void crealista(void *&pedidos, void *(*funcion_de_lectura)(ifstream &), const char *nombre_de_archivo) {
    ifstream archDatos;
    AperturaDeUnArchivoDeTextosParaLeer(archDatos, nombre_de_archivo);

    pedidos = nullptr;
    while (true) {
        int dato;
        archDatos >> dato;
        if (archDatos.eof())
            break;
        void *ptrDato = retorna_referencia_a_entero(dato);
        insertalista(pedidos, ptrDato);
    }
    archDatos.close();
}

void insertalista(void *&pedidos, void *ptrDato) {
    //crear el nuevo nodo
    void **nuevo_nodo = new void*[2];
    nuevo_nodo[0] = ptrDato;
    nuevo_nodo[1] = nullptr;

    //primer caso, cuando la lista está vacia
    if (pedidos == nullptr) {
        void **lista = new void*[2];
        lista[0] = nuevo_nodo;
        lista[1] = nuevo_nodo;
        pedidos = lista;
    } else {
        //segundo caso, cuando la lista no está vacia
        void **lista = (void**) pedidos;
        void *fin_lista = lista[1];
        void **ultimo_nodo = (void**)fin_lista;
        ultimo_nodo[1] = nuevo_nodo;
        lista[1] = nuevo_nodo;
    }
}

void imprimelista(void *pedidos, void(*funcion_de_impresion)(ofstream &, void *), const char *nombre_de_archivo) {
    ofstream archReporte;
    AperturaDeUnArchivoDeTextosParaEscribir(archReporte, nombre_de_archivo);



    archReporte.close();
}

void combinalista(void *pedidos1, void *pedidos2, void *&pedidosfinal, bool(*funcion_de_comparacion)(void *, void*)) {

}