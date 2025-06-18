#ifndef NOVELA_HPP
#define NOVELA_HPP
#include <fstream>
#include "Libro.hpp"

using namespace std;

class Novela : public Libro {
private:
    char *autor;
public:
    Novela();

    ~Novela();

    void lee(ifstream &archivo_de_libros) override;

    void actualiza() override;

    void imprime() override;
};

#endif /* NOVELA_HPP */

