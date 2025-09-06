#ifndef CONDUCTORES_HPP
#define CONDUCTORES_HPP
#define MAX_BUFFER_CONDUCTORES 200
#define MAX_BUFFER_NOMBRES 41
#define CONDUCTOR_NO_ENCONTRADO -1

struct Conductores {
    int *dnis;
    char **nombres;
    int cantidad;
};

void operator+=(Conductores &conductores, const char *nombre_de_archivo);

int retornar_indice_del_conductor(const Conductores &conductores, int dni);

#endif /* CONDUCTORES_HPP */

