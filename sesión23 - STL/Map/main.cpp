#include <iostream>
#include <map>

using namespace std;

int main(int argc, char** argv) {
    map<int, double> mapa_reales;
    mapa_reales[4] = 56.78;
    mapa_reales[7] = 78.38;
    mapa_reales[450] = 19.87;

    for (auto x : mapa_reales)
        cout << x.first << " - " << x.second << endl;

    map<string, string> mapa_cadena;
    mapa_cadena["usuario"] = "amelgar";
    mapa_cadena["contraseña"] = "Programacion2!";

    map<string, string>::iterator it = mapa_cadena.find("usuario");
    if (it != mapa_cadena.end())
        cout << it->second << endl;
    return 0;
}

