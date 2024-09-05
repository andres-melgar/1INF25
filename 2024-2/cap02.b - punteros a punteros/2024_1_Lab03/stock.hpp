#ifndef STOCK_HPP
#define STOCK_HPP
#define TAMANHO_INCREMENTO_STOCK 10

void inicializar_stock(int **&stock, int &capacidad_stock);

void incluir_stock(int **&stock, int i, int &capacidad_stock, int stock_buffer, int cantidad_no_atendida);

void incrementar_espacio_stocks(int **&stock, int &capacidad_stock);

void incluir_fin_stock(int **&stock, int i, int &capacidad_stock);

#endif /* STOCK_HPP */

