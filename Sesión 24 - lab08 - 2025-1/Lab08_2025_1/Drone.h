#ifndef HERENCIA_DRONE_H
#define HERENCIA_DRONE_H
#include <fstream>

using namespace std;

class Drone {
private:
    char *id;
    char *ubicacion;
    int capacidad;
public:
    Drone();

    ~Drone();

    char *getId();

    virtual void leer(ifstream & arch);
private:
    void inicializar();

    void liberar();
};

#endif //HERENCIA_DRONE_H
