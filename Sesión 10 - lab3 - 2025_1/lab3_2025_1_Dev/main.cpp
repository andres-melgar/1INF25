#include <iostream>
#include <cassert>
#include "tabla.h"
#include "comunes.h"

using namespace std;

void test01();
void test02();

int main() {
    test02();
    test01();
    return 0;
}

void test02() {
    Tabla tabla;
    inicializar_tabla(tabla);
    insertar_columna(tabla, TIPO_ENTERO);
    insertar_columna(tabla, TIPO_CADENA);
    insertar_columna(tabla, TIPO_REAL);

    void *fila = insertar_fila(tabla);
    assert(tabla.cantidad_filas == 1);
    assert(tabla.capacidad_filas == 5);
    void *dato = retornar_referencia_entero(18);
    insertar_campo(tabla, fila, 1, dato);
    dato = mi_strdup("Andrés Melgar");
    insertar_campo(tabla, fila, 2, dato);
    dato = retornar_referencia_real(19.56);
    insertar_campo(tabla, fila, 3, dato);

    fila = insertar_fila(tabla);
    assert(tabla.cantidad_filas == 2);
    assert(tabla.capacidad_filas == 5);
    dato = retornar_referencia_entero(11);
    insertar_campo(tabla, fila, 1, dato);
    dato = mi_strdup("Rony Cueva");
    insertar_campo(tabla, fila, 2, dato);
    dato = retornar_referencia_real(12.47);
    insertar_campo(tabla, fila, 3, dato);

    fila = insertar_fila(tabla);
    assert(tabla.cantidad_filas == 3);
    assert(tabla.capacidad_filas == 5);
    dato = retornar_referencia_entero(14);
    insertar_campo(tabla, fila, 1, dato);
    dato = mi_strdup("Miguel Guanira");
    insertar_campo(tabla, fila, 2, dato);
    dato = retornar_referencia_real(14.59);
    insertar_campo(tabla, fila, 3, dato);
}

void test01() {
    Tabla tabla;
    inicializar_tabla(tabla);
    assert(tabla.columnas == nullptr);
    assert(tabla.filas == nullptr);
    assert(tabla.cantidad_columnas==0);
    assert(tabla.cantidad_filas==0);
    assert(tabla.capacidad_columnas==0);
    assert(tabla.capacidad_filas==0);

    insertar_columna(tabla, TIPO_ENTERO);
    assert(tabla.columnas != nullptr);
    assert(tabla.cantidad_columnas==1);
    assert(tabla.capacidad_columnas==2);
    insertar_columna(tabla, TIPO_CADENA);
    assert(tabla.columnas != nullptr);
    assert(tabla.cantidad_columnas==2);
    assert(tabla.capacidad_columnas==2);
    insertar_columna(tabla, TIPO_REAL);
    assert(tabla.columnas != nullptr);
    assert(tabla.cantidad_columnas==3);
    assert(tabla.capacidad_columnas==4);
}