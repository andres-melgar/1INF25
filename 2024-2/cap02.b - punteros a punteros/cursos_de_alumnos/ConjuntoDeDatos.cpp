#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include "ConjuntoDeDatos.hpp"

using namespace std;

void cargar_conjunto_de_alumnos_y_cursos(ConjuntoAlumnoYCursos &conjuntoAlumnoYCursos, const char *nombre_archivo){
    ifstream archivo(nombre_archivo, ios::in);
    if (not archivo.is_open()){
        cout<<"El archivo "<<nombre_archivo<<" no se ha podido aperturar."<<endl;
        exit(10);
    }
    
    //paso 1: creación de los buffers con un tamaño adecuado
    int i=0;
    int buffer_codigo[50];
    char *buffer_nombre[50];
    char **buffer_cursos[50];

    while(true){
        //se hace la lectura del código        
        archivo>>buffer_codigo[i];                 
        if(archivo.eof())
            break;
        
        archivo.get();        
        //se hace la lectura del nombre
        buffer_nombre[i] = sacar_nombre(archivo);                  
        buffer_cursos[i] = sacar_cursos(archivo);
        i++;
    }
    
    //paso 2: creamos los bloque de memoria con cantida exacta
    conjuntoAlumnoYCursos.cantidad = i;
    conjuntoAlumnoYCursos.codigo = new int[conjuntoAlumnoYCursos.cantidad];
    conjuntoAlumnoYCursos.nombre = new char*[conjuntoAlumnoYCursos.cantidad];
    conjuntoAlumnoYCursos.cursos = new char**[conjuntoAlumnoYCursos.cantidad];
    
    //paso 3: pasamos del buffer a los bloques dinámicos
    for(i=0; i<conjuntoAlumnoYCursos.cantidad; i++){
        conjuntoAlumnoYCursos.codigo[i] = buffer_codigo[i];
        conjuntoAlumnoYCursos.nombre[i] = buffer_nombre[i];
        conjuntoAlumnoYCursos.cursos[i] = buffer_cursos[i];
    }    
    archivo.close();
}

char *sacar_nombre(ifstream &archivo){
    char buffer_nombre[100];
    archivo.getline(buffer_nombre, 100, ',');    
    char *nombre = new char[strlen(buffer_nombre)+1];
    strcpy(nombre, buffer_nombre);
    return nombre;
}

char **sacar_cursos(ifstream &archivo){
    //en esta función se utiliza el método de asignación de memoria exacta
    char *buffer_cursos[50];
    int cantidad = 1;
    while(true){
        char *curso = new char[7]; //no funciona el método si colocamos char curso[7]. Esto se consideraría un error grave en el curso.
        archivo.get(curso, 7);
        buffer_cursos[cantidad-1] = curso;
        cantidad++;
        int c=archivo.get();
        if (c=='\n' or c==13)
            break;
    }
    buffer_cursos[cantidad-1] = nullptr; //no se retorna la cantidad de cursos leídos, por lo tanto la terminación en null permitirá saber que no hay más datos para leer
    char **cursos = new char*[cantidad];
    for(int i=0; i<cantidad; i++)
        cursos[i] = buffer_cursos[i];
    return cursos;
}

void reporte_de_alumnos(ConjuntoAlumnoYCursos conjuntoAlumnoYCursos, const char *nombre_archivo){
    ofstream archivo(nombre_archivo, ios::out);
    if (not archivo.is_open()){
        cout<<"El archivo "<<nombre_archivo<<" no se ha podido crear."<<endl;
        exit(20);
    }
    for(int i=0; i<conjuntoAlumnoYCursos.cantidad; i++){
        archivo<<left<<setw(10)<<conjuntoAlumnoYCursos.codigo[i]<<conjuntoAlumnoYCursos.nombre[i]<<endl;
        for(int j=0; conjuntoAlumnoYCursos.cursos[i][j]; j++){
            archivo<<right<<setw(15)<<conjuntoAlumnoYCursos.cursos[i][j]<<endl;
        }
    }
    archivo.close();
}













