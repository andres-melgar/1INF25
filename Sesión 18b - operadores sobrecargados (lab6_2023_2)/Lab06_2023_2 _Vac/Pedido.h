#ifndef LAB06_2023_2_PEDIDO_H
#define LAB06_2023_2_PEDIDO_H


class Pedido {
private:
    char *codigo;
    int dni_cliente;
    double precio_producto;
public:
    Pedido();

    Pedido(char *codigo, int dni_cliente, double precio_producto);

    ~Pedido();

    void SetPrecio_producto(double precio_producto);

    double GetPrecio_producto() const;

    void SetDni_cliente(int dni_cliente);

    int GetDni_cliente() const;

    void SetCodigo(char* codigo);

    char* GetCodigo() const;
};


#endif //LAB06_2023_2_PEDIDO_H