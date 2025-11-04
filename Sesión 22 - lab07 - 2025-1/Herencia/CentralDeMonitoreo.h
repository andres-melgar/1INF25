#ifndef HERENCIA_CENTRALDEMONITOREO_H
#define HERENCIA_CENTRALDEMONITOREO_H
#include "Flota.h"

class CentralDeMonitoreo {
private:
    Flota flota;
    int cantidad_multas_registradas;
    double total_multas_acumuladas;
public:
    CentralDeMonitoreo();
};


#endif //HERENCIA_CENTRALDEMONITOREO_H