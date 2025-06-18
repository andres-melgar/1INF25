#ifndef NOVELA_HPP
#define NOVELA_HPP
#include "Libro.hpp"

class Novela : public Libro {
private:
    char *autor;
public:
    Novela();
    
    ~Novela();
};

#endif /* NOVELA_HPP */

