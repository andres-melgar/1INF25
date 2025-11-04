#ifndef HERENCIA_INFRACCION_H
#define HERENCIA_INFRACCION_H
#include <iostream>
#define FECHA_VACIA -1

using namespace std;

class Infraccion {
private:
    int fecha_evento;
    char *tipo_infraccion;
    double monto;
    int fecha_pago_limite;
    char *placa; //check
public:
    Infraccion();

    Infraccion(const Infraccion &infraccion);

    ~Infraccion();

    void operator=(const Infraccion &infraccion);

    void leer(ifstream &arch);

    void imprimir(ofstream &arch) const;

    void set_fecha_evento(int fecha_evento);

    void set_tipo_infraccion(char *tipo_infraccion);

    void set_monto(double monto);

    void set_fecha_pago_limite(int fecha_pago_limite);

    void set_placa(char *placa);

    int get_fecha_evento();

    char *get_tipo_infraccion();

    double get_monto();

    int get_fecha_pago_limite();

    char *get_placa();
private:
    void inicializar();

    void liberar();

    void copiar(const Infraccion & infraccion);
};

#endif //HERENCIA_INFRACCION_H
