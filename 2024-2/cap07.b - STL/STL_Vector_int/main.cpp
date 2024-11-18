#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();
void test08();
void test09();
void test10();
void test11();
void test12();
void test13();
void test14();
void test15();

template <typename T>
void imprime_capacidad(vector<T> _vector);

template <typename T>
void imprimir_contenido(vector<T> _vector);

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
    test10();
    test11();
    test12();
    test13();
    test14();
    test15();
    return 0;
}

void test15() {
    cout << "test15: vector de enteros - borrar todos los elementos" << endl;
    vector<int> vector_enteros = {5779, 4870, 3070, 3670, 665, 555};
    
    sort(vector_enteros.begin(), vector_enteros.end());
    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);
    
    vector_enteros.clear();
    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);
}

void test14() {
    cout << "test14: vector de enteros - borrar elementos con iteradores 2" << endl;
    vector<int> vector_enteros = {10, 20, 30, 40, 50, 60};
    vector<int>::iterator it1 = vector_enteros.begin();
    vector<int>::iterator it2 = vector_enteros.begin();
    it1 += 1;
    it2 += 3;
    vector_enteros.erase(it1, it2);
    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);
}

void test13() {
    cout << "test13: vector de enteros - borrar elementos con iteradores 1" << endl;
    vector<int> vector_enteros = {10, 20, 30, 40, 50, 60};
    vector<int>::iterator it1 = vector_enteros.begin();
    vector<int>::iterator it2 = vector_enteros.begin();
    it1 += 1;
    it2 += 3;
    vector_enteros.erase(it1);
    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);
}

void test12() {
    cout << "test12: vector de enteros - iteradores de la STL" << endl;
    vector<int> vector_enteros = {10, 20, 30, 40, 50, 60};

    vector<int>::iterator it1 = vector_enteros.begin();
    vector<int>::iterator it2 = vector_enteros.begin();
    it1 += 1;
    it2 += 3;
    cout << setw(5) << *it1 << endl << endl;
    cout << setw(5) << *it2 << endl << endl;
}

void test11() {
    cout << "test11: vector de enteros - iteradores de la STL" << endl;
    vector<int> vector_enteros = {10, 20, 30, 40, 50, 60};

    for (vector<int>::iterator it = vector_enteros.begin(); it != vector_enteros.end(); it++)
        cout << setw(5) << *it;
    cout << endl << endl;
}

void test10() {
    cout << "test10: vector de enteros - obtener inicio y fin" << endl;
    vector<int> vector_enteros;
    vector_enteros.assign({15, 16, 17, 18, 19, 20});
    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);

    int entero_inicio = vector_enteros.front();
    int entero_fin = vector_enteros.back();
    cout << "[" << entero_inicio << ", " << entero_fin << "]" << endl;

    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);
}

void test09() {
    cout << "test09: vector de enteros - retiro de elementos 1" << endl;

    vector<int> vector_enteros;
    vector_enteros.assign({15, 16, 17, 18, 19, 20});
    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);

    vector_enteros.pop_back();
    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);
}

void test08() {
    cout << "test08: vector de enteros - reemplazo de contenedor 2" << endl;

    vector<int> vector_enteros(20, -1);
    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);

    vector_enteros.assign({15, 16, 17, 18, 19, 20});
    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);
}

void test07() {
    cout << "test07: vector de enteros - reemplazo de contenedor 1" << endl;

    vector<int> vector_enteros(20, -1);
    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);

    vector_enteros.assign(15, 0);
    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);
}

void test06() {
    cout << "test06: vector de enteros - capacidad y valor inicial" << endl;

    vector<int> vector_enteros(20, -1);

    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);
}

void test05() {
    cout << "test05: vector de enteros - capacidad inicial" << endl;
    vector<int> vector_enteros(20);

    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);
}

void test04() {
    cout << "test04: vector de enteros - inicialización" << endl;
    vector<int> vector_enteros = {10, 20, 30, 40, 50, 60};

    imprime_capacidad(vector_enteros);
    imprimir_contenido(vector_enteros);
}

void test03() {
    cout << "test03: vector de enteros - recorrido con iterador" << endl;

    vector<int> vector_enteros;

    vector_enteros.push_back(10);
    vector_enteros.push_back(20);
    vector_enteros.push_back(30);
    vector_enteros.push_back(40);
    vector_enteros.push_back(50);

    for (int entero : vector_enteros)
        cout << setw(5) << entero;
    cout << endl << endl;

    imprimir_contenido(vector_enteros);
}

void test02() {
    cout << "test02: vector de enteros - recorrido con for" << endl;
    vector<int> vector_enteros;

    vector_enteros.push_back(10);
    vector_enteros.push_back(20);
    vector_enteros.push_back(30);
    vector_enteros.push_back(40);
    vector_enteros.push_back(50);

    for (int i = 0; i < vector_enteros.size(); i++)
        cout << setw(5) << vector_enteros[i];
    cout << endl << endl;
}

void test01() {
    cout << "test01: vector de enteros" << endl;
    vector<int> vector_enteros;

    imprime_capacidad(vector_enteros);

    vector_enteros.push_back(19);
    imprime_capacidad(vector_enteros);

    vector_enteros.push_back(20);
    imprime_capacidad(vector_enteros);

    vector_enteros.push_back(30);
    imprime_capacidad(vector_enteros);

    vector_enteros.push_back(40);
    vector_enteros.push_back(50);
    imprime_capacidad(vector_enteros);
}

template <typename T>
void imprime_capacidad(vector<T> _vector) {
    cout << "Número de elementos:  " << _vector.size() << endl;
    cout << "Capacidad del vector: " << _vector.capacity() << endl << endl;
}

template <typename T>
void imprimir_contenido(vector<T> _vector) {
    for (int entero : _vector)
        cout << setw(5) << entero;
    cout << endl << endl;
}