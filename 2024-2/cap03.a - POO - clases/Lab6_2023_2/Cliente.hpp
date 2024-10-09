#ifndef CLIENTE_HPP
#define CLIENTE_HPP

class Cliente{
private:
    int dni;
    char *nombre;
    int telefono;
    ProductoEntregado productos_entregados[200];
    int cantidad_productos_entregados;
    double monto_total;
public:
};

#endif /* CLIENTE_HPP */

