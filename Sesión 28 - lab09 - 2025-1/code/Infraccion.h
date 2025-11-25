#ifndef CODE_INFRACCION_H
#define CODE_INFRACCION_H

class Infraccion {
private:
    char *codigo;
    double multa;
    char *gravedad;
    char *descripcion;
public:
    //TODO
    //constructores
    //destructor
    //métodos selectores

    bool operator<(const Infraccion &infraccion);
};


#endif //CODE_INFRACCION_H