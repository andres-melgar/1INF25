#include <fstream>
#include "BibliotecaGenerica.h"
#include "LibreriaApertura/AperturaDeArchivos.h"

using namespace std;

void crealista(void *&pedidos, void *(*funcion_de_lectura)(ifstream &), const char *nombre_de_archivo) {
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

//esta función inserta al final
//tarea: hacer lo mismo pero insertando al inicio
//tarea2: hacer lo mismo insertando en orden
void insertalista(void *&pedidos, void *ptrDato) {
    //creamos un nuevo nodo
    void **nuevo_nodo = new void *[2];
    nuevo_nodo[0] = ptrDato;
    nuevo_nodo[1] = nullptr;

    //verificamos que no esté la lista vacia
    if (pedidos==nullptr) {
        //la lista está vacia, no tiene el bloque de la cabeza y de la cola
        //se debe crear
        void **lista = new void*[2];
        lista[0] = nuevo_nodo; //cabeza de la lista
        lista[1] = nuevo_nodo; //cola de la lista
        pedidos = lista;
    } else {
        void **lista = (void **)pedidos;
        void *fin_lista = lista[1];
        void **ultimo_nodo = (void**)fin_lista;
        ultimo_nodo[1] = nuevo_nodo;
        lista[1] = nuevo_nodo;
    }
}

void imprimelista(void *pedidos, void(*funcion_de_impresion)(ofstream &, void *), const char *nombre_de_archivo) {
    ofstream archReporte;
    AperturaDeUnArchivoDeTextosParaEscribir(archReporte, nombre_de_archivo);

    //Implementación del recorrido secuencial
    if (pedidos != nullptr) {
        void **lista = (void **)pedidos;
        void *inicio_lista = lista[0];
        void **nodo = (void **)inicio_lista;
        while (nodo != nullptr) {
            void *ptrDato = nodo[0];
            funcion_de_impresion(archReporte, ptrDato);
            nodo = (void **)nodo[1]; //simula el nodo->ptrSig
        }
    }
    archReporte.close();
}

void combinalista(void *pedidos1, void *pedidos2, void *&pedidosfinal, bool(*funcion_de_comparacion)(void *, void*)) {

    //TODO
}