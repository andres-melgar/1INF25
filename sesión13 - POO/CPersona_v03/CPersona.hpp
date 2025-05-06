#ifndef CPERSONA_HPP
#define CPERSONA_HPP

class CPersona{
private:
    char *paterno;
    char *materno;
    char *nombre;
public:
    CPersona();
    
    CPersona(char *paterno, char *materno, char *nombre);
    
    CPersona(const CPersona &persona);
    
    ~CPersona();
    
    void imprimir();
    
    void pasar_a_mayuscula();
    
    void setPaterno(char *paterno);
    
    void setMaterno(char *materno);
    
    void setNombre(char *nombre);
    
    char *getPaterno();
    
    char *getMaterno();
    
    char *getNombre();
};

#endif /* CPERSONA_HPP */

