#include <cstdlib>
#include "Almacen.hpp"
#include "AperturaDeArchivos.h"
using namespace std;

void test01();

int main(int argc, char** argv) {
    test01();
    //Almacen almacen;
    return 0;
}

void test01(){
    ifstream archivo_de_clientes;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_clientes, "Clientes.csv");
    
    Cliente cliente;
    while (archivo_de_clientes >> cliente){
        
    }
    archivo_de_clientes.close();
}