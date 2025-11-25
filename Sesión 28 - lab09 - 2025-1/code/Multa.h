
#ifndef CODE_MULTA_H
#define CODE_MULTA_H


class Multa {
private:
    int fecha;
    char *placa;
    char *codMulta;
    double multa;
    bool pagada;
    int fechaDePago;
public:
    //TODO
    //constructores
    //destructor
    //métodos selectores
    char * getPlaca();
};


#endif //CODE_MULTA_H