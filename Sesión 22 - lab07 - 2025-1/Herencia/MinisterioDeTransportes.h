#ifndef HERENCIA_MINISTERIODETRANSPORTES_H
#define HERENCIA_MINISTERIODETRANSPORTES_H
#include "CentralDeMonitoreo.h"
#define MAX_ZONAS 10

class MinisterioDeTransportes {
private:
    CentralDeMonitoreo centros[10];
    char *zonas[MAX_ZONAS];
    int cantidad_centros;
public:
    MinisterioDeTransportes();

    ~MinisterioDeTransportes();
};


#endif //HERENCIA_MINISTERIODETRANSPORTES_H