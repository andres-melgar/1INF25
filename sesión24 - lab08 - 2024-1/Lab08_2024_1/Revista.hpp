#ifndef REVISTA_HPP
#define REVISTA_HPP
#include "Libro.hpp"
#define ISSN_INVALIDO -1
#define ANHO_INVALIDO -1
#define NUMERO_INVALIDO -1

class Revista : public Libro {
private:
    int issn;
    int anho;
    int numero;
    int vigencia;
public:
    Revista();
};

#endif /* REVISTA_HPP */

