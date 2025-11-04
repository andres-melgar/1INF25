#ifndef CODIGO_DEV_CANAL_H
#define CODIGO_DEV_CANAL_H
#include <iostream>
#define CANAL_NO_LEIDO -1
#define MAX_VECTOR_ETIQUETAS 5

using namespace std;

class Canal {
private:
    char *nombre;
    char *categoria;
    char *etiquetas;
    int cantidad_etiquetas;
    char *vector_etiquetas[MAX_VECTOR_ETIQUETAS];
    int seguidores;
public:
    Canal();

    Canal(const Canal &canal);

    ~Canal();

    void set_nombre(char * nombre);

    void set_categoria(char * categoria);

    void set_etiquetas(char * etiquetas);

    void set_seguidores(int seguidores);

    int get_seguidores();

    void operator=(const Canal &canal);

    friend ostream & operator<<(ostream &out, Canal &canal);
private:
    void inicializar_etiquetas();

    void inicializar();

    void copias_etiquetas(const Canal & canal);

    void copiar(const Canal & canal);

    void liberar_etiquetas();

    void liberar();
};


#endif //CODIGO_DEV_CANAL_H
