#include "Almacen.hpp"

using namespace std;

int main(int argc, char** argv) {
    Almacen almacen;
    
    almacen.cargar_pedidos();
    almacen.actualizar_pedidos();
    almacen.imprimir_ordenes_venta();
    return 0;
}

