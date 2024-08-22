#include "Estructuras.h"
#include "libro.hpp"

bool operator>>(LibroSolicitado &libroSolicitado, Libro arregloLibro[]){
    char *codigo=libroSolicitado.codigoDelLibro;
    int i=buscar_libro(codigo, arregloLibro);
    if (i!=LIBRO_NO_ENCONTRADO){
        Libro libro=arregloLibro[i];
        if (libro.stock>0){
            libroSolicitado.precio = libro.precio;
            libroSolicitado.atendido = true;
            libro.stock--;
            arregloLibro[i]=libro; //si no hago esto el arreglo nunca se modifica
        }else{
            libroSolicitado.atendido = false;
        }
    }
    else{
        libroSolicitado.atendido = false;
    }
    return libroSolicitado.atendido;
}
