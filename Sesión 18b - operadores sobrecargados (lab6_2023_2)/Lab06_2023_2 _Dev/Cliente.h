#ifndef LAB06_2023_2_CLIENTE_H
#define LAB06_2023_2_CLIENTE_H

#include <fstream>
#include "ProductoEntregado.h"
#include "Pedido.h"
#define DNI_VACIO -1
#define TELEFONO_VACIO -1

class Cliente {
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


#endif //LAB06_2023_2_CLIENTE_H