#ifndef INFRACCIONES_HPP
#define INFRACCIONES_HPP
#define MAX_BUFFER_INFRACCIONES 200
#define MAX_BUFFER_INFRACCION_DESCRIPCION 201
#define MAX_BUFFER_INFRACCION_TIPO 10

struct Infracciones {
    int *codigos;
    char **descripciones;
    char **tipos;
    double *valores;
    int cantidad;
};

void operator+=(Infracciones &infracciones, const char *nombre_de_archivo);

#endif /* INFRACCIONES_HPP */

