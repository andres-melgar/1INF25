/* 
 * Archivo: CFecha.hpp
 * Autor: Andrés Melgar
 * Fecha: 26 de septiembre de 2024, 08:11
 */

#ifndef CFECHA_HPP
#define CFECHA_HPP

class CFecha{
private:
    int dia;
    int mes;
    int anho;
public:
    void imprimir();
    
    bool es_bisiesto();
    
    void incrementar_dia();
    
    void setDia(int dia);
    
    int getDia();
    
    void setMes(int mes);
    
    int getMes();
    
    void setAnho(int anho);
    
    int getAnho();
    
private:
    int obtener_dias_por_mes();
};

#endif /* CFECHA_HPP */
