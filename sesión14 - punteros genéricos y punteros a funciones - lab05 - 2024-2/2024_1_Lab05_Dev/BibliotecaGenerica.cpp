#include <fstream>
#include "AperturaDeArchivos.h"
#include "BibliotecaGenerica.hpp"

using namespace std;

void crealista(void *&pedidos, void *(*funcion_de_lectura)(ifstream &),
        const char *nombre_de_archivo) {
    ifstream archDatos;
    AperturaDeUnArchivoDeTextosParaLeer(archDatos, nombre_de_archivo);

    pedidos = nullptr;
    while (true) {
        void *ptrDato = funcion_de_lectura(archDatos);
        if (archDatos.eof())
            break;
        insertalista(pedidos, ptrDato);
    }
    archDatos.close();
}

void insertalista(void *&pedidos, void *ptrDato) {
    void **nuevo_nodo = new void*[2];
    nuevo_nodo[0] = ptrDato;
    nuevo_nodo[1] = nullptr;

    //caso particular: la lista está vacio
    if (pedidos == nullptr) {
        void **lista = new void*[2];
        lista[0] = nuevo_nodo;
        lista[1] = nuevo_nodo;
        pedidos = lista;
    } else {
        void **lista = (void**) pedidos;
        void *fin_lista = lista[1]; //sacando nodo color marrón en la gráfica
        void **ultimo_nodo = (void**) fin_lista; //sacando nodo color marrón en la gráfica
        ultimo_nodo[1] = nuevo_nodo;
        lista[1] = nuevo_nodo;
    }
}

void imprimelista(void *pedidos, void(*funcion_de_impresion)(ofstream &, void *),
        const char *nombre_de_archivo) {
    ofstream archReporte;
    AperturaDeUnArchivoDeTextosParaEscribir(archReporte, nombre_de_archivo);
    //recorrido secuencial
    if (pedidos != nullptr) {
        void **lista = (void**) pedidos;
        void *inicio_lista = lista[0]; //sacando nodo color verde en la gráfica
        void **nodo = (void**) inicio_lista; //sacando nodo color verde en la gráfica
        while (nodo != nullptr) {
            void *ptrDato = nodo[0];
            funcion_de_impresion(archReporte, ptrDato);
            nodo = (void**) nodo[1];
        }
    }
    archReporte.close();
}

void combinalista(void *pedidos1, void *pedidos2, void *&pedidosfinal, bool(*funcion_de_comparacion)(void *, void*)) {
    pedidosfinal = nullptr;
    if (pedidos1 != nullptr and pedidos2 != nullptr) {
        void **lista1 = (void**) pedidos1;
        void **lista2 = (void**) pedidos2;

        void *inicio_lista1 = lista1[0];
        void *inicio_lista2 = lista2[0];

        void **nodo1 = (void**) inicio_lista1;
        void **nodo2 = (void**) inicio_lista2;

        while (nodo1 != nullptr and nodo2 != nullptr) {
            void *ptrDato1 = nodo1[0];
            void *ptrDato2 = nodo2[0];
            bool es_menor = funcion_de_comparacion(ptrDato1, ptrDato2);
            if (es_menor) {
                insertalista(pedidosfinal, ptrDato1);
                nodo1 = (void**) nodo1[1];
            } else {
                insertalista(pedidosfinal, ptrDato2);
                nodo2 = (void**) nodo2[1];
            }
        }

        while (nodo1 != nullptr) {
            void *ptrDato1 = nodo1[0];
            insertalista(pedidosfinal, ptrDato1);
            nodo1 = (void**) nodo1[1];
        }
        
        while (nodo2 != nullptr) {
            void *ptrDato2 = nodo2[0];
            insertalista(pedidosfinal, ptrDato2);
            nodo2 = (void**) nodo2[1];
        }
    }
}