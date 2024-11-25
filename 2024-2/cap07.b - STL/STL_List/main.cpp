#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

template <typename T>
void imprimir_lista(list<T> _list);

void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();
void test08();
void test09();

int main(int argc, char** argv) {
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
    test07();
    test08();
    test09();
    return 0;
}

void test09() {
    cout << "test09: merge" << endl;
    list<double> lista1{5.5, 2.5, 3.5, 4.5, 1.5};
    list<double> lista2{1.75, 4.25, 3.75, 2.97, 6.3};

    lista1.sort();
    lista2.sort();
    lista1.merge(lista2);
    imprimir_lista(lista1);
}

void test08() {
    cout << "test08: primero y último con eliminación" << endl;
    list<double> lista{5.5, 2.5, 3.5, 4.5, 1.5};

    imprimir_lista(lista);

    double primero = lista.front();
    double ultimo = lista.back();
    cout << "Primero: " << primero << endl;
    cout << "Último: " << ultimo << endl;

    lista.pop_back();
    lista.pop_front();
    
    imprimir_lista(lista);
}

void test07() {
    cout << "test07: primero y último sin eliminar" << endl;
    list<double> lista{5.5, 2.5, 3.5, 4.5, 1.5};

    imprimir_lista(lista);

    double primero = lista.front();
    double ultimo = lista.back();
    cout << "Primero: " << primero << endl;
    cout << "Último: " << ultimo << endl;

    imprimir_lista(lista);
}

void test06() {
    cout << "test06: recorrido secuencial con iterador" << endl;
    list<double> lista{5.5, 2.5, 3.5, 4.5, 1.5};

    for (list<double>::iterator it = lista.begin(); it != lista.end(); it++) {
        cout << setw(5) << *it;
    }
    cout << endl;
}

void test05() {
    cout << "test05: iteradores e inserción" << endl;
    list<double> lista{5.5, 2.5, 3.5, 4.5, 1.5};

    imprimir_lista(lista);

    list<double>::iterator it = lista.begin();
    it++;
    it++;
    lista.insert(it, 7.5);

    imprimir_lista(lista);
}

void test04() {
    cout << "test04: inserción y ordenar" << endl;
    list<double> lista{5.5, 2.5, 3.5, 4.5, 1.5};

    imprimir_lista(lista);

    lista.push_front(6.5);
    lista.push_back(0.5);
    lista.sort();

    imprimir_lista(lista);
}

void test03() {
    cout << "test03: inserción al inicio y al final" << endl;
    list<double> lista{5.5, 2.5, 3.5, 4.5, 1.5};

    imprimir_lista(lista);

    lista.push_front(6.5);
    lista.push_back(0.5);

    imprimir_lista(lista);
}

void test02() {
    cout << "test02: creación e impresión de lista" << endl;
    list<double> lista{5.5, 2.5, 3.5, 4.5, 1.5};

    cout << "Cantidad de elementos: " << lista.size() << endl;

    imprimir_lista(lista);
}

void test01() {
    cout << "test01: creación e impresión de lista" << endl;
    list<double> lista{5.5, 2.5, 3.5, 4.5, 1.5};

    cout << "Cantidad de elementos: " << lista.size() << endl;

    for (double elemento : lista)
        cout << setw(5) << elemento;
    cout << endl;
}

template <typename T>
void imprimir_lista(list<T> _list) {
    for (double elemento : _list)
        cout << setw(5) << elemento;
    cout << endl;
}