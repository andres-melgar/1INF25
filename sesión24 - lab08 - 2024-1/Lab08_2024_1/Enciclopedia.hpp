#ifndef ENCICLOPEDIA_HPP
#define ENCICLOPEDIA_HPP
#include "Libro.hpp"
#define SKU_INVALIDO -1
#define ANHO_INVALIDO -1

class Enciclopedia : public Libro {
private:
    int sku;
    int anho;
    int vigencia;
public:
    Enciclopedia();    
};

#endif /* ENCICLOPEDIA_HPP */

