#ifndef LIBRO_HPP
#define LIBRO_HPP
#define ENCICLOPEDIA 'E'
#define NOVELA 'N'
#define REVISTA 'R'

class Libro {
private:
    char *nombre;
    int paginas;
    double peso;
public:
    Libro();
    
    virtual ~Libro();
};

#endif /* LIBRO_HPP */

