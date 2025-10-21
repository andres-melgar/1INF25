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

class CLista {
private:
    TNodo *cabeza;
    TNodo *cola; //usado únicamente para optimizar la inserción al final
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

    bool estaVacia();

    double getElementoPorIndice(int indice);

    int getLongitud() const;

    friend ostream & operator<<(ostream &out, CLista &lista);

private:
    void insertar_al_inicio(double valor);

    void insertar_en_orden(double valor);

    void insertar_al_final(double valor);

    void setTipo_de_insercion(char tipo_de_insercion);
};

#endif //LISTA_V01_CLISTA_H