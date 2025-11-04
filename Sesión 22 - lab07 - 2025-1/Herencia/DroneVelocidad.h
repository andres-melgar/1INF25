#ifndef HERENCIA_DRONEVELOCIDAD_H
#define HERENCIA_DRONEVELOCIDAD_H
#include "Drone.h"


class DroneVelocidad : public Drone {
private:
    int velocidad_maxima_permitida;
public:
    DroneVelocidad();
};


#endif //HERENCIA_DRONEVELOCIDAD_H