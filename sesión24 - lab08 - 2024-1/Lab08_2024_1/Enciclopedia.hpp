#ifndef ENCICLOPEDIA_HPP
#define ENCICLOPEDIA_HPP
#include <fstream>
#include "Libro.hpp"
#define SKU_INVALIDO -1
#define ANHO_INVALIDO -1

using namespace std;

class Enciclopedia : public Libro {
private:
    int sku;
    int anho;
    int vigencia;
public:
    Enciclopedia();

    void lee(ifstream &archivo_de_libros) override;

    void actualiza() override;

    void imprime() override;
};

#endif /* ENCICLOPEDIA_HPP */

