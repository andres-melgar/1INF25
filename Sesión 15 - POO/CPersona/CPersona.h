#ifndef CPERSONA_CPERSONA_H
#define CPERSONA_CPERSONA_H


class CPersona {
private:
    char *paterno;
    char *materno;
    char *nombre;
public:
    //constructor por defecto o constructor sin parámetros
    CPersona();

    //constructor con parámetros
    CPersona(char *paterno, char *materno, char *nombre);

    //constructor copia
    CPersona(const CPersona &persona);

    //destructor
    ~CPersona();

    void imprimir();

    void pasar_a_mayuscula();

    void setPaterno(char *paterno);

    void setMaterno(char *materno);

    void setNombre(char *nombre);

    char *getPaterno();

    char *getMaterno();

    char *getNombre();
private:
    void inicializar();

    void inicializar(char * paterno, char * materno, char * nombre);
};


#endif //CPERSONA_CPERSONA_H