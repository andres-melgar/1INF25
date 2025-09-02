#include <iostream>
#include <fstream>
#include <cstring>
#include <cassert>
#include "LibreriaApertura/AperturaDeArchivos.h"
#include "Estructuras.h"
#include "libro.h"
#include "cliente.h"

using namespace std;

void test01();

void test02();

void test03();

int main() {
    test03();
    //test02();
    //test01();
    return 0;
}

void test03() {
    Libro arregloLibro[300];
    ifstream archivoLibro;
    AperturaDeUnArchivoDeTextosParaLeer(archivoLibro, "Libros.csv");
    if (not archivoLibro.is_open()) {
        cout << "No se puede aperturar el archivo Libros.csv";
        exit(10);
    }
    int i = 0;
    Libro libro;
    while (archivoLibro >> libro) {
        arregloLibro[i] = libro;
        i++;
    }
    strcpy(arregloLibro[i].codigo, "FIN");
    archivoLibro.close();

    LibroSolicitado libroSolicitado;
    strcpy(libroSolicitado.codigoDelLibro, "IIM5175");
    bool resultado = libroSolicitado >> arregloLibro;
    assert(resultado);
    assert(libroSolicitado.precio == 30.23);

    resultado = libroSolicitado >> arregloLibro;
    assert(resultado);

    resultado = libroSolicitado >> arregloLibro;
    assert(resultado==false);

    strcpy(libroSolicitado.codigoDelLibro, "ZZZZZ");
    resultado = libroSolicitado >> arregloLibro;
    assert(resultado==false);

}

void test02() {
    Cliente cliente;
    ifstream archivoCliente;
    AperturaDeUnArchivoDeTextosParaLeer(archivoCliente, "Clientes.csv");

    if (not archivoCliente.is_open()) {
        cout << "No se puede aperturar el archivo Clientes.csv";
        exit(20);
    }

    while (archivoCliente >> cliente)
        cout << cliente;

    archivoCliente.close();
}

void test01() {
    Libro libro;
    ifstream archivoLibro;
    AperturaDeUnArchivoDeTextosParaLeer(archivoLibro, "Libros.csv");
    if (not archivoLibro.is_open()) {
        cout << "No se puede aperturar el archivo Libros.csv";
        exit(10);
    }

    while (archivoLibro >> libro)
        cout << libro << endl;
    archivoLibro.close();
}
