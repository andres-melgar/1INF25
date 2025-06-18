#include "Novela.hpp"
#include "Comunes.hpp"

Novela::Novela() {
    this->autor = nullptr;
}

Novela::~Novela() {
    libera_cadena(this->autor);
}

