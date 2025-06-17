#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

template <typename T>
void imprimir_vector(vector<T> _vector);

/*Ejemplo usando la STL */
void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();

int main(int argc, char** argv) {
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
    test07();
    return 0;
}

void test07() {
    cout << "test07" << endl;
    vector<int> vector_enteros = {10, 20, 30, 40, 50};
    
    for(vector<int>::iterator it=vector_enteros.begin(); it != vector_enteros.end(); it++)
        cout << setw(5) << *it;
    cout<<endl;
}

void test06() {
    cout << "test06" << endl;
    vector<int> vector_enteros = {10, 20, 30, 40, 50};
    imprimir_vector(vector_enteros);
    
    vector_enteros.pop_back();
    imprimir_vector(vector_enteros);
    
    int inicio = vector_enteros.front();
    int fin = vector_enteros.back();
    cout << inicio << " - " << fin << endl;
    imprimir_vector(vector_enteros);
}
    
void test05() {
    cout << "test05" << endl;
    vector<int> vector_enteros(5, 3);
    imprimir_vector(vector_enteros);
    
    vector_enteros.assign(10, 4);
    imprimir_vector(vector_enteros);
    
    vector_enteros.assign({15, 16, 17, 18, 19});
    imprimir_vector(vector_enteros);
}

void test04() {
    cout << "test04" << endl;
    vector<int> vector_enteros = {10, 20, 30, 40, 50, 60};
    imprimir_vector(vector_enteros);
    
    vector<double> vector_reales = {19.45, 18.76, 13.45};
    imprimir_vector(vector_reales);
}

void test03() {
    cout << "test03" << endl;
    vector<int> vector_enteros;
    vector_enteros.push_back(10);
    vector_enteros.push_back(20);
    vector_enteros.push_back(30);
    vector_enteros.push_back(40);

    for (int entero : vector_enteros)
        cout << setw(5) << entero;
    cout << endl;
}

void test02() {
    cout << "test02" << endl;
    vector<int> vector_enteros;
    vector_enteros.push_back(10);
    vector_enteros.push_back(20);
    vector_enteros.push_back(30);
    vector_enteros.push_back(40);

    for (int i = 0; i < vector_enteros.size(); i++)
        cout << setw(5) << vector_enteros[i];
    cout << endl;
}

void test01() {
    cout << "test01" << endl;
    vector<int> vector_enteros;
    vector_enteros.push_back(10);
    vector_enteros.push_back(20);
    vector_enteros.push_back(30);
    vector_enteros.push_back(40);
    cout << "El número de elementos es: " << vector_enteros.size() << endl;

    vector<double> vector_reales;
    vector_reales.push_back(17.87);
    vector_reales.push_back(14.45);
    vector_reales.push_back(13.23);
    cout << "El número de elementos es: " << vector_reales.size() << endl;
}

template <typename T>
void imprimir_vector(vector<T> _vector) {
    for (T dato : _vector)
        cout << setw(6) << dato;
    cout << endl;
}
