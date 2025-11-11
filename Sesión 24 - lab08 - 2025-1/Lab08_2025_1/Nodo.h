#ifndef LAB08_2025_1_NODO_H
#define LAB08_2025_1_NODO_H
#include "Drone.h"

class Nodo {
private:
    Drone *drone;
    class Nodo *izq;
    class Nodo *der;
public:
    Nodo();

    ~Nodo();

    friend class Arbol;
};

#endif //LAB08_2025_1_NODO_H
