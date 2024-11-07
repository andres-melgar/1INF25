#ifndef REVISTA_HPP
#define REVISTA_HPP
#include "Libro.hpp"

class Revista: public Libro {
private:
    int ISSN;
    int anho;
    int numero;
    int vigencia;
public:
    Revista();
    
    Revista(const Revista& orig);
    
    virtual ~Revista();
    
    void lee() override;
    
    void imprime() override;
    
    void actualiza() override;
private:

};

#endif /* REVISTA_HPP */

