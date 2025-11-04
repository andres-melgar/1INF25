#ifndef CODIGO_DEV_CATEGORIA_H
#define CODIGO_DEV_CATEGORIA_H
#include <iostream>

using namespace std;

class Categoria {
private:
    char codigo[7];
    char *nombre;
    char *descripcion;
public:
    Categoria();

    ~Categoria();

    void operator=(const Categoria &categoria);

    void set_codigo(char * codigo);

    void set_nombre(char * nombre);

    void set_descripcion(char * descripcion);

    friend bool operator>>(istream &archivo_de_categorias, Categoria &categoria);

    friend ostream & operator<<(ostream &out, Categoria &categoria);

private:
    void inicializar();

    void liberar();

    void copiar(const Categoria & categoria);
};


#endif //CODIGO_DEV_CATEGORIA_H
