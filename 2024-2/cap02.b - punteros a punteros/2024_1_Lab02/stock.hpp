#ifndef STOCK_HPP
#define STOCK_HPP

void incluir_stock(int **stocks_buffer, int i, int stock_buffer, int cantidad_no_atendida);

void incluir_fin_de_stocks(int **stocks_buffer, int i);

int **gestionar_espacio_exacto(int **stocks_buffer, int cantidad);

#endif /* STOCK_HPP */

