#ifndef LIBRO_HPP
#define LIBRO_HPP

class Libro {
private:
    char *nombre;
    int paginas;
    double peso;
public:
    Libro();
    
    Libro(const Libro& orig);
    
    virtual ~Libro();
    
    virtual void lee();
    
    virtual void imprime();
    
    virtual void actualiza() = 0;
    
    double getPeso() const;
private:

};

#endif /* LIBRO_HPP */

