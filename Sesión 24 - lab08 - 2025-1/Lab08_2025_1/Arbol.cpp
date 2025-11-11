#include "Arbol.h"

#include <cstring>

Arbol::Arbol() {
    this->raiz = nullptr;
}

Arbol::~Arbol() {
    this->libera_arbol();
}

void Arbol::insertar(Drone *drone) {
    if (drone != nullptr) {
        this->insertar_nodo_recursivo(this->raiz, drone);
    }
}

void Arbol::insertar_nodo_recursivo(Nodo *&nodo, Drone *drone) {
    if (nodo == nullptr) {
        nodo = new Nodo();
        nodo->drone = drone;
    } else {
        char *id_parametro = drone->getId();
        char *id_raiz = nodo->drone->getId();
        bool comparacion = strcmp(id_parametro, id_raiz) < 0;
        delete id_parametro;
        delete id_raiz;
        if (comparacion) {
            this->insertar_nodo_recursivo(nodo->izq, drone);
        } else {
            this->insertar_nodo_recursivo(nodo->der, drone);
        }

    }
}

void Arbol::libera_arbol() {
    this->liberar_arbol_recorrido_posorden(this->raiz);
}

void Arbol::liberar_arbol_recorrido_posorden(Nodo *&nodo) {
    if (nodo != nullptr) {
        liberar_arbol_recorrido_posorden(nodo->izq);
        liberar_arbol_recorrido_posorden(nodo->der);
        delete nodo;
        nodo = nullptr;
    }
}
