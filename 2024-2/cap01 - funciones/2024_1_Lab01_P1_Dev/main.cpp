#include <iostream>
#include <fstream>
#include "Estructuras.h"
#include "AperturaDeArchivos.h"
#include "libro.hpp"
#include "cliente.hpp"

using namespace std;

void test01();
void test02();

int main(int argc, char** argv) {
    //test01();
    test02();
    return 0;
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