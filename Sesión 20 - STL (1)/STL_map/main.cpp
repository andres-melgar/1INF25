#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, double> mapaReales;

    mapaReales[4] = 56.78;
    mapaReales[7] = 78.38;
    mapaReales[1] = 15.67;

    for (auto x : mapaReales)
        cout << x.first << " " << x.second << endl;

    map<int, double>::iterator it = mapaReales.find(2);
    if (it != mapaReales.end())
        cout << it->second << endl;
    else
        cout << "No existe" << endl;

    map<string, string> mapaCadenas;
    mapaCadenas["usuario"] = "amelgar";
    mapaCadenas["contraseña"] = "123456";
    mapaCadenas["base_de_datos"] = "prog2_soft";
    mapaCadenas["ip"] = "localhost";

    return 0;
}