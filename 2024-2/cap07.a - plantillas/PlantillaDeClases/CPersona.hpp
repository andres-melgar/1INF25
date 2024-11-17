#ifndef CPERSONA_HPP
#define CPERSONA_HPP
#include <iostream>

using namespace std;

class CPersona{
private:
    char *paterno;
    char *materno;
    char *nombre;
public:
    CPersona();
    
    CPersona(char *paterno);
    
    CPersona(char *paterno, char *materno, char *nombre);
    
    CPersona(const CPersona &persona);
    
    ~CPersona();
    
    void imprimir();
    
    void pasar_a_mayuscula();
    
    void setPaterno(char *paterno);
    
    char *getPaterno();
    
    void setMaterno(char *materno);
    
    char *getMaterno();
    
    void setNombre(char *nombre);
    
    char *getNombre();
    
    void operator=(const CPersona &persona);
    
    friend ostream & operator<<(ostream &out, const CPersona &persona);
    
    friend void operator>>(istream &in, CPersona &persona);
private:
    void copiar_persona(const CPersona &persona);
};

#endif /* CPERSONA_HPP */

