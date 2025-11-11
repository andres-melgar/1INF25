#ifndef LAB08_2025_1_ARBOL_H
#define LAB08_2025_1_ARBOL_H
#include "Nodo.h"

class Arbol {
private:
    Nodo *raiz;
public:
    Arbol();

    ~Arbol();

    void insertar(Drone *drone);
private:
    void libera_arbol();

    void liberar_arbol_recorrido_posorden(Nodo *&nodo);

    void insertar_nodo_recursivo(Nodo *&nodo, Drone *drone);
};


#endif //LAB08_2025_1_ARBOL_H