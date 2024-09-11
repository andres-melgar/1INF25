#include "PunterosGenericos.h"
#include "MuestraPunteroGenerico.h"

//using namespace std;

int main(int argc, char** argv) {
    void *clientes, *reserva;

    cargaclientes(clientes);
    creareserva(reserva);
    cargareservar(clientes, reserva);
    reportefinal(reserva);
    return 0;
}


