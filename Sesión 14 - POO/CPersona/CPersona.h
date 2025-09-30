#ifndef CPERSONA_CPERSONA_H
#define CPERSONA_CPERSONA_H


class CPersona {
private:
    char *paterno;
    char *materno;
    char *nombre;
public:
    CPersona();

    CPersona(char *paterno, char *materno, char *nombre);

    void imprimir();

    void pasar_a_mayuscula();

    void setPaterno(char *paterno);

    void setMaterno(char *materno);

    void setNombre(char *nombre);

    char *getPaterno();

    char *getMaterno();

    char *getNombre();
};


#endif //CPERSONA_CPERSONA_H