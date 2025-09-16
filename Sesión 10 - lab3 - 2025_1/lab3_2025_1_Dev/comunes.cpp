#include <cstring>
#include "comunes.h"

char *mi_strdup(char *cadena) {
    char *copia = new char[strlen(cadena)+1];
    strcpy(copia,cadena);
    return copia;
}

void *retornar_referencia_entero(int e) {
    int *ptrE = new int;
    *ptrE = e;
    return ptrE;
}

void *retornar_referencia_real(double r) {
    double *ptrR = new double;
    *ptrR = r;
    return ptrR;
}