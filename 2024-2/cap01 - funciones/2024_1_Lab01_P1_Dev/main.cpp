#include <iostream>
#include <fstream>
#include <cstring>
#include <assert.h>
#include "Estructuras.h"
#include "AperturaDeArchivos.h"
#include "libro.hpp"
#include "cliente.hpp"
#include "libro_solicitado.hpp"
using namespace std;

void test01();
void test02();
void test03();

int main(int argc, char** argv) {
    //test01();
    //test02();
    test03();
    return 0;
}

void test03(){
    Libro libro;
    Libro arregloLibro[300];
    ifstream archLibro;
    
    AperturaDeUnArchivoDeTextosParaLeer(archLibro, "Libros.csv");
    if (not archLibro.is_open()){
        cout<<"No se puede abrir el archivo Libros.csv";
        exit(10);
    }
    int i=0;
    while(archLibro>>libro){
        arregloLibro[i]=libro;
        i++;
    }
    strcpy(arregloLibro[i].codigo, "FIN");
    
    LibroSolicitado libroSolicitado; 
    strcpy(libroSolicitado.codigoDelLibro, "IIM5175");
    bool resultado=libroSolicitado>>arregloLibro;
    assert(resultado);
    assert(libroSolicitado.precio==30.23);
    archLibro.close();
}

void test02(){
    Cliente cliente;
    ifstream archCliente;
    
    AperturaDeUnArchivoDeTextosParaLeer(archCliente, "Clientes.csv");
    if (not archCliente.is_open()){
        cout<<"No se puede abrir el archivo Clientes.csv";
        exit(10);
    }
    while(archCliente>>cliente){
        cout<<cliente.nombre<<endl;
    }    
    archCliente.close();
}

void test01(){
    Libro libro;
    ifstream archLibro;
    
    AperturaDeUnArchivoDeTextosParaLeer(archLibro, "Libros.csv");
    if (not archLibro.is_open()){
        cout<<"No se puede abrir el archivo Libros.csv";
        exit(10);
    }
    while(archLibro>>libro){
        cout<<libro.titulo<<endl;
    }
    
    archLibro.close();
}