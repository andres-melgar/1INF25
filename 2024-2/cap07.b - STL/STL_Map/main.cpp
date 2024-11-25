#include <iostream>
#include <map>

using namespace std;

void test01();
void test02();
void test03();
void test04();

int main(int argc, char** argv) {
    test01();
    test02();
    test03();
    test04();
    return 0;
}

void test04() {
    cout << "Creación de un mapa (diccionario) de parámetros." << endl;
    map<string, double> mapaParametros;

    mapaParametros["IGV"] = 0.18;
    mapaParametros["descuento"] = 0.10;

    map<string, double>::iterator it;
    it = mapaParametros.find("descuento");
    if (it != mapaParametros.end())
        cout << it->second << endl;
    else
        cout << "No se encontró la llave de búsqueda" << endl;
}

void test03() {
    cout << "Creación de un mapa (diccionario) de parámetros." << endl;
    map<string, string> mapaParametros;

    mapaParametros["usuario"] = "amelgar";
    mapaParametros["contraseña"] = "Programación2";
    mapaParametros["base_datos"] = "soft_prog2";
    mapaParametros["IP"] = "localhost";

    map<string, string>::iterator it;
    it = mapaParametros.find("IP");
    if (it != mapaParametros.end())
        cout << it->second << endl;
}

void test02() {
    cout << "Búsqueda en un mapa (diccionario)." << endl;
    map<int, double> mapaReales;

    mapaReales[4] = 56.89;
    mapaReales[7] = 78.93;
    mapaReales[3] = 45.21;

    map<int, double>::iterator it;
    int llave_de_busqueda = 7;
    it = mapaReales.find(llave_de_busqueda); //7 es una llave de búsqueda
    if (it != mapaReales.end())
        cout << "El valor vinculado a la llave es: " << it->second << endl;
}

void test01() {
    cout << "Creación de un mapa (diccionario)." << endl;
    //map: se tienen dos elementos
    //una llave (una llave de búsqueda)
    //un valor asociado a la llave
    map<int, double> mapaReales;

    mapaReales[4] = 56.89;
    mapaReales[7] = 78.93;

    for (auto x : mapaReales)
        cout << "[" << x.first << ", " << x.second << "]" << endl;
}

