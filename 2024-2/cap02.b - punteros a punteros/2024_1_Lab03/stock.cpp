#include "stock.hpp"
#include "libro.hpp"

void inicializar_stock(int **&stock, int &capacidad_stock) {
    capacidad_stock = TAMANHO_INCREMENTO_STOCK;
    stock = new int*[capacidad_stock];
    for(int i=0; i<capacidad_stock; i++)
        stock[i] = nullptr;
}

void incluir_stock(int **&stock, int i, int &capacidad_stock, int stock_buffer, int cantidad_no_atendida) {
    if (i == capacidad_stock)
        incrementar_espacio_stocks(stock, capacidad_stock);
    
    int *stock_bloque = new int[2];
    stock_bloque[0] = stock_buffer;
    stock_bloque[1] = cantidad_no_atendida;
    stock[i] = stock_bloque;
}

void incrementar_espacio_stocks(int **&stock, int &capacidad_stock) {
    int **stock_anterior = stock;
    int capacidad_stock_anterior = capacidad_stock;
    
    capacidad_stock += TAMANHO_INCREMENTO_STOCK;
    stock = new int*[capacidad_stock];
    for(int i=0; i<capacidad_stock; i++)
        if(i<capacidad_stock_anterior)
            stock[i] = stock_anterior[i];
        else
            stock[i] = nullptr;
    delete stock_anterior;
}

void incluir_fin_stock(int **&stock, int i, int &capacidad_stock) {
    if (i == capacidad_stock)
        incrementar_espacio_stocks(stock, capacidad_stock);
    stock[i] = nullptr;
}