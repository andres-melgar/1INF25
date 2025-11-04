#ifndef HERENCIA_DRONE_H
#define HERENCIA_DRONE_H
#include "Infraccion.h"

class Drone {
private:
    char *id;
    char *ubicacion;
    int capacidad;
    int cantidad_infraciones;
    Infraccion infracciones[20];
public:
    Drone();

    ~Drone();
private:
    void inicializar();

    void liberar();
};

#endif //HERENCIA_DRONE_H
