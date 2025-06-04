#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <fstream>
#include "ProductoEntregado.hpp"
#include "Pedido.hpp"
#define MAX_PRODUCTOS_ENTREGADOS 200
#define DNI_VACIO -1
#define TELEFONO_VACIO -1

using namespace std;

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
    
    void operator+=(const Pedido &pedido);
    
    //OJO: operator>> no es un método, es una función
    friend bool operator>>(istream &archivo_de_clientes, Cliente &cliente);
    
    friend ostream & operator<<(ostream &out, const Cliente &cliente);
    
    void setMonto_total(double monto_total);
    
    double getMonto_total() const;
    
    void setTelefono(int telefono);
    
    int getTelefono() const;
    
    void setNombre(char* nombre);
    
    char* getNombre() const;
    
    void setDni(int dni);
    
    int getDni() const;

private:
    void copia_cliente(const Cliente &cliente);
    
    void libera_cliente();
};

#endif /* CLIENTE_HPP */

