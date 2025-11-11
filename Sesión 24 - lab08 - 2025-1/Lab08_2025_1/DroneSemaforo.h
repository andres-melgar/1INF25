#ifndef HERENCIA_DRONESEMAFORO_H
#define HERENCIA_DRONESEMAFORO_H
#include "Drone.h"


class DroneSemaforo  : public Drone {
private:
    int luz_roja;
public:
    DroneSemaforo();

    void leer(ifstream & arch) override;
};


#endif //HERENCIA_DRONESEMAFORO_H