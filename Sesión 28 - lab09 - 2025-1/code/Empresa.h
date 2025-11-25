#ifndef CODE_EMPRESA_H
#define CODE_EMPRESA_H
#include <map>
#include <string>
#include <vector>
#include "Vehiculo.h"
#include "Multa.h"
#define DNI_VACIO -1

using namespace std;

class Empresa {
private:
    int dni;
    char *nombre;
    char *distrito;
    map<string, class Vehiculo> vehiculos;
    vector<class Multa> multasRecibidas;
public:
    Empresa();

    ~Empresa();

    bool operator<(const Empresa &empresa);

    int getDNI();

    void añadeVehiculo(Vehiculo & vehiculo);

    bool existe_vehiculo(char * placa);

    void añadeMulta(const Multa & multa);

    void eliminaMulta(const Multa & multa);
};


#endif //CODE_EMPRESA_H