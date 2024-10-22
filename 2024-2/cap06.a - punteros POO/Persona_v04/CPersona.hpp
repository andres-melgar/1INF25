/* 
 * Archivo: CPersona.hpp
 * Autor: Andrés Melgar
 * Fecha: 25 de septiembre de 2024, 22:38
 */

#ifndef CPERSONA_HPP
#define CPERSONA_HPP

class CPersona{
protected:
    char *paterno;
    char *materno;
    char *nombre;
public:
    CPersona();
    
    CPersona(char *paterno, char *materno, char *nombre);
    
    CPersona(const CPersona &persona);
    
    virtual ~CPersona();
    
    void imprimir();
    
    void pasar_a_mayuscula();
    
    void setPaterno(char *paterno);
    
    char *getPaterno();
    
    void setMaterno(char *materno);
    
    char *getMaterno();
    
    void setNombre(char *nombre);
    
    char *getNombre();
};

#endif /* CPERSONA_HPP */

