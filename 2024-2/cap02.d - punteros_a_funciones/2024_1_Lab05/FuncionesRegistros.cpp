#include <iostream>
#include <fstream>
#include "FuncionesRegistros.hpp"
#include "Comunes.hpp"

using namespace std;

void *leeregistro(ifstream &archivo_de_registro) {
    int pedido_buffer, dni_buffer;
    char codigo_buffer[8];
    archivo_de_registro>>pedido_buffer;
    if (archivo_de_registro.eof())
        return nullptr;
    archivo_de_registro.get();
    archivo_de_registro>>dni_buffer;
    archivo_de_registro.get();
    archivo_de_registro.getline(codigo_buffer, 8);

    void **bloque_registro = new void*[3];
    bloque_registro[0] = retorna_referencia_a_entero(pedido_buffer);
    bloque_registro[1] = retorna_referencia_a_entero(dni_buffer);
    bloque_registro[2] = mi_strdup(codigo_buffer);
    return bloque_registro;
}

void imprimeregistro(ofstream &archivo_de_registro, void *ptrRegistro) {
    void **bloque_registro = (void **) ptrRegistro;
    if (bloque_registro != nullptr) {
        int *pedido = (int*) bloque_registro[0];
        int *dni = (int*) bloque_registro[1];
        char *codigo = (char*) bloque_registro[2];

        archivo_de_registro << *pedido << " - " << *dni << " - " << codigo << endl;
    }
}

bool cmpregistro(void *ptrRegistroA, void *ptrRegistroB) {
    void **bloque_registroA = (void**) ptrRegistroA;
    void **bloque_registroB = (void**) ptrRegistroB;
    int pedidoA = *(int*) bloque_registroA[0];
    int pedidoB = *(int*) bloque_registroB[0];
    return pedidoA < pedidoB;
}