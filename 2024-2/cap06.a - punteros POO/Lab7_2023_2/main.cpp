#include "Almacen.hpp"

using namespace std;

int main(int argc, char** argv) {
    Almacen almacen;
    
    almacen.cargar_pedido();
    almacen.actualizar_pedido();
    almacen.imprimir_ordenes_venta();
    return 0;
}

