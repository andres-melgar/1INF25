#include <iostream>
#include <fstream>
#include "AperturaDeArchivos.h"
#include "ProductoEntregado.hpp"
#include "Cliente.hpp"
#include "Producto.hpp"
#include "Pedido.hpp"
#include "Almacen.hpp"

using namespace std;

void test01();

int main(int argc, char** argv) {
    test01();    
    return 0;
}

void test01(){
    ifstream archivo_de_clientes;
    AperturaDeUnArchivoDeTextosParaLeer(archivo_de_clientes, "Clientes.csv");
    
    Cliente cliente;
    while (archivo_de_clientes >> cliente){
        cout << cliente.getDni() << " - " <<cliente.getNombre() << " - " << cliente.getTelefono() << endl;
    }
    
    archivo_de_clientes.close();
}

