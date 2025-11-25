#include "MinisterioDeTransporte.h"

#include <algorithm>

#include "Comunes.h"

using namespace std;

void MinisterioDeTransporte::cargaDeInfracciones(const char *nombreArchivo) {
    //ABRIR ARCHIVO
    //ITERAR Y CARGAR UNA INFRACCION
        //ASUMIMOS QUE TENEMOS UNA INFRACCION
        Infraccion infraccion;
        this->tablaInfracciones.push_back(infraccion);
    //FIN ITERACION

    this->tablaInfracciones.sort();

    //CERRAR ARCHIVO
}

void MinisterioDeTransporte::cargaEmpresas(const char *nombreArchivo) {
    //ABRIR ARCHIVO
    //ITERAR Y CARGAR UNA EMPRESA
    //ASUMIMOS QUE TENEMOS UNA INFRACCION
        Empresa empresa;
        this->listaEmpresas.push_back(empresa);
    //FIN ITERACION

    this->listaEmpresas.sort();

    //CERRAR ARCHIVO
}

void MinisterioDeTransporte::cargaVehiculos(const char *nombreArchivo) {
    //ABRIR ARCHIVO
    //ITERAR Y CARGAR UN VEHICULO
    //ASUMIMOS QUE TENEMOS UN VEHICULO
        int dni;
        Vehiculo vehiculo;
        for (Empresa empresa: this->listaEmpresas) {
            if (empresa.getDNI() == dni) {
                empresa.añadeVehiculo(vehiculo);
                break;
            }
        }
    //FIN ITERACION


    //CERRAR ARCHIVO
}

void MinisterioDeTransporte::cargaInfraccionesCometidas(const char *nombreArchivo) {
    //ABRIR ARCHIVO
    //ITERAR Y CARGAR LA MULTA
    //ASUMIMOS QUE TENEMOS UNA MULTA
        Multa multa;
        char *placa = multa.getPlaca();
        for (Empresa empresa: this->listaEmpresas) {
            if (empresa.existe_vehiculo(placa)) {
                empresa.añadeMulta(multa);
                break;
            }
        }
        liberar_cadena(placa);
    //FIN ITERACION


    //CERRAR ARCHIVO
}
