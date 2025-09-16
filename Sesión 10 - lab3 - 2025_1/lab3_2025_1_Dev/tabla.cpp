#include "tabla.h"

#include <cstring>

#include "comunes.h"

void inicializar_tabla(Tabla &tabla) {
    tabla.columnas = nullptr;
    tabla.filas = nullptr;
    tabla.capacidad_columnas = 0;
    tabla.capacidad_filas = 0;
    tabla.cantidad_columnas = 0;
    tabla.cantidad_filas = 0;
}

//la gestión del puntero void
void insertar_columna(Tabla &tabla, char *nombre_tipo) {
    tabla.cantidad_columnas++;
    //asumo que esta función asigna el espacio de memoria en caso falta
    verificar_capacidad_columnas(tabla);
    void **bloque_columnas = (void**)tabla.columnas;
    bloque_columnas[tabla.cantidad_columnas-1] = mi_strdup(nombre_tipo);
}

//la gestión de la memoria
void verificar_capacidad_columnas(Tabla & tabla) {
    if (tabla.cantidad_columnas > tabla.capacidad_columnas) {
        void **columnas_anterior = (void**)tabla.columnas;
        int capacidad_anterior = tabla.capacidad_columnas;
        tabla.capacidad_columnas += INCREMENTO_COLUMNAS;
        void **columnas_nuevo = new void*[tabla.capacidad_columnas];
        for (int i = 0; i < tabla.capacidad_columnas; i++) {
            if (i<capacidad_anterior)
                columnas_nuevo[i] = columnas_anterior[i];
            else
                columnas_nuevo[i] = nullptr;
        }
        tabla.columnas = columnas_nuevo;
        delete [] columnas_anterior;
    }
}

void *insertar_fila(Tabla & tabla) {
    tabla.cantidad_filas++;
    verificar_capacidad_filas(tabla);
    void ***bloque_filas = (void***)tabla.filas;
    void **fila = new void*[tabla.cantidad_columnas];
    for (int i = 0; i < tabla.cantidad_columnas; i++) {
        fila[i] = nullptr;
    }
    bloque_filas[tabla.cantidad_filas-1] = fila;
    return fila;
}

void verificar_capacidad_filas(Tabla & tabla) {
    if (tabla.cantidad_filas > tabla.capacidad_filas) {
        int capacidad_anterior = tabla.capacidad_filas;
        void ***filas_anterior = (void***)tabla.filas;
        tabla.capacidad_filas += INCREMENTO_FILAS;
        void ***filas_nuevo = new void**[tabla.capacidad_filas];
        for (int i = 0; i < tabla.capacidad_filas; i++) {
            if (i<capacidad_anterior)
                filas_nuevo[i] = filas_anterior[i];
            else
                filas_nuevo[i] = nullptr;
        }
        tabla.filas = filas_nuevo;
        delete [] filas_anterior;
    }
}

void insertar_campo(const Tabla & tabla, void * fila, int num_campo, void * dato) {
    void **bloque_fila = (void**)fila;
    void **bloque_columnas = (void**)tabla.columnas;
    char *campo = (char*)bloque_columnas[num_campo-1];
    void *clone_de_dato;
    if (strcmp(campo, TIPO_ENTERO) == 0) {
        clone_de_dato = retornar_referencia_entero(*(int*)dato);
    } else if (strcmp(campo, TIPO_CADENA) == 0) {
        clone_de_dato = mi_strdup((char*)dato);
    } else {
        clone_de_dato = retornar_referencia_real(*(double*)dato);
    }
    bloque_fila[num_campo-1] = clone_de_dato;
}

void *abrir_cursor(Tabla tabla) {
    if (tabla.cantidad_filas == 0)
        return nullptr;
    return tabla.filas;
}

bool hay_siguiente(void *&cursor) {
    static bool primera_llamada = true;
    if (cursor == nullptr)
        return false;
    void ***bloque_filas = (void***)cursor;
    if (primera_llamada) {
        primera_llamada = false;
    } else {
        bloque_filas++;
    }
    cursor = bloque_filas;
    if (*bloque_filas == nullptr)
        return false;
    return true;
}

void *obtener_campo(void *cursor, int num_campo) {
    void ***bloque_filas = (void***)cursor;
    void **bloque_fila = *bloque_filas;
    return bloque_fila[num_campo-1];
}