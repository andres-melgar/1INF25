#include "Empresa.h"
#include "Comunes.h"

Empresa::Empresa() {
    this->dni = DNI_VACIO;
    this->nombre = nullptr;
    this->distrito = nullptr;
}

Empresa::~Empresa() {
    liberar_cadena(this->nombre);
    liberar_cadena(this->distrito);
}

bool Empresa::operator<(const Empresa &empresa) {
    return this->dni < empresa.dni;
}

int Empresa::getDNI() {
    return this->dni;
}

void Empresa::añadeVehiculo(Vehiculo &vehiculo) {
    this->vehiculos[vehiculo.getPlaca()] = vehiculo;
}

bool Empresa::existe_vehiculo(char *placa) {
    map<string, class Vehiculo>::iterator it;
    it = this->vehiculos.find(placa);
    if (it != this->vehiculos.end())
        return true;
    return false;

    // for (auto x : this->vehiculos)
    //     x.first <--llave de búsqueda
    //     x.second <-- valor de la llave
}

void Empresa::añadeMulta(const Multa &multa) {
    this->multasRecibidas.push_back(multa);
}

void Empresa::eliminaMulta(const Multa &multa) {

}
