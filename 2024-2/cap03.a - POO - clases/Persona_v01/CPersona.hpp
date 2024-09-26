/* 
 * Archivo: CPersona.hpp
 * Autor: Andrés Melgar
 * Fecha: 26 de septiembre de 2024, 08:37
 */

#ifndef CPERSONA_HPP
#define CPERSONA_HPP

class CPersona{
private:
    char *paterno;
    char *materno;
    char *nombre;
public:
    void imprimir();
    
    void setPaterno(char *paterno);
    
    char *getPaterno();
    
    void setMaterno(char *materno);
    
    char *getMaterno();
    
    void setNombre(char *nombre);
    
    char *getNombre();
};

#endif /* CPERSONA_HPP */

