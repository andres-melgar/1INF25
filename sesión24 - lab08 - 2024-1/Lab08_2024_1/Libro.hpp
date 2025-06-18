#ifndef LIBRO_HPP
#define LIBRO_HPP
#include <fstream>
#define ENCICLOPEDIA 'E'
#define NOVELA 'N'
#define REVISTA 'R'

using namespace std;

class Libro {
private:
    char *nombre;
    int paginas;
    double peso;
public:
    Libro();
    
    virtual ~Libro();
    
    virtual void lee(ifstream &archivo_de_libros);
    
    /* actualiza() = 0, significa que el método es un método virtual puro
     * entonces:
     *      1: No posee implementación en la clase base (Libro)
     *      2: Debe poseer implementación en las clases derivadas (Enciclopedia, Novela, Revista)
     *      3: Configura una clase abstracta, es decir no pueden haber instancias de la
     *         clase base (Libro)
     */
    virtual void actualiza() = 0;
    
    virtual void imprime();
};

#endif /* LIBRO_HPP */

