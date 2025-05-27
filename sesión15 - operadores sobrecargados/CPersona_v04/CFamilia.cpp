#include "CFamilia.hpp"

CFamilia::CFamilia() {
    this->padres[0] = nullptr;
    this->padres[1] = nullptr;
    this->hijos = nullptr;
    this->cantidad_hijos = 0;
}

CFamilia::~CFamilia() {
    this->liberar_padres(0);
    this->liberar_padres(1);
    this->liberar_hijos();    
}

void CFamilia::liberar_padres(int indice) {
    if (this->padres[indice] != nullptr)
        delete this->padres[indice];
}

void CFamilia::liberar_hijos(){
    if (this->hijos != nullptr) {
        for (int i = 0; i<this->cantidad_hijos; i++)
            delete this->hijos[i];
        delete this->hijos;
    }
}
