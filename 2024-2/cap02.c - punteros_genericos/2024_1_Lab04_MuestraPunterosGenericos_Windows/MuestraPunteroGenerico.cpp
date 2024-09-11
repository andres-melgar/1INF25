
/* 
 * File:   MuestraPunteroGenerico.cpp
 * Author: cueva
 * 
 * Created on 22 de abril de 2024, 05:27 PM
 */
#include <iomanip>
#include <iostream>
#include "MuestraPunteroGenerico.h"
#include "AperturaDeArchivos.h"

void imprimecliente(ofstream &arch,void *clientes){
    void **reg=(void**)clientes;
    int *dni;
    char *nombre;
    dni = (int*)reg[0];
    nombre = (char*)reg[1];
    arch <<left <<setw(10) << *dni << setw(60) << nombre <<endl; 
    
}


void muestraclientes(void *clientes){
    void** lclientes=(void**)clientes;
    ofstream arch;
    AperturaDeUnArchivoDeTextosParaEscribir(arch,"pruebaclientes.txt");
    
    for(int i=0;lclientes[i]!=nullptr;i++)
        imprimecliente(arch,lclientes[i]);
    
}
void muestrafolio(ofstream &arch,void*folio){
    void **reg=(void**)folio;
    int *dni;
    char *nombre;
    
    dni = (int*)reg[0];
    nombre = (char*)reg[1];
    
    arch << left <<setw(10)<< *dni << setw(50) << nombre << endl;
    
}

void imprimereserva(ofstream &arch,void *reservas){
    void **reg=(void**)reservas,**folio;
    char *codigo,*nombre,*autor;
    int *cant;
    
    codigo = (char*)reg[0];
    nombre = (char*)reg[1];
    autor = (char*)reg[2];
    cant = (int*)reg[4];
    arch <<"Libro:"<<left <<setw(10) << codigo << setw(60) << nombre <<endl;
    arch <<"Autor:"<<left <<setw(50) << autor << endl;
    folio = (void**)reg[3];
    for(int i=0;i<*cant;i++){
        if(folio[i]!=nullptr)
            muestrafolio(arch,folio[i]);
    }
    arch << endl;
}

void muestrareservas(void *reservas){
    void **lreservas=(void**)reservas;
    ofstream arch;
    AperturaDeUnArchivoDeTextosParaEscribir(arch,"pruebareservas.txt");    
    
    for(int i=0;lreservas[i]!=nullptr;i++)
        imprimereserva(arch,lreservas[i]);    
    
}

void imprimefinal(ofstream &arch,void *reservas){
    void **reg=(void**)reservas,**folio;
    char *codigo,*nombre,*autor;
    int *cant,flag=1;;
    
    codigo = (char*)reg[0];
    nombre = (char*)reg[1];
    autor = (char*)reg[2];
    cant = (int*)reg[4];
    arch <<"Libro:"<<left <<setw(10) << codigo <<endl;
    arch <<"Nombre del Libro:"<< setw(60) << nombre <<endl;
    arch <<"Autor:"<<left <<setw(50) << autor << endl;
    folio = (void**)reg[3];
    arch << "DNI       " <<"Nombre del solicitante" <<endl; 
    arch << "------------------------------------" <<endl;
    for(int i=0;i<*cant;i++){
        if(folio[i]!=nullptr){
            muestrafolio(arch,folio[i]);
            flag=0;
        }    
    }
    if(flag==1)
        arch << "-         " <<"-         " <<endl; 
    arch << endl;
}

void reportefinal(void *reservas){
    void **lreservas=(void**)reservas;
    ofstream arch;
    AperturaDeUnArchivoDeTextosParaEscribir(arch,"ReporteFinal.txt");    
    arch << "Reporte de Libros Reservados"<<endl;
    arch << "==============================" <<endl;
    for(int i=0;lreservas[i]!=nullptr;i++)
        imprimefinal(arch,lreservas[i]);       
    
}


