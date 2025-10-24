#ifndef LISTA_V01_CLISTA_H
#define LISTA_V01_CLISTA_H

#include <ostream>
#define AL_INICIO 'I'
#define EN_ORDEN 'O'
#define AL_FINAL 'F'

using namespace std;

struct TNodo {
    double valor;
    TNodo *sig;
};

//es una lista simplemente enlazada
class CLista {
private:
    TNodo *cabeza;
    TNodo *cola;
    char tipo_de_insercion;
    int longitud;
public:
    CLista();

    CLista(char tipo_de_insercion, int cantidad, ...);

    ~CLista();

    void insertar(double valor);

    double eliminarCabeza();

    ostream & imprimir(ostream &out);

    void destruir();

    virtual bool estaVacia(); //significa que si lo desea la clase derivada lo puede sobreescribir

    double getElementoPorIndice(int indice);

    virtual int getLongitud() const;

    friend ostream & operator<<(ostream &out, CLista &lista);

private:
    void insertar_al_inicio(double valor);

    void insertar_en_orden(double valor);

    void insertar_al_final(double valor);

    void setTipo_de_insercion(char tipo_de_insercion);
};

#endif //LISTA_V01_CLISTA_H