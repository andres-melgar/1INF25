#ifndef LISTA_V01_CPILA_H
#define LISTA_V01_CPILA_H
#include "CLista.h"

class CPila: private CLista {
private:

public:
    CPila();

    CPila(int cantidad, ...);

    void apilar(double elemento);

    double desapilar();

    bool estaVacia() override;

    int getLongitud() const override;
};


#endif //LISTA_V01_CPILA_H