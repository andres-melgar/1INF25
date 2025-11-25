#include "Vehiculo.h"
#include "Comunes.h"

char * Vehiculo::getPlaca() {
    return mi_strdup(this->placa);
}
