#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <fstream>
#include "ProductoEntregado.hpp"

using namespace std;

class Cliente{
private:
    int dni;
    char *nombre;
    int telefono;
    ProductoEntregado productos_entregados[200];
    int cantidad_productos_entregados;
    double monto_total;
public:
    Cliente();
    
    Cliente(int dni, char *nombre, int telefono);
    
    Cliente(const Cliente &cliente);
    
    ~Cliente();
    
    void operator=(const Cliente &cliente);
    
    friend bool operator>>(istream &archivo_de_clientes, Cliente &cliente);

private:
    void copia_cliente(const Cliente &cliente);
};

#endif /* CLIENTE_HPP */

