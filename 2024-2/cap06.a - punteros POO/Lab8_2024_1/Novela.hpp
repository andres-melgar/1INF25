#ifndef NOVELA_HPP
#define NOVELA_HPP
#include "Libro.hpp"

class Novela: public Libro {
private:
    char *autor;
public:
    Novela();
    
    Novela(const Novela& orig);
    
    virtual ~Novela();
    
    void lee() override;
    
    void imprime() override;
    
    void actualiza() override;
private:

};

#endif /* NOVELA_HPP */

