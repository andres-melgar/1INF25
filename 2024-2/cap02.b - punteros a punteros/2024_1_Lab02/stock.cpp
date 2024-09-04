#include "stock.hpp"

void incluir_stock(int **stocks_buffer, int i, int stock_buffer, int cantidad_no_atendida){
    int *stock_bloque = new int[2];
    stock_bloque[0] = stock_buffer;
    stock_bloque[1] = cantidad_no_atendida;
    stocks_buffer[i] = stock_bloque;
}

void incluir_fin_de_stocks(int **stocks_buffer, int i){
    stocks_buffer[i] = nullptr;
}

int **gestionar_espacio_exacto(int **stocks_buffer, int cantidad){
    int **stock = new int*[cantidad];
    for(int i=0; i<cantidad; i++)
        stock[i] = stocks_buffer[i];
    return stock;
}