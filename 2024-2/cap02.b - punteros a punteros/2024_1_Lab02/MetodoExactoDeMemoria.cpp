#include <iostream>
#include <iomanip>
#include <fstream>
#include "MetodoExactoDeMemoria.h"
#include "libro.hpp"
#include "stock.hpp"
#include "pedidos_clientes.hpp"
#include "pedidos_libros.hpp"
#include "pedidos_atendidos.hpp"
#include "AperturaDeArchivos.h"
#define MAXIMO_POR_LINEA 80

using namespace std;

void lecturaDeLibros(const char *nombre_de_archivo, char ***&libros, int **&stock) {
    ifstream archLibros;
    AperturaDeUnArchivoDeTextosParaLeer(archLibros, nombre_de_archivo);
    
    char **libros_buffer[TAMANHO_BUFFER_LIBROS];
    int *stocks_buffer[TAMANHO_BUFFER_LIBROS];
    int i = 0;
    while (true){
        char codigo_buffer[8];
        char titulo_buffer[100];
        char autor_buffer[100];
        int stock_buffer;
        double precio_buffer;
        
        archLibros.getline(codigo_buffer, 8, ',');
        if (archLibros.eof())
            break;
        archLibros.getline(titulo_buffer, 100, ',');
        archLibros.getline(autor_buffer, 100, ',');
        archLibros>>stock_buffer;
        archLibros.get(); //sacamos la coma
        archLibros>>precio_buffer;
        //leo el cambio de línea
        char buffer[256];
        archLibros.getline(buffer, 256);
        
        incluir_libro(libros_buffer, i, codigo_buffer, titulo_buffer, autor_buffer);
        incluir_stock(stocks_buffer, i, stock_buffer, 0);
        i++;
    }
    incluir_fin_de_libro(libros_buffer, i);
    incluir_fin_de_stocks(stocks_buffer, i);
    libros = gestionar_espacio_exacto(libros_buffer, i+1);
    stock = gestionar_espacio_exacto(stocks_buffer, i+1);
    archLibros.close();
}

void pruebaDeLecturaDeLibros(const char *nombre_de_archivo, char ***libros, int **stock) {
    
}

void atencionDePedidos(const char *nombre_de_archivo, char ***libros, int **stock, int **&pedidosClientes, char ***&pedidosLibros, bool **&pedidosAtendidos) {
    ifstream archPedidos;
    AperturaDeUnArchivoDeTextosParaLeer(archPedidos, nombre_de_archivo);
    
    int *pedidos_clientes_buffer[TAMANHO_BUFFER_PEDIDOS];
    inicializar_pedidos_clientes_buffer(pedidos_clientes_buffer, TAMANHO_BUFFER_PEDIDOS);
    while (true){
        int pedido_buffer;
        int dni_buffer;
        char codigo_buffer[8];
        archPedidos>>pedido_buffer;
        
        if (archPedidos.eof())
            break;
        int c=archPedidos.get();
        archPedidos>>dni_buffer;
        
        incluir_pedidos_datos_clientes(pedidos_clientes_buffer, dni_buffer, pedido_buffer);
        
        while (true){
            int c=archPedidos.get();
            if (c=='\n' or c==13 or c==-1)
                break;
            
            archPedidos>>codigo_buffer;            
            
            c=archPedidos.get();
            if (c=='\n' or c==13 or c==-1)
                break;
            
        }
    }
    pasar_pedido_datos_cliente(pedidosClientes, pedidos_clientes_buffer);
    archPedidos.close();
}

void imprimir_linea(ofstream &archDeReporte, char c = '=') {
    
}

void reporteDeEntregaDePedidos(const char *nombre_de_archivo, int **pedidosClientes, char ***pedidosLibros,
        bool **pedidosAtendidos) {
    
}