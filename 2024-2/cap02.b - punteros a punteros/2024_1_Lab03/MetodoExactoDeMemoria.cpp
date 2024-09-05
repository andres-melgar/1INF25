#include "MetodoExactoDeMemoria.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>
#include "libro.hpp"
#include "stock.hpp"
#include "pedidos_clientes.hpp"
#include "pedidos_libros.hpp"
#include "pedidos_atendidos.hpp"
#include "AperturaDeArchivos.h"
#define MAXIMO_POR_LINEA 80

using namespace std;

void lecturaDeLibros(char const *nombre_de_archivo, char ***&libros, int **&stock) {
    ifstream archLibros;
    AperturaDeUnArchivoDeTextosParaLeer(archLibros, nombre_de_archivo);
    
    int capacidad_libros, capacidad_stock, i=0;
    inicializar_libros(libros, capacidad_libros);
    inicializar_stock(stock, capacidad_stock);
    while (true) {
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
        //leemos el cambio de línea
        char buffer[256];
        archLibros.getline(buffer, 255);     
        
        incluir_libro(libros, i, capacidad_libros, codigo_buffer, titulo_buffer, autor_buffer);
        incluir_stock(stock, i, capacidad_stock, stock_buffer, 0);
        i++;
    }
    incluir_fin_libro(libros, i, capacidad_libros);
    incluir_fin_stock(stock, i, capacidad_stock);
    archLibros.close();
}

void pruebaDeLecturaDeLibros(char const *nombre_de_archivo, char ***libros, int **stock) {
    ofstream archDePrueba;
    AperturaDeUnArchivoDeTextosParaEscribir(archDePrueba, nombre_de_archivo);

    archDePrueba << left << setw(10) << "Código";
    archDePrueba << left << setw(50) << "Título";
    archDePrueba << left << setw(50) << "Autor";
    archDePrueba << right << setw(4) << "Stock";
    archDePrueba << right << setw(4) << "Cant. no atendida";
    archDePrueba << endl;

    while (*libros != nullptr) {
        char *codigo = (*libros)[0];
        char *titulo = (*libros)[1];
        char *autor = (*libros)[2];
        int stock_inicial = (*stock)[0];
        int cantidad_no_atentidad = (*stock)[1];

        archDePrueba << left << setw(10) << codigo;
        archDePrueba << left << setw(50) << titulo;
        archDePrueba << left << setw(50) << autor;
        archDePrueba << right << setw(4) << stock_inicial;
        archDePrueba << right << setw(4) << cantidad_no_atentidad;
        archDePrueba << endl;
        libros++;
        stock++;
    }
    archDePrueba.close();
}

void atencionDePedidos(char const *nombre_de_archivo, char ***libros, int **stock, int **&pedidosClientes, char ***&pedidosLibros, bool **&pedidosAtendidos) {
    ifstream archPedidos;
    AperturaDeUnArchivoDeTextosParaLeer(archPedidos, nombre_de_archivo);
    
    int capacidad_pedidos_libros;
    inicializar_pedidos_libros(pedidosLibros, capacidad_pedidos_libros);
    while (true) {
        int pedido_buffer;
        int dni_buffer;
        char codigo_buffer[8];

        archPedidos>>pedido_buffer;

        if (archPedidos.eof())
            break;
        int c = archPedidos.get(); //sacamos el cambio de línea      
        archPedidos>>dni_buffer;
        
        while (true) {
            //Este primer código es porque existe un pedido sin libros.
            c = archPedidos.get();
            if (c == '\n' or c == 13 or c == -1)
                break;

            archPedidos >> codigo_buffer;
            incluir_pedido_datos_libros(pedidosLibros, capacidad_pedidos_libros, pedido_buffer, codigo_buffer);
            
            c = archPedidos.get();
            if (c == '\n' or c == 13 or c == -1)
                break;
        }                
    }
    archPedidos.close();
}

void ordenarPedidosClientes(int **pedidosClientes) {
    int izq=0, der=indice_ultimo_cliente(pedidosClientes);
    quick_sort(pedidosClientes, izq, der);
}

void imprimir_linea(ofstream &archDeReporte, char c = '=') {
    for (int i = 0; i < MAXIMO_POR_LINEA; i++)
        archDeReporte << c;
    archDeReporte << endl;
}

void reporteDeEntregaDePedidos(char const *nombre_de_archivo, int **pedidosClientes, char ***&pedidosLibros,
        bool **pedidosAtendidos) {
    ofstream archDeReporte;
    AperturaDeUnArchivoDeTextosParaEscribir(archDeReporte, nombre_de_archivo);

    archDeReporte << "REPORTE TOP 5" << endl;
    archDeReporte << "ATENCION DE PEDIDOS" << endl;
    //1. recorrido de clientes
    int contador_cliente=0;
    while (*pedidosClientes) {
        imprimir_linea(archDeReporte, '=');
        archDeReporte << "CLIENTE: " << (*pedidosClientes)[0] << endl;
        imprimir_linea(archDeReporte, '=');

        //2. recorrido de pedidos
        int cantidad_de_pedidos = (*pedidosClientes)[1];
        for (int i = 0; i < cantidad_de_pedidos; i++) {
            archDeReporte << setw(20) << "Pedido No.";
            archDeReporte << setw(30) << "Codigo del libro.";
            archDeReporte << setw(30) << "Observacion." << endl;
            imprimir_linea(archDeReporte, '-');

            //3. inicio. recorrido de los libros del pedido            
            int numero_de_pedido = (*pedidosClientes)[2 + i];
            char **bloque_codigo_libros = pedidosLibros[numero_de_pedido];
            //4. en paralelo se recorren los pedidos atendidos
            bool *bloque_pedido_atendido = pedidosAtendidos[numero_de_pedido];

            if (bloque_codigo_libros) {
                int k = 0;
                while (bloque_codigo_libros[k] != nullptr) {
                    if (k == 0) {
                        archDeReporte << setw(10) << ' ';
                        archDeReporte << setfill('0') << setw(6) << numero_de_pedido << setfill(' ');
                    } else
                        archDeReporte << setw(16) << ' ';
                    archDeReporte << setw(30) << bloque_codigo_libros[k];
                    if (bloque_pedido_atendido[k])
                        archDeReporte << setw(30) << "ATENDIDO";
                    else
                        archDeReporte << setw(30) << "NO ATENDIDO";
                    archDeReporte << endl;
                    k++;
                }
            } else {
                archDeReporte << setw(10) << ' ';
                archDeReporte << setfill('0') << setw(6) << numero_de_pedido << setfill(' ') << endl;
            }

            //3. fin
            if (i != cantidad_de_pedidos - 1)
                imprimir_linea(archDeReporte, '-');
        }
        pedidosClientes++;
        contador_cliente++;
        if (contador_cliente==5)
            break;
    }
    archDeReporte.close();
}