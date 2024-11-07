#ifndef ENCICLOPEDIA_HPP
#define ENCICLOPEDIA_HPP
#include "Libro.hpp"
class Enciclopedia : public Libro {
private:
    int sku;
    int anho;
    int vigencia;
public:
    Enciclopedia();

    Enciclopedia(const Enciclopedia& orig);

    virtual ~Enciclopedia();
    
    void lee() override;
    
    void imprime() override;
    
    void actualiza() override;
private:

};

#endif /* ENCICLOPEDIA_HPP */

