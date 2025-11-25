#ifndef CODE_MINISTERIODETRANSPORTE_H
#define CODE_MINISTERIODETRANSPORTE_H
#include <list>
#include "Infraccion.h"
#include "Empresa.h"

using namespace std;

class MinisterioDeTransporte {
private:
    list<class Infraccion> tablaInfracciones;
    list<class Empresa> listaEmpresas;
public:
    void cargaDeInfracciones(const char *nombreArchivo);

    void cargaEmpresas(const char *nombreArchivo);

    void cargaVehiculos(const char *nombreArchivo);

    void cargaInfraccionesCometidas(const char *nombreArchivo);
};


#endif //CODE_MINISTERIODETRANSPORTE_H