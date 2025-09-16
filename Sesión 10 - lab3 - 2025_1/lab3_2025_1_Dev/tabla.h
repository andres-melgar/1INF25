#ifndef LAB3_2025_1_DEV_TABLA_H
#define LAB3_2025_1_DEV_TABLA_H
#define TIPO_ENTERO "INT"
#define TIPO_CADENA "VARCHAR"
#define TIPO_REAL "DOUBLE"
#define INCREMENTO_COLUMNAS 2
#define INCREMENTO_FILAS 5

struct Tabla{
    void *columnas;
    void *filas;
    int cantidad_columnas;
    int cantidad_filas;
    int capacidad_columnas;
    int capacidad_filas;
};

void inicializar_tabla(Tabla &tabla);

void insertar_columna(Tabla &tabla, char *nombre_tipo);

void verificar_capacidad_columnas(Tabla & tabla);

void *insertar_fila(Tabla & tabla);

void verificar_capacidad_filas(Tabla & tabla);

void insertar_campo(const Tabla & tabla, void * fila, int i, void * dato);

void *abrir_cursor(Tabla tabla);

bool hay_siguiente(void *&cursor);

void *obtener_campo(void *cursor, int num_campo);

#endif //LAB3_2025_1_DEV_TABLA_H