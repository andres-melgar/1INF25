#include <fstream>
#include <iomanip>
#include "Producto.hpp"
#include "Pedido.hpp"
#include "Comunes.hpp"

using namespace std;

Producto::Producto() {
    this->codigo = nullptr;
    this->descripcion = nullptr;
    this->precio = 0;
    this->stock = 0;
    this->cantidad_clientes_servidos = 0;
    this->cantidad_clientes_no_servidos = 0;
}

Producto::Producto(char *codigo, char *descripcion, double precio, int stock) {
    this->codigo = mi_strdup(codigo);
    this->descripcion = mi_strdup(descripcion);
    this->precio = precio;
    this->stock = stock;
    this->cantidad_clientes_servidos = 0;
    this->cantidad_clientes_no_servidos = 0;
}

Producto::Producto(const Producto &producto) {
    this->copia_producto(producto);
}

Producto::~Producto() {
    this->liberar_producto();
}

void Producto::operator=(const Producto &producto) {
    this->liberar_producto();
    this->copia_producto(producto);
}

bool Producto::operator+=(Pedido &pedido){
    bool se_pudo_atender = true;
    if (this->stock > 0){
        this->cantidad_clientes_servidos++;
        this->clientes_servidos[this->cantidad_clientes_servidos-1] = pedido.GetDni_cliente();
        this->stock--;
    } else {
        this->cantidad_clientes_no_servidos++;
        this->clientes_no_servidos[this->cantidad_clientes_no_servidos-1] = pedido.GetDni_cliente();
        se_pudo_atender = false;    
    }
    pedido.SetPrecio_producto(this->precio);
    return se_pudo_atender;
}

void Producto::setStock(int stock) {
    this->stock = stock;
}

int Producto::getStock() const {
    return stock;
}

void Producto::setPrecio(double precio) {
    this->precio = precio;
}

double Producto::getPrecio() const {
    return precio;
}

void Producto::setDescripcion(char* descripcion) {
    libera_cadena(this->descripcion);
    this->descripcion = mi_strdup(descripcion);
}

char* Producto::getDescripcion() const {
    return mi_strdup(descripcion);
}

void Producto::setCodigo(char* codigo) {
    libera_cadena(this->codigo);
    this->codigo = mi_strdup(codigo);
}

char* Producto::getCodigo() const {
    return mi_strdup(this->codigo);
}

void Producto::liberar_producto(){
    libera_cadena(this->codigo);
    libera_cadena(this->descripcion);
}

void Producto::copia_producto(const Producto &producto){
    this->codigo = mi_strdup(producto.codigo);
    this->descripcion = mi_strdup(producto.descripcion);
    this->precio = producto.precio;
    this->stock = producto.stock;
    this->cantidad_clientes_servidos = producto.cantidad_clientes_servidos;
    this->cantidad_clientes_no_servidos = producto.cantidad_clientes_no_servidos;
    
    for(int i=0; i<this->cantidad_clientes_servidos; i++)
        this->clientes_servidos[i] = producto.clientes_servidos[i];
    for(int i=0; i<this->cantidad_clientes_no_servidos; i++)
        this->clientes_no_servidos[i] = producto.clientes_no_servidos[i];
}

bool operator>>(ifstream &archivo_de_producto, Producto &producto){
    char codigo_buffer[8];
    char descripcion_buffer[100];
    double precio_buffer;
    int stock_buffer;
    
    archivo_de_producto.getline(codigo_buffer, 8, ',');
    if (archivo_de_producto.eof())
        return false;
    archivo_de_producto.getline(descripcion_buffer, 100, ',');
    archivo_de_producto>>precio_buffer;
    archivo_de_producto.get(); //sacamos la coma
    archivo_de_producto>>stock_buffer;
    
    //cambio de línea
    char buffer[255];
    archivo_de_producto.getline(buffer, 255);
    
    Producto producto_local(codigo_buffer, descripcion_buffer, precio_buffer, stock_buffer);
    producto = producto_local;
    return true;
}

ostream & operator<<(ostream & out, const Producto &producto){
    out << setw(10) << producto.codigo;
    out << left << setw(30) << producto.descripcion;
    out << setw(8) << producto.precio;
    out << setw(5) << producto.stock;
    out << endl;
    out << "Clientes atendidos: " <<endl;
    if (producto.clientes_servidos ==0)
        out << "NO SE ATENDIERON PEDIDO";
    else{
        for (int i=0; i< producto.cantidad_clientes_servidos; i++)
            out << producto.clientes_servidos[i] << " ";
    }
    out << endl;
    out << "Clientes no atendidos: " <<endl;
    if (producto.clientes_no_servidos ==0)
        out << "NO HAY CLIENTES SIN ATENDER";
    else{
        for (int i=0; i< producto.cantidad_clientes_no_servidos; i++)
            out << producto.clientes_no_servidos[i] << " ";
    }
    out << endl;
    return out;
}