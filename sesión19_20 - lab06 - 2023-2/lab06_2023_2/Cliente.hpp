#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include "ProductoEntregado.hpp"
#define MAX_PRODUCTOS_ENTREGADOS 200
#define DNI_VACIO -1
#define TELEFONO_VACIO -1

class Cliente{
private:
    int dni;
    char *nombre;
    int telefono;
    ProductoEntregado productos_entregados[MAX_PRODUCTOS_ENTREGADOS];
    int cantidad_productos_entregados;
    double monto_total;
public:
    Cliente();
    
    Cliente(int dni, char *nombre, int telefono);
    
    Cliente(const Cliente &cliente);
    
    ~Cliente();
    
    void operator=(const Cliente &cliente);

private:
    void copia_cliente(const Cliente &cliente);
    
    void libera_cliente();
};

#endif /* CLIENTE_HPP */

