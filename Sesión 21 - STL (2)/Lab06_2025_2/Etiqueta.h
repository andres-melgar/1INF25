#ifndef CODIGO_DEV_ETIQUETA_H
#define CODIGO_DEV_ETIQUETA_H
#include <iostream>

using namespace std;

class Etiqueta {
private:
    char codigo[7];
    char *nombre;
public:
    Etiqueta();

    Etiqueta(char *codigo, char *nombre);

    ~Etiqueta();

    void operator=(const Etiqueta &etiqueta);

    void set_codigo(char * codigo);

    void set_nombre(char * nombre);

    friend bool operator>>(istream &archivo_de_etiquetas, Etiqueta &etiqueta);

    friend ostream & operator<<(ostream &out, Etiqueta &etiqueta);
private:
    void inicializar();

    void liberar();

    void copiar(const Etiqueta & etiqueta);
};


#endif //CODIGO_DEV_ETIQUETA_H