#ifndef HERENCIA_DRONEESTACIONAMIENTO_H
#define HERENCIA_DRONEESTACIONAMIENTO_H
#include "Drone.h"

class DroneEstacionamiento : public Drone  {
private:
    int zona_carga;
public:
    DroneEstacionamiento();
};

#endif //HERENCIA_DRONEESTACIONAMIENTO_H