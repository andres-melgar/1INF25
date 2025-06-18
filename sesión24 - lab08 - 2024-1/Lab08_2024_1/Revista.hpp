#ifndef REVISTA_HPP
#define REVISTA_HPP
#include <fstream>
#include "Libro.hpp"
#define ISSN_INVALIDO -1
#define ANHO_INVALIDO -1
#define NUMERO_INVALIDO -1

using namespace std;

class Revista : public Libro {
private:
    int issn;
    int anho;
    int numero;
    int vigencia;
public:
    Revista();

    void lee(ifstream &archivo_de_libros) override;

    void actualiza() override;

    void imprime() override;
};

#endif /* REVISTA_HPP */

