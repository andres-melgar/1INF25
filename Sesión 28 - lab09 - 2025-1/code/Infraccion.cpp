#include "Infraccion.h"

#include <cstring>

bool Infraccion::operator<(const Infraccion &infraccion) {
    return strcmp(this->codigo, infraccion.codigo) < 0;
}
