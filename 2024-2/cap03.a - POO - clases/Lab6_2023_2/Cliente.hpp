#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <fstream>
#include "ProductoEntregado.hpp"
#include "Pedido.hpp"
#define DNI_VACIO -1
#define TELEFONO_VACIO -1

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
    
    void operator+=(const Pedido &pedido);
    
    bool operator==(const Pedido &pedido);
    
    friend bool operator>>(istream &archivo_de_clientes, Cliente &cliente);

    friend ostream & operator<<(ostream &out, const Cliente &cliente);
private:
    void copia_cliente(const Cliente &cliente);
};

#endif /* CLIENTE_HPP */

