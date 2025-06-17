#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

template <typename T>
void imprime_lista(list<T> _list);

int main(int argc, char** argv) {
    list<double> lista1{1.2, 3.4, 6.9, 8.65, 4.3};
    list<double> lista2{7.65, 9.23};

    cout << "L1: cantidad de elementos: " << lista1.size() << endl;
    cout << "L2: cantidad de elementos: " << lista2.size() << endl;

    imprime_lista(lista1);
    cout << endl;

    lista2.push_back(0.5);
    lista2.push_front(10.5);

    list<double>::iterator it = lista2.begin();
    it++;
    it++;
    lista2.insert(it, 3.33);
    imprime_lista(lista2);

    double primero, ultimo;
    primero = lista2.front();
    ultimo = lista2.back();
    cout << primero << ", " << ultimo << endl;

    lista2.pop_back();
    lista2.pop_front();
    imprime_lista(lista2);

    lista1.sort();
    lista2.sort();
    imprime_lista(lista1);
    imprime_lista(lista2);

    return 0;
}

template <typename T>
void imprime_lista(list<T> _list) {
    for (T dato : _list)
        cout << setw(5) << dato;
    cout << endl;
}