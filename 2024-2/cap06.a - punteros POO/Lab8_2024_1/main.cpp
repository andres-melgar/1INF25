#include "Biblioteca.hpp"
using namespace std;

int main(int argc, char** argv) {
    Biblioteca biblioteca;
    
    biblioteca.carga();
    biblioteca.llena();
    biblioteca.baja();
    biblioteca.muestra();
    return 0;
}

