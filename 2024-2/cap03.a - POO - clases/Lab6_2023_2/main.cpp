#include "Almacen.hpp"

using namespace std;

void test01();

int main(int argc, char** argv) {    
    Almacen almacen;
    
    almacen.cargar_clientes();
    almacen.cargar_productos();
    almacen.cargar_pedidos();
    almacen.mostrar_datos();
    return 0;
}
