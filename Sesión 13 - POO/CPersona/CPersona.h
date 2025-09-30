#ifndef CPERSONA_CPERSONA_H
#define CPERSONA_CPERSONA_H


class CPersona {
private:
    char *paterno;
    char *materno;
    char *nombre;
public:
    void imprimir();

    void setPaterno(char *paterno);

    void setMaterno(char *materno);

    void setNombre(char *nombre);

    char *getPaterno();

    char *getMaterno();

    char *getNombre();
};


#endif //CPERSONA_CPERSONA_H